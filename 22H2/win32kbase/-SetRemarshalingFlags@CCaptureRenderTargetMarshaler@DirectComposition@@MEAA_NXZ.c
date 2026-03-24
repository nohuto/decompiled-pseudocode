/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F53C0
 * Callers:
 *     ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01F58D0 (-SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  int v1; // eax

  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 19) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_BYTE *)this + 57) )
    *((_DWORD *)this + 4) |= 0x200u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_BYTE *)this + 56) )
    v1 |= 0x800u;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 4) = v1 & 0xFFFFFEFF;
  return 1;
}
