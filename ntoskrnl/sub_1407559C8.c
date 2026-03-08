/*
 * XREFs of sub_1407559C8 @ 0x1407559C8
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140755824 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 *     sub_140755BBC @ 0x140755BBC (sub_140755BBC.c)
 */

__int64 __fastcall sub_1407559C8(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406AF180(a1 + 136, a2, 0x10u, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140755BBC(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
