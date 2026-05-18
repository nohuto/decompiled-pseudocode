/*
 * XREFs of sub_180112870 @ 0x180112870
 * Callers:
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 * Callees:
 *     sub_180111A1C @ 0x180111A1C (sub_180111A1C.c)
 *     sub_180111A60 @ 0x180111A60 (sub_180111A60.c)
 *     sub_18011279C @ 0x18011279C (sub_18011279C.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180112870(_QWORD *a1)
{
  GUID rguid; // [rsp+20h] [rbp-58h] BYREF
  __int128 v4; // [rsp+30h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+50h] [rbp-28h]
  GUID pguid; // [rsp+58h] [rbp-20h] BYREF

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_1801163DC(&unk_18020DAF0, 4LL, "Unable to generate a valid, globally unique, GUID");
    sub_180111A1C(a1);
  }
  else
  {
    v6 = 0LL;
    rguid = pguid;
    v4 = 0LL;
    v5 = 0LL;
    sub_18011279C(&rguid);
    sub_180111A60(a1, (__int64)&rguid);
  }
  return a1;
}
