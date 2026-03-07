void __fastcall _TTLimitDeepTargetingPoint(int a1, int a2, int *a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // r10d
  _DWORD *v7; // r11
  int v8; // edx

  v3 = *a3;
  if ( (int)TTPixelsToHm(abs32(a1 - *a3), a2) > 200 )
  {
    v5 = TTHmToPixels(200, a2);
    v8 = v6 - v5;
    if ( v6 <= v3 )
      v8 = v6 + v5;
    *v7 = v8;
  }
}
