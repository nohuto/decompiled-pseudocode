__int64 __fastcall Controller_PopulatePciDeviceInformation(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // ebp
  int v10; // r14d
  int v11; // r15d
  int v12; // edx
  __int64 result; // rax
  char v14; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v10 = a4;
  v11 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_ddd(a1, a2, 4, 133, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v14, a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_DDD(
        a1,
        v12,
        4,
        134,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        *a6,
        a6[1],
        *((_BYTE *)a6 + 8));
    }
  }
  if ( *a6 == 4358 )
    Controller_PopulateVIAFirmwareVersion(a1, a5, a6, a8);
  *(_DWORD *)a7 = *a6;
  *(_DWORD *)(a7 + 4) = a6[1];
  *(_WORD *)(a7 + 8) = *((unsigned __int8 *)a6 + 8);
  *(_WORD *)(a7 + 24) = a6[22];
  *(_WORD *)(a7 + 26) = a6[23];
  *(_QWORD *)(a7 + 32) = a5[1];
  *(_QWORD *)(a7 + 40) = a5[6];
  result = a5[7];
  *(_QWORD *)(a7 + 48) = result;
  *(_DWORD *)(a7 + 12) = v8;
  *(_DWORD *)(a7 + 16) = v11;
  *(_DWORD *)(a7 + 20) = v10;
  return result;
}
