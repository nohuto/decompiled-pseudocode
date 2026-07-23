/*
 * XREFs of VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D683C
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D6690 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x1406F14F0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPointWithLock(PCUNICODE_STRING String1)
{
  __int64 v1; // rdi
  wchar_t *Buffer; // rbx
  unsigned __int64 v3; // rax
  __int64 v5; // rbp
  wchar_t *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // r10
  __int64 v9; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  WCHAR v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  Buffer = String1->Buffer;
  v3 = (unsigned __int64)String1->Length >> 1;
  String2 = 0LL;
  v5 = 314159LL;
  v6 = &Buffer[v3];
  while ( Buffer < v6 )
  {
    v12 = RtlUpcaseUnicodeChar(*Buffer++);
    v5 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v5);
  }
  v7 = -1LL << (dword_140C479E4 & 0x1F);
  v8 = v5 & v7;
  if ( (unsigned int)dword_140C479E4 >> 5 )
  {
    v13 = v5 & v7;
    v9 = qword_140C479E8
       + 8LL
       * ((37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v13)) & (((unsigned int)dword_140C479E4 >> 5) - 1));
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v8 == (v7 & *(_QWORD *)(v9 + 8)) )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v9 = 0LL;
LABEL_8:
      if ( !v9 )
        break;
      String2.Buffer = (wchar_t *)(v9 + 68);
      String2.Length = *(_WORD *)(v9 + 64);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
        return v9;
      while ( 1 )
      {
        v9 = *(_QWORD *)v9;
        if ( (v9 & 1) != 0 )
          break;
        if ( (v5 & v7) == (v7 & *(_QWORD *)(v9 + 8)) )
          goto LABEL_8;
      }
    }
  }
  return v1;
}
