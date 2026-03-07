__int64 __fastcall RIMGetVirtualDesktopPhysicalSize(__int64 a1)
{
  int v2; // r10d
  int v3; // r9d
  _DWORD v5[5]; // [rsp+20h] [rbp-2D8h] BYREF
  unsigned __int16 v6; // [rsp+34h] [rbp-2C4h]

  *(_OWORD *)a1 = 0LL;
  InputConfig::Mouse::GetUnionRegion(v5);
  v2 = v6;
  v3 = v5[3] - v5[1];
  *(_DWORD *)(a1 + 8) = 2540 * (v5[2] - v5[0]) / v6;
  *(_DWORD *)(a1 + 12) = 2540 * v3 / v2;
  return a1;
}
