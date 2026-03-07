__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rax
  __int64 v2; // rcx
  int v3; // eax
  struct CMonitorTopology *v4; // rdi
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]
  struct CMonitorTopology *v10; // [rsp+70h] [rbp+8h] BYREF

  v0 = *(_QWORD **)(gptiCurrent + 456LL);
  v1 = (__int64 *)v0[1];
  if ( v1 )
  {
    v2 = *v1;
    v3 = *(_DWORD *)(*v1 + 64);
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v2 + 64) = v3 & 0xFFFFFFFD;
      v4 = (struct CMonitorTopology *)v0[32];
      v0[32] = 0LL;
      v10 = v4;
      v8 = 0LL;
      v9 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      if ( v4 )
        PushW32ThreadLock((__int64)v4, &v8, (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
      PushW32ThreadLock((__int64)v0, &v6, UserDereferenceObject);
      ObfReferenceObject(v0);
      xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v4, *(_WORD *)(gpsi + 6996LL), 1u, 0LL);
      PopAndFreeW32ThreadLock((__int64)&v6);
      CMonitorTopology::UnlockAndRelease(&v10, (struct _TL *)&v8);
    }
  }
  return 0LL;
}
