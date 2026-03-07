void __fastcall rimAddToObTrackList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 **v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 **v17; // rcx
  __int64 v18; // rax

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 == 1 )
  {
    v12 = (__int64 *)(a1 + 16);
    v13 = SGDGetUserSessionState(v7, v6, v8, v9) + 304;
  }
  else
  {
    v11 = 2LL;
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      v12 = (__int64 *)(a1 + 16);
      v13 = SGDGetUserSessionState(v11, v6, v8, v9) + 336;
      v14 = *(__int64 ***)(v13 + 8);
      if ( *v14 == (__int64 *)v13 )
      {
        *v12 = v13;
        *(_QWORD *)(a1 + 24) = v14;
        *v14 = v12;
        goto LABEL_6;
      }
LABEL_12:
      __fastfail(3u);
    }
    v12 = (__int64 *)(a1 + 16);
    v13 = SGDGetUserSessionState(2LL, v6, v8, v9) + 320;
  }
  v17 = *(__int64 ***)(v13 + 8);
  if ( *v17 != (__int64 *)v13 )
    goto LABEL_12;
  *v12 = v13;
  v12[1] = (__int64)v17;
  *v17 = v12;
LABEL_6:
  *(_QWORD *)(v13 + 8) = v12;
  *(_BYTE *)(a1 + 8) = 1;
  v18 = SGDGetUserSessionState(v17, v14, v15, v16);
  *(_QWORD *)(v18 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 240, 0LL);
  KeLeaveCriticalRegion();
}
