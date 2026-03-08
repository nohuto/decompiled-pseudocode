/*
 * XREFs of ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C6D8
 * Callers:
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C8E0 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 DxgkWin32kInterface; // rax
  struct _OBJECT_TYPE *v12; // rax
  int v14; // [rsp+20h] [rbp-28h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  while ( (*((_DWORD *)this + 4) & 0x100) != 0 || *((_QWORD *)this + 12) < *((_QWORD *)this + 13) )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v4;
    if ( (unsigned __int64)v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        return *((_QWORD *)this + 12) == *((_QWORD *)this + 13);
      v4 = v15;
    }
    v5 = *((_QWORD *)this + 13) - *((_QWORD *)this + 12);
    if ( v5 >= ((unsigned __int64)v4 - 16) >> 3 )
      v5 = ((unsigned __int64)v4 - 16) >> 3;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 8 * v5 + 16, &v15);
    v8 = (char *)v15;
    *(_DWORD *)v15 = 8 * v5 + 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 38;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    v9 = 0;
    v8[12] = *((_QWORD *)this + 12) != 0LL;
    if ( v5 )
    {
      v10 = 0LL;
      do
      {
        v15 = (void *)-1LL;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
        v12 = (struct _OBJECT_TYPE *)(*(__int64 (**)(void))(DxgkWin32kInterface + 480))();
        OpenDwmHandle(
          *(PVOID *)(*((_QWORD *)this + 11) + 8 * (v10 + *((_QWORD *)this + 12))),
          v12,
          0xF0001u,
          v10 + *((_QWORD *)this + 12),
          v14,
          &v15);
        ++v9;
        *(_QWORD *)&v8[8 * v10 + 16] = v15;
        v10 = v9;
      }
      while ( v9 < v5 );
    }
    *((_QWORD *)this + 12) += v5;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  return *((_QWORD *)this + 12) == *((_QWORD *)this + 13);
}
