/*
 * XREFs of ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C0091DA8
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0091094 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0091EF4 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00AA51C (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannelGroup::OnConnectionReconnected(DirectComposition::CChannelGroup *this)
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
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v2 + 6, 4, 3) == 3
      && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v2 + 4)) )
    {
      if ( _InterlockedCompareExchange(v3 + 6, 5, 4) == 4 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 56LL))(v3);
      ExReleaseResourceLite(*((PERESOURCE *)v3 + 4));
      KeLeaveCriticalRegion();
    }
  }
}
