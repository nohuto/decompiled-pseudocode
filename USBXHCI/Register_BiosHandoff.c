__int64 __fastcall Register_BiosHandoff(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r13
  char Uchar; // al
  __int64 v5; // rcx
  char v6; // al
  int v7; // edi
  int i; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r9d
  int Ulong; // eax
  unsigned int v13; // edi
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+70h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp+10h] BYREF

  Interval.QuadPart = 0LL;
  v1 = (_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(*v1 + 72LL), 4, 6, 50, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
    Uchar = XilRegister_ReadUchar(a1, v2 + 3);
    v5 = *v1;
    v6 = Uchar | 1;
    v21 = v6;
    if ( *(_BYTE *)(v5 + 601) )
    {
      Register_WriteSecureMmio(a1, v2 + 3, 0LL, &v21);
    }
    else
    {
      *(_BYTE *)(v2 + 3) = v6;
      _InterlockedOr(v19, 0);
    }
    v7 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUchar(a1, v2 + 2) & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_11;
        v10 = *v1;
        v11 = 51;
        v20 = i;
        LOBYTE(v9) = 4;
        goto LABEL_10;
      }
      if ( !v7 )
        break;
      --v7;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v10 = *v1;
    if ( (*(_QWORD *)(*v1 + 336LL) & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v9,
          6,
          53,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          208);
      }
      v15 = 1LL;
      goto LABEL_28;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 52;
      v20 = 2000;
      LOBYTE(v9) = 3;
LABEL_10:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 72),
        v9,
        6,
        v11,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v20);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(*v1 + 72LL), 3, 6, 49, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  }
LABEL_11:
  if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 4LL)) & 1) != 0 )
  {
LABEL_12:
    if ( v2 )
    {
      Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(v2 + 4));
      XilRegister_WriteUlong(a1, (_DWORD *)(v2 + 4), Ulong & 0x1FFFDFFF);
    }
    return 0;
  }
  v16 = *v1;
  if ( _bittest64((const signed __int64 *)(*v1 + 336LL), 0x3Fu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v16 + 72), 2, 6, 54, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
    v15 = 2LL;
LABEL_28:
    Etw_StartDeviceFail(*v1, v9, v15);
    return (unsigned int)-1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v16 + 72), 2, 6, 55, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  v17 = Register_ControllerStop(a1);
  v13 = v17;
  if ( v17 >= 0 )
    goto LABEL_12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*v1 + 72LL),
      v18,
      6,
      56,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v17);
  }
  return v13;
}
