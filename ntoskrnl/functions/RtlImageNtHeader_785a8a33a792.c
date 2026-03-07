__int64 __fastcall RtlImageNtHeader(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1LL, a1, 0LL, &v2);
  return v2;
}
