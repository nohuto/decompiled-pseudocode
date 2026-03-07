void PopReleaseAdaptiveLock()
{
  char v0; // bl
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  GUID v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v0 = PopAdaptiveContext;
  v1 = dword_140C398D8;
  PopAdpmLockThread = 0LL;
  *(_WORD *)((char *)&v5 + 1) = 0;
  BYTE3(v5) = 0;
  ExReleaseResourceLite(&PopAdpmLock);
  KeLeaveCriticalRegion();
  if ( v0 )
  {
    v8 = 0;
    v7 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
    PopSendSessionInfo(v1, v2, v3, (__int64)&v7);
    v4 = v1;
    v6 = 7LL;
    v5 = 0LL;
    PopDispatchStateCallout(&v5, (__int64)&v4);
  }
}
