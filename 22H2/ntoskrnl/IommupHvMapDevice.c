/*
 * XREFs of IommupHvMapDevice @ 0x1405251A8
 * Callers:
 *     IommupMapDeviceInternal @ 0x140523C28 (IommupMapDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvMapDevice(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  int v6; // ebx

  v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140C626C8)(
         a1,
         14LL,
         (*a4 & 0x800 | ((*a4 & 0xF8 | ((*a4 & 0x20000 | (*a4 >> 1) & 0xF800u) >> 3)) >> 2)) >> 1);
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C62680)(a1, 0LL);
    if ( v6 < 0 )
    {
LABEL_5:
      ((void (__fastcall *)(__int64, __int64))qword_140C626C8)(a1, 5LL);
      return (unsigned int)v6;
    }
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C626D0)(a1, *a3);
    if ( v6 < 0 )
    {
      ((void (__fastcall *)(__int64))qword_140C62688)(a1);
      goto LABEL_5;
    }
  }
  return (unsigned int)v6;
}
