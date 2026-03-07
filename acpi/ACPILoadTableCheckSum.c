char __fastcall ACPILoadTableCheckSum(_BYTE *a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rdi
  char v5; // si
  char v6; // bl
  _BYTE *v7; // rbp
  __int64 v8; // rax
  int v9; // edx

  v4 = a2;
  v5 = (char)a1;
  v6 = 0;
  v7 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      6,
      27,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      (char)a1,
      (_BYTE)a1 + v4 - 1);
  }
  if ( (_DWORD)v4 )
  {
    v8 = v4;
    do
    {
      v6 += *v7++;
      --v8;
    }
    while ( v8 );
  }
  ACPIAssert(v6 == 0, 8194, a3, a4);
  if ( !v6 )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      6,
      28,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v5,
      v5 + v4 - 1);
  }
  return 0;
}
