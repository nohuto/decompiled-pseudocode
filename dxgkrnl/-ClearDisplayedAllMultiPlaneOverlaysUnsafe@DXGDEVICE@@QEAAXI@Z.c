void __fastcall DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 235);
  if ( v2 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v2 + 2920), a2);
}
