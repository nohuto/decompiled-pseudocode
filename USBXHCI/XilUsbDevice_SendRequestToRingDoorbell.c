__int64 __fastcall XilUsbDevice_SendRequestToRingDoorbell(__int64 *a1, char a2, __int16 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  _UNKNOWN **v8; // rdx
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int128 v14; // [rsp+58h] [rbp-20h]

  v3 = a1[7];
  v10 = 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *a1;
  v6 = *(_QWORD *)(v4 + 112);
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = v5;
  BYTE8(v14) = a2;
  LODWORD(v14) = 32;
  WORD5(v14) = a3;
  result = SecureChannel_SendRequestSynchronously(v6, &v11, 48LL, &v10, 4);
  if ( (int)result < 0 )
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v9 = 12;
    goto LABEL_7;
  }
  result = (unsigned int)v10;
  if ( v10 < 0 )
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 13;
LABEL_7:
      LOBYTE(v8) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v4 + 72),
               (_DWORD)v8,
               12,
               v9,
               (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
               result);
    }
  }
  return result;
}
