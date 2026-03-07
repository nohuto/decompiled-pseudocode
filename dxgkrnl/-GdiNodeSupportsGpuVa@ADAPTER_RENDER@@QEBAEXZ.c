bool __fastcall ADAPTER_RENDER::GdiNodeSupportsGpuVa(ADAPTER_RENDER *this)
{
  unsigned __int8 v1; // al
  __int64 v2; // r11
  char v3; // dl

  v1 = ADAPTER_RENDER::NodeSupportsGpuVa(this, 0, 0);
  v3 = 0;
  if ( v1 )
    return *(_BYTE *)(*(_QWORD *)(v2 + 16) + 2857LL) == 0;
  return v3;
}
