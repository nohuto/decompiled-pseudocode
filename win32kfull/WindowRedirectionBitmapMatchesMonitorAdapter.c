__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp-8h] BYREF
  __int64 v3; // [rsp+60h] [rbp+20h] BYREF
  __int64 v4; // [rsp+70h] [rbp+30h]
  __int64 v5; // [rsp+78h] [rbp+38h]

  v5 = 0LL;
  v4 = 0LL;
  LODWORD(v3) = 0;
  GreGetDxSharedSurface(*a1, (__int64)&v3, (__int64)&v2);
  return 1LL;
}
