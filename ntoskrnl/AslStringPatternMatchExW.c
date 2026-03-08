/*
 * XREFs of AslStringPatternMatchExW @ 0x14077790C
 * Callers:
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 *     SdbpCheckAttribute @ 0x1407A0F7C (SdbpCheckAttribute.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x1408A7856 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x140974398 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A4CE9C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A4EEE0 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindNextNamedTagHelper @ 0x140A4EFC0 (SdbpFindNextNamedTagHelper.c)
 *     AslpProcessMatchRegNode @ 0x140A53E9C (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(__int16 *a1, _WORD *a2)
{
  __int16 *v3; // rdi
  __int16 v4; // dx
  unsigned int v5; // ebx
  _WORD *v6; // r10
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v9; // dx
  struct _LIST_ENTRY *v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int16 v13; // r9
  struct _LIST_ENTRY *v14; // rax
  unsigned __int16 v15; // dx
  struct _LIST_ENTRY *v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int16 v19; // r9

  v3 = a1;
  v4 = *a1;
  v5 = 0;
  while ( v4 || *a2 )
  {
    if ( v4 == 63 )
      goto LABEL_11;
    if ( v4 != 42 )
    {
      if ( v4 != *a2 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v9);
        v10 = PsGetCurrentServerSiloGlobals();
        v12 = NLS_UPCASE((__int64)v10[77].Flink, v11);
        if ( v13 != v12 )
          return v5;
      }
LABEL_11:
      ++v3;
      goto LABEL_12;
    }
    v6 = v3 + 1;
    v4 = v3[1];
    if ( v4 == 42 )
    {
      ++v3;
    }
    else
    {
      if ( !v4 )
        return 1;
      if ( v4 == *a2
        || (v14 = PsGetCurrentServerSiloGlobals(),
            NLS_UPCASE((__int64)v14[77].Flink, v15),
            v16 = PsGetCurrentServerSiloGlobals(),
            v18 = NLS_UPCASE((__int64)v16[77].Flink, v17),
            v19 == v18) )
      {
        if ( (unsigned int)AslStringPatternMatchExW(v6, a2, 0LL, 0LL) )
          return 1;
      }
LABEL_12:
      if ( !*a2 )
        return v5;
      v4 = *v3;
      ++a2;
    }
  }
  return 1;
}
