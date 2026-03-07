__int64 __fastcall SepInitializeAuthorizationCallbacks(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+24h] [rbp-2Ch]
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]

  v5 = 6;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v6 = 1LL;
  v4 = 65538;
  if ( (int)ExRegisterHost(&SepAuthExtensionHost, a2, (unsigned __int16 *)&v4) < 0 )
    SepAuthExtensionHost = 0LL;
  v4 = 65539;
  LOWORD(v5) = 36;
  LODWORD(v6) = 512;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = ExRegisterHost(&SepBCryptExtensionHost, v2, (unsigned __int16 *)&v4);
  if ( (int)result < 0 )
    SepBCryptExtensionHost = 0LL;
  return result;
}
