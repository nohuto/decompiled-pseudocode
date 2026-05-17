/*
 * XREFs of RtlpGetRegistryHandle @ 0x18004591C
 * Callers:
 *     RtlCheckRegistryKey @ 0x1800458E0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800471B8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180047DE4 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x18008B0A0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008C500 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800EE5B0 (RtlCreateRegistryKey.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009D880 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, _WORD *a2, char a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int appended; // ebx
  int v9; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 StringRoutine; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+88h] [rbp+37h]

  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
    return 0LL;
  }
  else
  {
    v7 = (unsigned int)a1;
    LODWORD(v7) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v7 = (unsigned int)a1;
    if ( (unsigned int)v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      StringRoutine = NtdllpAllocateStringRoutine(524LL);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !(_DWORD)v7 )
          goto LABEL_11;
        if ( (_DWORD)v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, (const void **)&UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, *((_WORD **)&RtlpRegistryPaths + v7));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_11:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, a2);
            if ( appended >= 0 )
            {
              v14 = 48;
              v16 = &v11;
              v15 = 0LL;
              v17 = 576;
              v18 = 0LL;
              if ( a3 )
                v9 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v9 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v9;
            }
          }
        }
        NtdllpFreeStringRoutine(StringRoutine);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
