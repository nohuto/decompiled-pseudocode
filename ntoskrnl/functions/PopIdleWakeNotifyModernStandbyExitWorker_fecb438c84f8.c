void __fastcall PopIdleWakeNotifyModernStandbyExitWorker(LARGE_INTEGER *P)
{
  LARGE_INTEGER *v2; // rbx
  __int64 v3; // r15
  unsigned int i; // edi
  PVOID *v5; // rdi
  __int64 v6; // r14
  LARGE_INTEGER v7; // r9
  LARGE_INTEGER v8; // r11
  LARGE_INTEGER v9; // rcx
  __int16 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-CCh] BYREF
  LARGE_INTEGER v12; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER v13; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v14; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v16[73]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+4F8h] [rbp+3F0h] BYREF
  LARGE_INTEGER *v18; // [rsp+518h] [rbp+410h]
  __int64 v19; // [rsp+520h] [rbp+418h]
  __int16 *v20; // [rsp+528h] [rbp+420h]
  __int64 v21; // [rsp+530h] [rbp+428h]
  LARGE_INTEGER *v22; // [rsp+538h] [rbp+430h]
  __int64 v23; // [rsp+540h] [rbp+438h]
  __int16 *v24; // [rsp+548h] [rbp+440h]
  __int64 v25; // [rsp+550h] [rbp+448h]
  _QWORD *v26; // [rsp+558h] [rbp+450h]
  __int64 v27; // [rsp+560h] [rbp+458h]
  _QWORD *v28; // [rsp+568h] [rbp+460h]
  __int64 v29; // [rsp+570h] [rbp+468h]
  _QWORD v30[6]; // [rsp+578h] [rbp+470h] BYREF

  memset(v16, 0, sizeof(v16));
  v12.QuadPart = 0LL;
  v13.QuadPart = 0LL;
  KeWaitForSingleObject(&P[4768], Executive, 0, 0, 0LL);
  RtlGetInterruptTimePrecise(&v12);
  PopIdleWakeConvertIntervalBucketsTo(6u, (__int64)&P[12], v30, 0x3E8uLL);
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v14 = P[4758];
    v19 = 8LL;
    v18 = &v14;
    v10 = 6;
    v20 = &v10;
    v21 = 2LL;
    v22 = P + 9;
    v24 = &v11;
    v26 = v30;
    v28 = v15;
    v23 = 24LL;
    v11 = 6;
    v25 = 2LL;
    v27 = 48LL;
    v15[0] = 0x1000000LL;
    v29 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)&byte_140031917, 0LL, 0LL, 8u, v17);
  }
  v2 = P + 118;
  v3 = 32LL;
  do
  {
    if ( v2->LowPart || v2[-48].LowPart )
    {
      memset(v16, 0, sizeof(v16));
      if ( (int)PopIdleWakeSourceAccountingToDiagnostic(&v2[-100], v16) >= 0 )
        ((void (__fastcall *)(_QWORD, _QWORD))PopIdleWakeTraceWakeSourceDiagnostic)(
          (LARGE_INTEGER)P[4758].QuadPart,
          v16);
      if ( BYTE8(v16[47]) )
        ExFreePoolWithTag(*((PVOID *)&v16[48] + 1), 0x67696450u);
      if ( LODWORD(v16[0]) == 128 )
      {
        for ( i = 0; i < LODWORD(v16[49]); ++i )
          ExFreePoolWithTag(*(PVOID *)&v16[i + 50], 0x67696450u);
      }
      if ( v2[-100].LowPart == 128 )
      {
        v5 = (PVOID *)&v2[-96];
        v6 = 3LL;
        do
        {
          if ( *v5 )
            ObfDereferenceObjectWithTag(*v5, 0x67446F50u);
          ++v5;
          --v6;
        }
        while ( v6 );
      }
    }
    v2 += 148;
    --v3;
  }
  while ( v3 );
  RtlGetInterruptTimePrecise(&v13);
  PpmConvertTimeTo(v12.QuadPart - P[4759].QuadPart, 0x3E8uLL);
  PpmConvertTimeTo(v13.QuadPart - v12.QuadPart, 0x3E8uLL);
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x200000000000LL) )
  {
    v9 = P[4758];
    v18 = (LARGE_INTEGER *)v15;
    v15[0] = v9.QuadPart;
    v20 = (__int16 *)&v14;
    v13 = v7;
    v22 = &v13;
    v19 = 8LL;
    v24 = (__int16 *)&v12;
    v14 = v8;
    v21 = 8LL;
    v23 = 8LL;
    v12.QuadPart = 0x1000000LL;
    v25 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)&word_14003165E, 0LL, 0LL, 6u, v17);
  }
  ExFreePoolWithTag(P, 0x67696450u);
}
