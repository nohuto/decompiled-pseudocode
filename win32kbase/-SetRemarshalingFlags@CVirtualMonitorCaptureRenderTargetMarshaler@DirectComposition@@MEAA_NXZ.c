/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026D380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026CE90 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  v3 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 17) )
  {
    *v3 |= 0x2000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 24) )
  {
    *v3 |= 0x4000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 40) || *((_DWORD *)this + 42) || *((_DWORD *)this + 41) || *((_DWORD *)this + 43) )
  {
    *v3 |= 0x8000u;
    return 1;
  }
  return result;
}
