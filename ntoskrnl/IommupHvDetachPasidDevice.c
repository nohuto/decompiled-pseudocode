/*
 * XREFs of IommupHvDetachPasidDevice @ 0x140522410
 * Callers:
 *     IommupDeviceDisableSvm @ 0x140930CBC (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvDetachPasidDevice(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 265) )
  {
    ((void (__fastcall *)(_QWORD))qword_140C62228)(*v1);
    ((void (__fastcall *)(_QWORD, __int64))qword_140C62268)(*v1, 33LL);
  }
  ((void (__fastcall *)(_QWORD))qword_140C622B8)(*v1);
  return ((__int64 (__fastcall *)(_QWORD))qword_140C62340)(*v1);
}
