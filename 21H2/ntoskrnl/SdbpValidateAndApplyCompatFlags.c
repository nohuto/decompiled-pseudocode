/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1407ED16C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1407ED0C8 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x140A108BC (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetDatabaseID @ 0x1407ED1D8 (SdbGetDatabaseID.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_7;
  }
  if ( *a2 == 2 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
  {
    AslLogCallPrintf(1LL);
    return v4;
  }
LABEL_4:
  if ( (unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    return 1;
  AslLogCallPrintf(1LL);
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673)) )
    return 1;
  return v4;
}
