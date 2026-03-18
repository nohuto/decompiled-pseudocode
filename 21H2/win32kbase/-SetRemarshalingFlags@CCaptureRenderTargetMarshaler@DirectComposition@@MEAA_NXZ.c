/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0235D40
 * Callers:
 *     ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0236250 (-SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 22) || *((_DWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 17) != 0.0 || *((float *)this + 18) != 0.0 || *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_BYTE *)this + 65) )
    *((_DWORD *)this + 4) |= 0x200u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_BYTE *)this + 64) )
    v1 |= 0x800u;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 4) = v1 & 0xFFFFFEFF;
  return 1;
}
