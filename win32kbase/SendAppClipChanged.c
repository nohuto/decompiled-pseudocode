__int64 __fastcall SendAppClipChanged(_OWORD *a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]

  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 2;
  v3 = 0LL;
  *(_OWORD *)((char *)v2 + 8) = *a1;
  return SendMessageTo(0LL, v2, 40LL);
}
