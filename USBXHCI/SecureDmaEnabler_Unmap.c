__int64 __fastcall SecureDmaEnabler_Unmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v11 = 0LL;
  v12 = v3;
  v6 = *(_QWORD *)(a2 + 16);
  v13 = 6;
  v15 = v6;
  result = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), &v10, 48LL, 0LL, 0);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    result = VslDeleteSecureSection(v8);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v9,
                 18,
                 19,
                 (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
                 result);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  return result;
}
