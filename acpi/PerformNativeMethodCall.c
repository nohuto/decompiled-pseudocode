__int64 __fastcall PerformNativeMethodCall(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // eax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch]
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v3 = *(_QWORD *)(a3 + 48);
  v8 = 0;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 96);
  else
    v4 = 0LL;
  if ( ghNativeMethodEvalObject )
  {
    v12 = 0LL;
    v8 = 0;
    v7 = a1;
    v9 = a3 + 72;
    v10 = 0LL;
    v11 = 0LL;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        *(_QWORD *)&v10 = *(_QWORD *)(a3 + 392);
      }
      else if ( a1 == 2 )
      {
        *(_QWORD *)&v10 = *(_QWORD *)(a3 + 392);
      }
    }
    else
    {
      *(_QWORD *)&v11 = a2;
      *(_QWORD *)&v10 = v3 + 120;
      *((_QWORD *)&v10 + 1) = *(_QWORD *)(a2 + 72) + 120LL;
      HIDWORD(v11) = *(_DWORD *)(a3 + 60);
      v12 = *(_QWORD *)(a3 + 64);
      if ( *(_BYTE *)(v4 + 192) )
        DWORD2(v11) = 1;
    }
    v5 = ((__int64 (__fastcall *)(int *))ghNativeMethodEvalObject)(&v7);
  }
  else
  {
    v5 = -1073741823;
  }
  return ConvertNtStatusToAMLIStatus(v5);
}
