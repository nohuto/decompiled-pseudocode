__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0nxxxqqxqqqqqqqqtx_EventWriteTransfer(
      *((_DWORD *)a2 + 7),
      (*((_DWORD *)a2 + 52) >> 2) & 1,
      (*((_DWORD *)a2 + 52) >> 3) & 1,
      (_DWORD)a2 + 4,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 7));
  return CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, a2);
}
