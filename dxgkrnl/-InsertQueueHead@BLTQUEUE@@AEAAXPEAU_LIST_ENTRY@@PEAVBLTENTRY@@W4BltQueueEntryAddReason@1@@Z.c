/*
 * XREFs of ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C0225296
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CB6F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0xqdtq_EtwWriteTransfer @ 0x1C006DB34 (McTemplateK0xqdtq_EtwWriteTransfer.c)
 */

LONG __fastcall BLTQUEUE::InsertQueueHead(__int64 a1, __int64 *a2, __int64 a3)
{
  struct _KMUTANT *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]

  v3 = (struct _KMUTANT *)(a1 + 160);
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  if ( a2 == (__int64 *)(a1 + 216) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v14 = *(_DWORD *)(a3 + 60);
    LODWORD(v13) = *(_DWORD *)(a1 + 260);
    McTemplateK0xqdtq_EtwWriteTransfer(v8, v7, v9, *(_QWORD *)(a1 + 248), v13, v14);
  }
  v10 = *a2;
  v11 = (_QWORD *)(a3 + 8);
  if ( *(__int64 **)(*a2 + 8) != a2 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(a3 + 16) = a2;
  *(_QWORD *)(v10 + 8) = v11;
  *a2 = (__int64)v11;
  return KeReleaseMutex(v3, 0);
}
