/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x1800157E0
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x180015630 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004B140 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpComputePath @ 0x18006D7D0 (RtlpComputePath.c)
 *     RtlGetExePath @ 0x180082A90 (RtlGetExePath.c)
 *     LdrpCorInitialize @ 0x180083294 (LdrpCorInitialize.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlpQueryEnvironmentCache @ 0x180015DC0 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x1800161D0 (RtlpScanEnvironment.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008971C (RtlpQueryPseudoEnvironmentVariable.c)
 *     _wcsnicmp @ 0x18008E480 (_wcsnicmp.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  const wchar_t *v7; // r9
  struct _TEB *v9; // r13
  int v10; // r12d
  NTSTATUS PseudoEnvironmentVariable; // edi
  __int64 v12; // rbx
  __int64 v13; // r15
  SIZE_T v14; // rbx
  PSIZE_T v15; // r14
  _WORD *v16; // r13
  PCWSTR v17; // rbx
  char *v18; // rax
  const WCHAR *v19; // rsi
  char *v20; // rdi
  const WCHAR *i; // r9
  bool v22; // zf
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r11
  int v25; // ebx
  char *v26; // r11
  __int64 v27; // rdx
  _DWORD *v28; // rdx
  __int64 v29; // r8
  char **j; // r9
  char **v31; // r10
  bool v32; // zf
  _BYTE *v33; // r11
  SIZE_T v34; // rax
  __int64 v35; // rbx
  _PEB *ProcessEnvironmentBlock; // rcx
  int v37; // r15d
  PCWSTR v38; // rbx
  _RTL_CRITICAL_SECTION *FastPebLock; // rcx
  SIZE_T v41; // [rsp+20h] [rbp-88h]
  SIZE_T v42; // [rsp+20h] [rbp-88h]
  NTSTATUS v43; // [rsp+40h] [rbp-68h]
  PVOID v45; // [rsp+C0h] [rbp+18h] BYREF
  void *v46; // [rsp+C8h] [rbp+20h]

  v46 = Value;
  v7 = Name;
  v9 = NtCurrentTeb();
  v10 = 0;
  *ReturnLength = 0LL;
  if ( !NameLength )
    return -1073741568;
  PseudoEnvironmentVariable = -1073741568;
  LODWORD(v12) = 4;
  while ( 1 )
  {
    do
    {
      if ( (_DWORD)v12 )
      {
        v12 = (unsigned int)(v12 - 1);
        v13 = 0x180000000LL + 24 * v12 + 1170064;
        if ( NameLength <= *(_QWORD *)v13 )
          continue;
      }
      v14 = ValueLength;
      goto LABEL_8;
    }
    while ( NameLength != *(_QWORD *)v13 );
    if ( !wcsnicmp(v7, *(const wchar_t **)(0x180000008LL + 24 * v12 + 1170064), NameLength) )
      break;
    v7 = Name;
  }
  v14 = ValueLength;
  PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                *(unsigned int *)(v13 + 16),
                                v46,
                                ValueLength,
                                ReturnLength);
LABEL_8:
  if ( PseudoEnvironmentVariable != -1073741568 )
    return PseudoEnvironmentVariable;
  if ( Environment )
  {
    v45 = Environment;
    if ( !*(_WORD *)Environment )
      return -1073741568;
    ProcessEnvironmentBlock = v9->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->ProcessParameters->Environment == Environment
      && ((FastPebLock = ProcessEnvironmentBlock->FastPebLock) == 0LL || RtlIsCriticalSectionLockedByThread(FastPebLock)) )
    {
      v42 = v14;
      v38 = Name;
      PseudoEnvironmentVariable = RtlpQueryEnvironmentCache(&v45, Name, NameLength, v46, v42, ReturnLength);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      v37 = 1;
      Environment = v45;
    }
    else
    {
      v37 = 0;
      v38 = Name;
    }
    return RtlpScanEnvironment(Environment, v38, NameLength, v46, ValueLength, ReturnLength, v37);
  }
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v45 = v9->ProcessEnvironmentBlock->ProcessParameters->Environment;
  v15 = ReturnLength;
  v41 = v14;
  v16 = v46;
  v17 = Name;
  v43 = RtlpQueryEnvironmentCache(&v45, Name, NameLength, v46, v41, ReturnLength);
  if ( v43 != -1073741568 )
    goto LABEL_61;
  v18 = (char *)v45;
  v19 = &Name[NameLength];
  while ( 1 )
  {
    if ( !*(_WORD *)v18 )
    {
      qword_18016D160 = (__int64)v18;
      v43 = -1073741568;
      goto LABEL_61;
    }
    v20 = v18;
    for ( i = v17; ; ++i )
    {
      v22 = i == v19;
      if ( i >= v19 )
        break;
      v23 = *(unsigned __int16 *)v18;
      if ( !(_WORD)v23 )
        goto LABEL_19;
      if ( (unsigned int)v23 >= 0x61 )
      {
        if ( (unsigned int)v23 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v23 >= 0xC0u )
            LOWORD(v23) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2
                                   * ((v23 & 0xF)
                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2LL
                                                          * (((unsigned __int8)v23 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                               + 2 * (v23 >> 8))))))
                        + v23;
        }
        else
        {
          LOWORD(v23) = v23 - 32;
        }
      }
      v24 = *i;
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v24 >= 0xC0u )
            LOWORD(v24) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                   + 2
                                   * ((v24 & 0xF)
                                    + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2LL
                                                          * (((unsigned __int8)v24 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                               + 2 * (v24 >> 8))))))
                        + v24;
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
      if ( (_WORD)v23 != (_WORD)v24 )
      {
LABEL_19:
        v22 = i == v19;
        break;
      }
      v18 += 2;
    }
    if ( v22 && *(_WORD *)v18 == 61 )
      break;
    v25 = 0;
    while ( *(_WORD *)v18 )
    {
      if ( *(_WORD *)v18 == 61 && v18 != v20 )
        goto LABEL_26;
      v18 += 2;
    }
LABEL_32:
    v18 += 2;
    v17 = Name;
  }
  v25 = 1;
LABEL_26:
  v26 = v18;
  while ( *(_WORD *)v18 )
    v18 += 2;
  v27 = (v26 - v20) >> 1;
  if ( (unsigned __int64)(v27 - 1) <= 0x13 )
  {
    v28 = (_DWORD *)((char *)&HotPatchSpareGlobal5 + 56 * v27);
    v29 = (unsigned int)*v28;
    if ( (unsigned int)v29 < 3 )
    {
      for ( j = (char **)(v28 + 2); ; j += 2 )
      {
        v31 = (char **)&v28[4 * v29 + 2];
        v32 = j == v31;
        if ( j >= v31 )
          break;
        if ( *j == v20 )
        {
          v32 = j == v31;
          break;
        }
      }
      if ( v32 )
      {
        *j = v20;
        j[1] = v18 + 2;
        ++*v28;
        qword_18016D160 = (__int64)(v18 + 2);
      }
    }
  }
  if ( !v25 )
    goto LABEL_32;
  v33 = v26 + 2;
  v34 = (v18 - v33) >> 1;
  if ( v16 )
  {
    if ( v34 < ValueLength )
    {
      *v15 = v34;
      v35 = v34;
      memmove(v16, v33, 2 * v34);
      v16[v35] = 0;
      goto LABEL_51;
    }
    if ( ValueLength )
      *v16 = 0;
  }
  *v15 = v34 + 1;
  v10 = -1073741789;
LABEL_51:
  v43 = v10;
LABEL_61:
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v43;
}
