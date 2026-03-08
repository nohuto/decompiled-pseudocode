/*
 * XREFs of ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C014929E
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceMousePromotionEntry(const struct tagPOINTER_INFO *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1) + 16080);
  if ( !v5
    || *(_DWORD *)(v5 + 20) != *((_DWORD *)a1 + 3)
    || *((_DWORD *)a1 + 2) <= *(_DWORD *)(v5 + 36)
    || *(_QWORD *)(SGDGetUserSessionState(v4) + 16304) != *((_QWORD *)a1 + 3) )
  {
    return 0LL;
  }
  *(_QWORD *)(v5 + 8) = *((_QWORD *)a1 + 6);
  *(_DWORD *)(v5 + 36) = *((_DWORD *)a1 + 2);
  v6 = *(_DWORD *)(v5 + 44);
  *(_QWORD *)(v5 + 24) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (v6 & 8) == 0 && (a2 & 4) != 0 )
  {
    v6 |= 8u;
    *(_DWORD *)(v5 + 44) = v6;
  }
  if ( (v6 & 0x10) == 0 && (a2 & 8) != 0 )
    *(_DWORD *)(v5 + 44) = v6 | 0x10;
  return 1LL;
}
