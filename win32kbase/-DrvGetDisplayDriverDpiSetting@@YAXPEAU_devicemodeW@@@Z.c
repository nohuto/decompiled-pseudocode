void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  __int64 v2; // rdx
  WORD v3; // ax

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v2 + 1280) )
    v3 = *(_WORD *)(v2 + 1248);
  else
    v3 = 96;
  a1->dmLogPixels = v3;
}
