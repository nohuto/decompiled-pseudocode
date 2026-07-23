/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1407564A8
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140756414 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140758620 (SdbGetDatabaseID.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 2608) |= 1u;
    goto LABEL_8;
  }
  if ( *a2 == 2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 2608) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(1LL);
    return v2;
  }
LABEL_4:
  if ( !(unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    AslLogCallPrintf(1LL);
  return 1;
}
