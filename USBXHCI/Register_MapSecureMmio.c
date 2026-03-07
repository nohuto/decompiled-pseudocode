__int64 __fastcall Register_MapSecureMmio(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v3 = *(_QWORD *)(v1 + 112);
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 128);
  v14 = 0;
  v11 = 0LL;
  v12 = v4;
  v5 = *(_QWORD *)(a1 + 24);
  v13 = 8;
  v15 = v5;
  v7 = SecureChannel_SendRequestSynchronously(v3, &v10, 48LL, &v9, 8);
  if ( v7 >= 0 )
  {
    v7 = v9;
    if ( (int)v9 >= 0 )
    {
      *(_DWORD *)(a1 + 80) = HIDWORD(v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        73,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v9);
    }
  }
  return (unsigned int)v7;
}
