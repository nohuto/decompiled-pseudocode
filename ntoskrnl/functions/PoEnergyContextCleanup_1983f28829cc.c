void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  _QWORD *v16; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 2280);
  if ( !v1 )
    return;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = 0LL;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v6 = 3LL;
  do
  {
    v8 = RtlStateDurationCapture((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
    if ( v7 == v1 + 13 )
    {
      v9 = v1 + 38;
    }
    else
    {
      if ( v7 != v1 + 14 )
        goto LABEL_11;
      v9 = v1 + 39;
    }
    if ( v9 && v8 )
      RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
LABEL_11:
    ++v4;
    --v6;
  }
  while ( v6 );
  RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
  v13[1] = 0;
  v15 = 0LL;
  v13[0] = 4;
  v16 = v1;
  v14 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
  PopEtEnumEnergyTrackers(v10, (__int64)v13);
  PopReleaseRwLock((ULONG_PTR)(v1 + 54));
  v11 = v1[56];
  if ( v11 )
  {
    PopEtAppIdDereference(v11);
    v1[56] = 0LL;
  }
  v12 = v1[57];
  if ( v12 )
  {
    RtlInternEntryDereference(PopEtGlobals + 56, v12);
    v1[57] = 0LL;
  }
}
