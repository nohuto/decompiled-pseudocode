__int64 __fastcall bEnableFontDriver(__int64 a1, unsigned int a2)
{
  struct _LDEV *Internal; // rax
  __int64 v4; // rcx
  struct PDEV *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  struct PDEV *v9; // [rsp+90h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( !Internal )
    return 0LL;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v9, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  v5 = v9;
  if ( !v9 )
    return 0LL;
  if ( a2 == 5 )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
    *(_QWORD *)(v6 + 23448) = v5;
    v7 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
    *(_DWORD *)(v7 + 23648) = 2;
    *(_DWORD *)(v7 + 23652) = 1;
    v5 = v9;
  }
  FntCacheHDEV(v5, a2);
  result = 1LL;
  *((_DWORD *)v9 + 10) |= 0x2000u;
  return result;
}
