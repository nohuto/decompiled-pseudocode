char __fastcall RIMArmWatchDog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_QWORD *)(v4 + 360) )
  {
    v4 = SGDGetUserSessionState(v6, v5, v7, v8);
    if ( !*(_BYTE *)(v4 + 354) )
    {
      *(_BYTE *)(SGDGetUserSessionState(v10, v9, v11, v12) + 354) = 1;
      v17 = SGDGetUserSessionState(v14, v13, v15, v16);
      LOBYTE(v4) = KeSetTimer(*(PKTIMER *)(v17 + 360), (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return v4;
}
