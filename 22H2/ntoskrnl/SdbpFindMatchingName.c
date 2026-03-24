/*
 * XREFs of SdbpFindMatchingName @ 0x1407C1520
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1407593F0 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1407C14DC (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140755D70 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C15CC (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *StringTagPtr; // rcx
  bool v10; // zf
  int v12; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v7, v8);
    if ( !StringTagPtr )
      break;
    if ( (a3[5] & 1) != 0 )
    {
      v12 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v10 = v12 == 0;
      if ( v12 < 0 )
        return 0LL;
    }
    else
    {
      v10 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v10 )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
