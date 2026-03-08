/*
 * XREFs of IopSymlinkCreateECP @ 0x14077E314
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14077E4E8 (IopSymlinkInitializeSymlinkInfo.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v5; // r11d
  char v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 result; // rax
  _WORD *v13; // rdi
  __int64 FileObjectExtension; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int16 v18; // [rsp+38h] [rbp-40h]
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  v5 = *a3;
  EcpContext = 0LL;
  v9 = 0;
  if ( v5 > 2 && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v5 >> 1) - 2) == 92 )
  {
    v9 = 1;
    *a3 = v5 - 2;
  }
  v10 = *(_QWORD *)(a2 + 64);
  v11 = a5;
  if ( !v10 || (FileObjectExtension = IopGetFileObjectExtension(v10, 5, 0LL), (v15 = FileObjectExtension) == 0) )
  {
    result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
    if ( (int)result < 0 )
      goto LABEL_8;
    v18 = a4;
    v13 = EcpContext;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      (unsigned int)*a3 + 32,
      *((_QWORD *)a3 + 1),
      *a3,
      0,
      0LL,
      0,
      v18,
      0,
      0LL);
    goto LABEL_7;
  }
  v16 = *a3 + 2 + *(unsigned __int16 *)(FileObjectExtension + 16);
  if ( v16 >= 0xFFFF )
  {
    result = 3221225734LL;
    goto LABEL_8;
  }
  result = IopSymlinkAllocateAndAddECP(Irp, &EcpContext);
  if ( (int)result >= 0 )
  {
    v17 = v16 + 32;
    v13 = EcpContext;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v17,
      *((_QWORD *)a3 + 1),
      *a3,
      0,
      *(_QWORD *)(v15 + 24),
      *(_WORD *)(v15 + 16),
      *(_WORD *)(v15 + 4),
      *(_WORD *)(v15 + 2),
      0LL);
    *v13 = *(_WORD *)v15 + v13[8] - *(_WORD *)(v15 + 16);
LABEL_7:
    *v11 = v13;
    result = 0LL;
  }
LABEL_8:
  if ( v9 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v11 = 0LL;
  return result;
}
