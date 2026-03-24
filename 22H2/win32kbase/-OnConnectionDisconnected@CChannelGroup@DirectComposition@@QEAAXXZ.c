/*
 * XREFs of ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C00AAED8
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0057700 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0086A98 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C00AAF84 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannelGroup::OnConnectionDisconnected(DirectComposition::CChannelGroup *this)
{
  void *v2; // rax
  volatile signed __int32 *v3; // rbx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(this, &v4);
    v3 = (volatile signed __int32 *)v2;
    if ( !v2 )
      break;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v2 + 6, 3, 4) != 4
      && !_InterlockedCompareExchange((volatile signed __int32 *)v2 + 6, 1, 0)
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v2 + 4)) )
    {
      if ( _InterlockedCompareExchange(v3 + 6, 2, 1) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, 0LL);
      ExReleaseResourceLite(*((PERESOURCE *)v3 + 4));
      KeLeaveCriticalRegion();
    }
  }
}
