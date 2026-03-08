/*
 * XREFs of KxMcheckAbort @ 0x1404284C0
 * Callers:
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     KiHandleMcheck @ 0x140569BF0 (KiHandleMcheck.c)
 */

__int64 __fastcall KxMcheckAbort(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-138h] BYREF

  *a3 = 0;
  if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    *a3 = 16;
  return KiHandleMcheck(a1, &v5);
}
