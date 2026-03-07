char PpmCheckSnapAllDeliveredPerformance()
{
  __int64 v0; // rcx
  __int64 v1; // rsi
  char v2; // di
  char v3; // r12
  __int64 ReferenceTime; // r13
  __int64 Prcb; // rax
  __int64 v6; // rax
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  bool v12; // al
  __int64 i; // rbx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // esi
  _DWORD *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int16 v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+3Ah] [rbp-C6h]
  __int16 v24; // [rsp+3Eh] [rbp-C2h]
  _QWORD v25[34]; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v25[1], 0, 0x100uLL);
  v1 = PpmPerfDomainHead;
  v2 = 0;
  v23 = 0;
  v3 = 0;
  v24 = 0;
  ReferenceTime = 0LL;
  v19 = 0;
  while ( (__int64 *)v1 != &PpmPerfDomainHead )
  {
    v8 = 0;
    v19 = 0;
    if ( *(_DWORD *)(v1 + 296) )
    {
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)(v1 + 312) + 144 * v9;
        if ( *(_DWORD *)(v10 + 16) == 1 )
        {
          if ( !ReferenceTime )
            ReferenceTime = HvlGetReferenceTime(v0);
          v11 = *(_QWORD *)v10;
          v12 = (unsigned __int8)PpmPerfSnapDeliveredPerformance(*(_QWORD *)v10, 0LL, ReferenceTime - 50000) == 0;
          *(_BYTE *)(v11 + 72) = v12;
          if ( v12 )
          {
            HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v10 + 20));
            v3 = 1;
          }
        }
        v9 = ++v8;
      }
      while ( v8 < *(_DWORD *)(v1 + 296) );
      v19 = v8;
    }
    v1 = *(_QWORD *)v1;
  }
  LODWORD(v25[0]) = 2097153;
  memset((char *)v25 + 4, 0, 0x104uLL);
  KiCopyAffinityEx((__int64)v25, 0x20u, (unsigned __int16 *)&PpmCheckRegistered);
  v21 = v25[1];
  v20 = v25;
  v22 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) )
  {
    Prcb = KeGetPrcb(v19);
    if ( (unsigned __int8)PpmPerfSnapDeliveredPerformance(Prcb + 33968, 0LL, 0LL) )
      KeRemoveProcessorAffinityEx(v25, v19);
  }
  if ( v3 )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      v19 = 0;
      if ( *(_DWORD *)(i + 296) )
      {
        v14 = 0LL;
        v15 = 0;
        LODWORD(v16) = 0;
        v17 = 0;
        do
        {
          v18 = (_DWORD *)(*(_QWORD *)(i + 312) + 144 * v14);
          if ( v18[4] == 1 )
          {
            v16 = v15;
            if ( *(_BYTE *)(*(_QWORD *)v18 + 72LL) )
            {
              *(_BYTE *)(*(_QWORD *)v18 + 72LL) = 0;
              LOBYTE(v16) = 1;
              PpmPerfSnapDeliveredPerformance(*(_QWORD *)v18, v16, ReferenceTime);
              LODWORD(v16) = v17;
            }
          }
          v14 = (unsigned int)(v16 + 1);
          v15 = v14;
          LODWORD(v16) = v16 + 1;
          v17 = v14;
        }
        while ( (unsigned int)v14 < *(_DWORD *)(i + 296) );
        v19 = v14;
      }
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(v25);
  if ( !PpmCheckCount )
    return 1;
  v21 = v25[1];
  v20 = v25;
  v22 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) )
  {
    v6 = KeGetPrcb(v19);
    PpmPerfQueueAction(v6, 0LL);
  }
  return v2;
}
