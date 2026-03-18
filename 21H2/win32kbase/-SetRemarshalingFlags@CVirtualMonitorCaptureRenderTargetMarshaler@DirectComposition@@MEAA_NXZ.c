/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0236250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0235D40 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  char result; // al

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 17) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 24) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 40) || *((_DWORD *)this + 42) || *((_DWORD *)this + 41) || *((_DWORD *)this + 43) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    return 1;
  }
  return result;
}
