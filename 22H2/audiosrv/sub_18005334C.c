/*
 * XREFs of sub_18005334C @ 0x18005334C
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18005334C(__int64 a1)
{
  int ValueW; // eax
  bool v3; // sf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = HIDWORD(a1);
  v5 = 0;
  v7 = 4;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_18019F528, L"Version", 0x18u, 0LL, &v5, &v7);
  if ( ValueW )
  {
    v5 = 0;
    if ( ValueW != 2 )
    {
      v3 = ValueW < 0;
      if ( ValueW > 0 )
      {
        ValueW = (unsigned __int16)ValueW | 0x80070000;
        v3 = ValueW < 0;
      }
      if ( v3 )
        sub_18004BD84((int)retaddr, 351, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", ValueW);
    }
  }
  return v5;
}
