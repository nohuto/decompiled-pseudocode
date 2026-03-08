/*
 * XREFs of SdbpGetExeEntryFlags @ 0x14084BD1C
 * Callers:
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x14084BDEC (SdbGetEntryFlags.c)
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
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v15 = 0LL;
  v14 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868LL);
  if ( FirstTag && (unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)&v15, 0x10u) )
  {
    EntryFlags = SdbGetEntryFlags(&v15, &v14);
    v9 = EntryFlags != 0 ? v14 : 0;
    v10 = SdbFindFirstTag(a1, v5, 28685LL);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v13 = SdbFindFirstTag(a1, v10, 16400LL);
      if ( v13 )
      {
        if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0LL) == 2 )
          v9 |= 0x2000u;
      }
    }
    v11 = SdbFindFirstTag(a1, v5, 16434LL);
    if ( v11 )
      v9 |= (unsigned int)SdbReadDWORDTag(a1, v11, 0LL) << 16;
    *a3 = v9;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v4;
}
