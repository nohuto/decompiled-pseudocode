__int64 __fastcall CComposition::GetMinSupportedMax2DTextureSize(CComposition *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)g_pComposition + 326);
  switch ( v1 )
  {
    case 49408:
      return 0x4000LL;
    case 37632:
      return 4096LL;
    case 40960:
    case 41216:
      return 0x2000LL;
    case 45056:
    case 45312:
    case 49152:
    case 49664:
      return 0x4000LL;
  }
  return 2048LL;
}
