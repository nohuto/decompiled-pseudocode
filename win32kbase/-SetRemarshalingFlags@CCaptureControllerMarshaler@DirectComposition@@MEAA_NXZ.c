/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026D980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  if ( !*((_BYTE *)this + 72) )
    *v1 |= 0x40u;
  if ( *((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0 )
    *v1 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  if ( !*((_BYTE *)this + 73) )
    *v1 |= 0x200u;
  if ( *((float *)this + 22) != 2.0 )
    *v1 |= 0x400u;
  return 1;
}
