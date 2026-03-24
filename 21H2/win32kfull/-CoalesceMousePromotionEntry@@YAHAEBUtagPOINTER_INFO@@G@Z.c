/*
 * XREFs of ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C0218688
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0219628 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceMousePromotionEntry(const struct tagPOINTER_INFO *a1, char a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *v2; // r8
  unsigned int v4; // edx
  int v5; // eax

  v2 = qword_1C033AAE8;
  if ( !qword_1C033AAE8 )
    return 0LL;
  if ( *((_DWORD *)qword_1C033AAE8 + 5) != *((_DWORD *)a1 + 3) )
    return 0LL;
  v4 = *((_DWORD *)a1 + 2);
  if ( v4 <= *((_DWORD *)qword_1C033AAE8 + 9) || qword_1C033ABC8 != *((_QWORD *)a1 + 3) )
    return 0LL;
  *((_QWORD *)qword_1C033AAE8 + 1) = *((_QWORD *)a1 + 6);
  *((_DWORD *)v2 + 9) = v4;
  v5 = *((_DWORD *)v2 + 11);
  *((_QWORD *)v2 + 3) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (v5 & 8) == 0 && (a2 & 4) != 0 )
  {
    v5 |= 8u;
    *((_DWORD *)v2 + 11) = v5;
  }
  if ( (v5 & 0x10) == 0 && (a2 & 8) != 0 )
    *((_DWORD *)v2 + 11) = v5 | 0x10;
  return 1LL;
}
