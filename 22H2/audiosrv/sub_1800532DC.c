/*
 * XREFs of sub_1800532DC @ 0x1800532DC
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

_DWORD *__fastcall sub_1800532DC(__int64 a1, _DWORD *a2)
{
  int ValueW; // eax
  bool v5; // sf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(a1);
  *a2 = 0;
  v7 = 8;
  a2[1] = 0;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_18019F528, L"LastLogTime", 0x48u, 0LL, a2, &v7);
  if ( ValueW )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ValueW != 2 )
    {
      v5 = ValueW < 0;
      if ( ValueW > 0 )
      {
        ValueW = (unsigned __int16)ValueW | 0x80070000;
        v5 = ValueW < 0;
      }
      if ( v5 )
        sub_18004BD84((int)retaddr, 370, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", ValueW);
    }
  }
  return a2;
}
