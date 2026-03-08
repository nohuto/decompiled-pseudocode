/*
 * XREFs of ?EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026786C
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267710 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  char *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
    return 1;
  v4 = *((_QWORD *)this + 27);
  if ( !v4
    || (v5 = *(_DWORD **)(v4 + 16)) == 0LL
    || v5[9] != 92
    || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 40LL))(v5) )
  {
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v11) )
    {
      v6 = (char *)v11;
      *(_DWORD *)v11 = 28;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 216;
      v7 = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 2) = v7;
      v6[16] = (*((_BYTE *)this + 464) & 1) == 0;
      *((_DWORD *)v6 + 6) = *((_DWORD *)this + 36);
      v8 = *((_QWORD *)this + 27);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
          *((_DWORD *)v6 + 3) = *(_DWORD *)(v9 + 32);
      }
      *((_BYTE *)this + 464) |= 1u;
      *((_DWORD *)this + 4) |= 0x400u;
      return 1;
    }
  }
  return 0;
}
