/*
 * XREFs of GreUnrealizeObject @ 0x1C02B85B8
 * Callers:
 *     NtGdiUnrealizeObject @ 0x1C02B0400 (NtGdiUnrealizeObject.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreUnrealizeObject(HPALETTE a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v2 = v7;
  if ( v7 )
  {
    v7 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v3 = *(_DWORD **)(v2 + 72);
    if ( v3 )
      *v3 = 0;
    v4 = *(_DWORD **)(v2 + 80);
    if ( v4 )
      *v4 = 0;
    v1 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
    DEC_SHARE_REF_CNT(v2, v5);
  }
  return v1;
}
