char __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v5; // r14
  LARGE_INTEGER v6; // rbx
  int v7; // r12d
  __int64 active; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // xmm1_8
  char result; // al
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // xmm1_8
  __int64 v16; // r8
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  _BYTE v22[24]; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+C8h] [rbp+48h]
  int v24; // [rsp+D8h] [rbp+58h]

  if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
    InputTraceLogging::RIM::SuppressAllActiveContacts(*(const struct RIMDEV **)(a2 + 16));
  v17 = *(_QWORD *)(a2 + 864) + 1LL;
  v24 = *(_DWORD *)(a2 + 836) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(struct RIMDEV **)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v23 = 0;
  v7 = 0;
  active = RIMCmActiveContactsBegin((__int64)v22, a2);
  v9 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v9;
  v10 = RIMCmActiveContactsEnd((__int64)v22, a2);
  v11 = *(_QWORD *)(v10 + 16);
  v18 = *(_OWORD *)v10;
  v19 = v11;
  result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v20, (__int64)&v18);
  if ( result )
  {
    do
    {
      v13 = v21 - 16;
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v21 - 16) )
      {
        RIMCmAddContactSuppressionReasons(a2, v13);
        if ( !v23 )
        {
          v23 = 1;
          v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                 a1,
                 v5,
                 (LARGE_INTEGER)v6.QuadPart);
        }
        if ( v7 )
          RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v5, v13, v17, v24, 1);
      }
      RIMCmActiveContactsNext(a2, &v20);
      v14 = RIMCmActiveContactsEnd((__int64)v22, a2);
      v15 = *(_QWORD *)(v14 + 16);
      v18 = *(_OWORD *)v14;
      v19 = v15;
      result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v20, (__int64)&v18);
    }
    while ( result );
    if ( v7 )
    {
      RIMAbArbitratePointerDeviceFrame(a1, (__int64)v5, v16);
      return RIMCompletePointerDeviceFrame(a1, v5);
    }
  }
  return result;
}
