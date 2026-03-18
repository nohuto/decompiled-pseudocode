/*
 * XREFs of ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022E510
 * Callers:
 *     ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022E5F0 (-EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C009090C (OpenDwmHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  struct _OBJECT_TYPE *v4; // rax
  __int64 v5; // r9
  char *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  v10 = (void *)-1LL;
  if ( *((_QWORD *)this + 11) )
  {
    v4 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0296850)();
    OpenDwmHandle(*((PVOID *)this + 11), v4, 0x1F0000u, v5, v8, &v10);
  }
  v9 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v9) )
  {
    v6 = (char *)v9;
    *(_DWORD *)v9 = 60;
    *((_DWORD *)v6 + 1) = 125;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 5) = *((_DWORD *)this + 18);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 8);
    *((_DWORD *)v6 + 6) = *((_DWORD *)this + 19);
    *(_QWORD *)(v6 + 28) = v10;
    *((_DWORD *)v6 + 9) = *((_DWORD *)this + 24);
    *((_DWORD *)v6 + 10) = *((_DWORD *)this + 25);
    *(_QWORD *)(v6 + 44) = *(_QWORD *)((char *)this + 140);
    *((_DWORD *)v6 + 13) = *((_DWORD *)this + 39);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
