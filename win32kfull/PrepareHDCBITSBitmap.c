__int64 __fastcall PrepareHDCBITSBitmap(HDC a1, __int64 a2)
{
  unsigned int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem(a1, a2);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v5 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot((unsigned int)(96 * DCDpiScaleValue));
    }
  }
  v6 = 760LL * DpiCacheSlot;
  if ( !*(_QWORD *)((char *)&gOemBitmapSet + v6) )
    CreateDPIBitmapStrip(DpiCacheSlot);
  v7 = *(_QWORD *)((char *)&gOemBitmapSet + v6);
  if ( v7 )
  {
    v5 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v5, v7);
  }
  return v5;
}
