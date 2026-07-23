/*
 * XREFs of SdbReadEntryInformation @ 0x1407C1F5C
 * Callers:
 *     PiIsDriverBlocked @ 0x14077E4C4 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140756588 (SdbReadBinaryTag.c)
 *     SdbGetDatabaseID @ 0x140758620 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x1407C2168 (SdbGetEntryFlags.c)
 *     SdbTagRefToTagID @ 0x1407C25B0 (SdbTagRefToTagID.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int BinaryTag; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]

  v12 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  BinaryTag = SdbTagRefToTagID(a1, a2, &v13, &v12);
  if ( !BinaryTag )
    goto LABEL_9;
  v5 = v13;
  v6 = v12;
  FirstTag = SdbFindFirstTag(v13, v12, 36868);
  if ( !FirstTag )
  {
LABEL_10:
    AslLogCallPrintf(1LL);
    return 0;
  }
  BinaryTag = SdbReadBinaryTag(v5, FirstTag, (__int64)&v14, 16LL);
  if ( !BinaryTag )
  {
LABEL_9:
    AslLogCallPrintf(1LL);
    return BinaryTag;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v5, (char *)&v15 + 8) )
    goto LABEL_10;
  EntryFlags = SdbGetEntryFlags(&v14, &v15);
  LODWORD(v15) = EntryFlags != 0 ? v15 : 0;
  DWORD1(v15) = SdbFindFirstTag(v5, v6, 28687);
  if ( a3 )
  {
    v9 = v15;
    *(_OWORD *)a3 = v14;
    v10 = v16;
    *(_OWORD *)(a3 + 16) = v9;
    *(_QWORD *)(a3 + 32) = v10;
  }
  return 1;
}
