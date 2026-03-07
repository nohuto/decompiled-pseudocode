__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2424);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2440);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2456);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2504);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
