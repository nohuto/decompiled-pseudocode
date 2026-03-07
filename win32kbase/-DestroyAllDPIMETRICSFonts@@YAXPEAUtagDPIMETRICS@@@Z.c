void __fastcall DestroyAllDPIMETRICSFonts(HFONT *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  DestroyFont(a1 + 4, a2);
  DestroyFont(a1, v3);
  DestroyFont(a1 + 6, v4);
  DestroyFont(a1 + 7, v5);
  DestroyFont(a1 + 8, v6);
}
