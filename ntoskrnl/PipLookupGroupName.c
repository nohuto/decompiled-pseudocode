/*
 * XREFs of PipLookupGroupName @ 0x140B5935C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PipCheckDependencies @ 0x140B59300 (PipCheckDependencies.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     PipCreateEntry @ 0x140B59460 (PipCreateEntry.c)
 */

__int64 __fastcall PipLookupGroupName(PCUNICODE_STRING String1, int a2)
{
  __int64 v2; // rbx
  unsigned __int16 Length; // cx
  _QWORD *v6; // r14
  __int64 result; // rax
  __int64 v8; // rbp

  v2 = IopGroupListHead;
  if ( IopGroupListHead )
  {
    Length = String1->Length;
    while ( 1 )
    {
      while ( Length >= *(_WORD *)(v2 + 32) )
      {
        if ( Length <= *(_WORD *)(v2 + 32) )
        {
          if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
            return v2;
          v8 = v2;
          while ( *(_QWORD *)(v2 + 16) )
          {
            v2 = *(_QWORD *)(v2 + 16);
            if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
              return v2;
            v8 = *(_QWORD *)(v8 + 16);
          }
          if ( a2 )
          {
            result = PipCreateEntry(String1);
            *(_QWORD *)(v8 + 16) = result;
            return result;
          }
          return 0LL;
        }
        v6 = (_QWORD *)(v2 + 8);
        v2 = *(_QWORD *)(v2 + 8);
        if ( !v2 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *v6 = result;
          return result;
        }
      }
      if ( !*(_QWORD *)v2 )
        break;
      v2 = *(_QWORD *)v2;
    }
    if ( !a2 )
      return 0LL;
    result = PipCreateEntry(String1);
    *(_QWORD *)v2 = result;
  }
  else if ( a2 )
  {
    result = ((__int64 (*)(void))PipCreateEntry)();
    IopGroupListHead = result;
  }
  else
  {
    return 0LL;
  }
  return result;
}
