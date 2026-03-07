__int64 __fastcall PopPlRegisterPowerPlane(__int64 a1, __int64 a2)
{
  int inited; // edi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  __int16 v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-19h] BYREF
  __int16 *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]

  v10 = 0LL;
  v11 = 0LL;
  LODWORD(v12) = 0;
  if ( PopPowerPlane )
  {
    inited = -1073741768;
  }
  else if ( *(_DWORD *)(a1 + 4) )
  {
    inited = -1073741735;
  }
  else if ( *(_QWORD *)(a1 + 16) )
  {
    inited = PopPlInitPowerPlane(a1 + 24, a1, a2 + a1, &v10);
    if ( inited >= 0 )
    {
      v5 = v10;
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v5 + 40) = *(_QWORD *)(a1 + 16);
      v12 = v5;
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlActivateDeviceIterator,
        0LL,
        v4,
        1,
        0,
        (__int64)&v11);
      PopPepIterateDeviceList(
        (void (__fastcall *)(__int64))PopPlCommitPowerPlaneRegistration,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlRegisterDeviceIterator,
        (void (__fastcall *)(void (__fastcall *)(__int64), __int64))PopPlPublishInitialPowerDraw,
        v6,
        0,
        0,
        (__int64)&v11);
      PopPlTraceLogPowerPlane(v5);
      PopPepIterateDeviceList(
        0LL,
        (unsigned __int8 (__fastcall *)(__int64 *, __int64))PopPlIdleDeviceIterator,
        0LL,
        v7,
        0,
        1,
        (__int64)&v11);
    }
  }
  else
  {
    inited = -1073741811;
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v9 = 1;
    v17 = 4LL;
    v14 = &v9;
    v15 = 2LL;
    v16 = &v10;
    LODWORD(v10) = inited;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&byte_140032123, 0LL, 1u, 0, 0, 4u, &v13);
  }
  return (unsigned int)inited;
}
