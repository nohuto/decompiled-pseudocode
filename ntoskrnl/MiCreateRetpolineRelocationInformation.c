/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x1407F5B50
 * Callers:
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140828D60 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14036BA3C (RtlCreateRetpolineRelocationInformation.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140861430 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // r14d
  _DWORD *Pool; // rdi
  unsigned int v11; // ebx
  char *v12; // rax
  int RetpolineRelocationInformation; // ebx
  int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-38h]

  v6 = a3 >> 12;
  v9 = 8 * (a3 >> 12);
  Pool = MiAllocatePool(256, v9 + 56, 0x7252694Du);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v11 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
  v12 = (char *)MiAllocatePool(256, v11, 0x7252694Du);
  *((_QWORD *)Pool + 6) = v12;
  if ( !v12 )
  {
    RetpolineRelocationInformation = -1073741670;
    goto LABEL_8;
  }
  LODWORD(v16) = v11;
  RetpolineRelocationInformation = RtlCreateRetpolineRelocationInformation(
                                     a3,
                                     *(_DWORD *)(a1 + 4),
                                     *(_QWORD *)(a1 + 8),
                                     *(_QWORD *)(a1 + 16),
                                     *(_QWORD *)(a1 + 24),
                                     v12,
                                     v16,
                                     Pool + 14,
                                     v9);
  if ( RetpolineRelocationInformation < 0 )
  {
LABEL_8:
    MiFreeRetpolineRelocationInformation(Pool);
    return (unsigned int)RetpolineRelocationInformation;
  }
  Pool[2] = *(_DWORD *)a1;
  v14 = dword_140C694FC + 4095;
  Pool[1] = a2;
  *Pool = ((a3 + 4095) & 0xFFFFF000) + (v14 & 0xFFFFF000);
  RetpolineRelocationInformation = 0;
  *a4 = Pool;
  return (unsigned int)RetpolineRelocationInformation;
}
