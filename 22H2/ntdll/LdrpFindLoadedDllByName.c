/*
 * XREFs of LdrpFindLoadedDllByName @ 0x18002113C
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006C230 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrGetDllHandleByName @ 0x1800780B0 (LdrGetDllHandleByName.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x1800CF110 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpFindLoadedDllByName(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int16 *v8; // rdi
  int v9; // ebx
  int v10; // r9d
  unsigned __int16 *j; // r10
  unsigned __int64 v12; // r8
  int LoadedDllByNameLockHeld; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  _WORD *i; // rax
  __int16 v24; // cx
  __int16 v25; // ax
  int v26; // r9d
  char *v27; // rcx
  char *v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-28h]
  _WORD v30[4]; // [rsp+30h] [rbp-18h] BYREF
  _WORD *v31; // [rsp+38h] [rbp-10h]

  v8 = a1;
  if ( !a1 )
  {
    v21 = *a2;
    v22 = *((_QWORD *)a2 + 1);
    for ( i = (_WORD *)(v22 + v21 - 2); (unsigned __int64)i > v22; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v31 = i;
    v24 = (_WORD)i - a2[4];
    v8 = v30;
    v25 = a2[1] - v24;
    v30[0] = v21 - v24;
    v30[1] = v25;
  }
  v9 = 0;
  if ( !v8 )
    goto LABEL_32;
  v10 = *v8 >> 1;
  for ( j = (unsigned __int16 *)*((_QWORD *)v8 + 1); v10; v9 = (unsigned __int16)v12 + 65599 * v9 )
  {
    v12 = *j;
    --v10;
    ++j;
    if ( (unsigned int)v12 >= 0x61 )
    {
      if ( (unsigned int)v12 > 0x7A )
      {
        if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v12 >= 0xC0u )
          LOWORD(v12) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                 + 2
                                 * ((v12 & 0xF)
                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                        + 2LL
                                                        * (((unsigned __int8)v12 >> 4)
                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                             + 2 * (v12 >> 8))))))
                      + v12;
      }
      else
      {
        LOWORD(v12) = v12 - 32;
      }
    }
  }
  if ( !v9 )
LABEL_32:
    v9 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((_DWORD)v8, (_DWORD)a2, a3, a4, v9);
  if ( LoadedDllByNameLockHeld >= 0 && a5 )
    *a5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( a2 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
      v20 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v20 = 2147353476LL;
    if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v27 = (unsigned int)RtlGetCurrentServiceSessionId(v20, v19)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v27 & 0x20) != 0 )
      {
        LOBYTE(v26) = -(LoadedDllByNameLockHeld >= 0);
        v29 = (__int64)a2;
LABEL_47:
        LOBYTE(v26) = ~(_BYTE)v26 & 3;
        LdrpLogEtwEvent(5280, 0, 0, v26, v29, 0LL);
      }
    }
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v28 = (unsigned int)RtlGetCurrentServiceSessionId(v17, v16)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v28 & 0x20) != 0 )
      {
        LOBYTE(v26) = -(LoadedDllByNameLockHeld >= 0);
        v29 = (__int64)v8;
        goto LABEL_47;
      }
    }
  }
  return (unsigned int)LoadedDllByNameLockHeld;
}
