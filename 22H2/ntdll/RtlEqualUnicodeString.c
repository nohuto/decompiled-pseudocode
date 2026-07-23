/*
 * XREFs of RtlEqualUnicodeString @ 0x180020D10
 * Callers:
 *     RtlEqualDomainName @ 0x18000CE90 (RtlEqualDomainName.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001BE90 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180049A24 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlpCheckForSameCurdir @ 0x18005E6D0 (RtlpCheckForSameCurdir.c)
 *     LdrpCheckKnownDllFullPath @ 0x18006F124 (LdrpCheckKnownDllFullPath.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800789C4 (RtlpDetermineDosPathNameType4.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A880 (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CD0A4 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CD620 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v5; // r11
  char *v6; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  char *v10; // r8

  Length = String1->Length;
  if ( (_WORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *Buffer;
        v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
        if ( (_WORD)v7 != (_WORD)v8 )
        {
          if ( (unsigned int)v7 >= 0x61 )
          {
            if ( (unsigned int)v7 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v7 >= 0xC0u )
                LOWORD(v7) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v7 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v7 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v7 >> 8))))))
                           + v7;
            }
            else
            {
              LOWORD(v7) = v7 - 32;
            }
          }
          if ( (unsigned int)v8 >= 0x61 )
          {
            if ( (unsigned int)v8 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable )
              {
                if ( (unsigned __int16)v8 >= 0xC0u )
                  LOWORD(v8) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                        + 2
                                        * ((v8 & 0xF)
                                         + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                               + 2LL
                                                               * (((unsigned __int8)v8 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v8 >> 8))))))
                             + v8;
              }
            }
            else
            {
              LOWORD(v8) = v8 - 32;
            }
          }
          if ( (_WORD)v7 != (_WORD)v8 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v10 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v10) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
