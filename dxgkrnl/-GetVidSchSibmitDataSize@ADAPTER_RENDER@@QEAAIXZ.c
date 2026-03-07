__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(DXGADAPTER **this)
{
  __int64 v1; // rdx
  int v2; // r8d

  if ( DXGADAPTER::IsDxgmms2(this[2]) )
    return *(_DWORD *)(v1 + 2760) * ((v2 << 6) + ((8 * v2 + 231) & 0xFFFFFFF8)) + 8 * (v2 + 77);
  else
    return 1304LL;
}
