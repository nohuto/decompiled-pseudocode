bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  ADAPTER_DISPLAY *v5; // rcx

  if ( DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
    return 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
  return v4 && (v5 = *(ADAPTER_DISPLAY **)(v4 + 2920)) != 0LL && ADAPTER_DISPLAY::IsVidPnSourceVisible(v5, v3) != 0;
}
