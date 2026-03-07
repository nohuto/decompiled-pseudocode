__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+40h] [rbp+7h]
  GUID v7; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  __int64 v9; // [rsp+60h] [rbp+27h]
  _BYTE v10[24]; // [rsp+68h] [rbp+2Fh]

  *(_OWORD *)v10 = 0LL;
  v6 = 0;
  v2 = *(_QWORD *)(a1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v5 = 0LL;
  *(_DWORD *)v10 = 1;
  v7 = 0LL;
  *(_OWORD *)&v10[8] = *(_OWORD *)(a1 + 336);
  v3 = SecureChannel_SendRequestSynchronously(v2, &v7, 56, (__int64)&v5, 24);
  if ( v3 >= 0 )
  {
    v3 = v5;
    if ( (int)v5 >= 0 )
    {
      *(_QWORD *)(a1 + 616) = *((_QWORD *)&v5 + 1);
      *(_DWORD *)(a1 + 608) = v6;
    }
  }
  return (unsigned int)v3;
}
