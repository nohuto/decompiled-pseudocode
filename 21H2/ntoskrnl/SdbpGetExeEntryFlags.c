/*
 * XREFs of SdbpGetExeEntryFlags @ 0x1407C2080
 * Callers:
 *     SdbpCheckForMatch @ 0x140754964 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140756588 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x1407C2168 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned int v14; // eax
  __int64 v15; // r9
  int DWORDTag; // eax
  int v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v18 = 0LL;
  v17 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( FirstTag && (unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)&v18, 16LL) )
  {
    EntryFlags = SdbGetEntryFlags(&v18, &v17);
    v9 = EntryFlags != 0 ? v17 : 0;
    v10 = SdbFindFirstTag(a1, v5, 28685);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v14 = SdbFindFirstTag(a1, v10, 16400);
      if ( v14 )
      {
        DWORDTag = SdbReadDWORDTag(a1, v14, 0LL, v15);
        if ( DWORDTag == 2 )
          v9 |= 0x2000u;
      }
    }
    v11 = SdbFindFirstTag(a1, v5, 16434);
    if ( v11 )
      v9 |= (unsigned int)SdbReadDWORDTag(a1, v11, 0LL, v12) << 16;
    *a3 = v9;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v4;
}
