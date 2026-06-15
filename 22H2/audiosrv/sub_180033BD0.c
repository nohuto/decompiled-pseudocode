/*
 * XREFs of sub_180033BD0 @ 0x180033BD0
 * Callers:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180033BD0(LPCRITICAL_SECTION lpCriticalSection, _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 OwningThread; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 LockSemaphore_low; // rsi
  char *v7; // r15
  struct _RTL_CRITICAL_SECTION_DEBUG *v8; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v9; // rsi
  __int64 v10; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __int64 v12; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v14; // rax
  __int64 v15; // rcx

  EnterCriticalSection(lpCriticalSection);
  v3 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  OwningThread = (unsigned __int64)lpCriticalSection[1].OwningThread;
  if ( v3 < OwningThread )
    goto LABEL_14;
  v5 = v3 + 1;
  if ( v3 + 1 <= OwningThread )
    goto LABEL_14;
  LockSemaphore_low = SLODWORD(lpCriticalSection[1].LockSemaphore);
  if ( !lpCriticalSection[1].DebugInfo )
  {
    if ( LockSemaphore_low <= v5 )
      LockSemaphore_low = v3 + 1;
    v14 = (struct _RTL_CRITICAL_SECTION_DEBUG *)o_calloc(LockSemaphore_low, 8LL);
    lpCriticalSection[1].DebugInfo = v14;
    if ( v14 )
    {
      lpCriticalSection[1].OwningThread = (HANDLE)LockSemaphore_low;
      goto LABEL_14;
    }
LABEL_24:
    sub_1800B8610(2147942414LL);
  }
  if ( !LODWORD(lpCriticalSection[1].LockSemaphore) )
  {
    LockSemaphore_low = OwningThread >> 1;
    if ( v5 - OwningThread > OwningThread >> 1 )
      LockSemaphore_low = v5 - OwningThread;
  }
  v7 = (char *)(OwningThread + LockSemaphore_low);
  if ( v5 >= OwningThread + LockSemaphore_low )
    v7 = (char *)(v3 + 1);
  v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)o_calloc(v7, 8LL);
  v9 = v8;
  if ( !v8 )
    goto LABEL_24;
  v10 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( 8 * v10 )
  {
    if ( !DebugInfo )
    {
      *(_DWORD *)o__errno(v10) = 22;
      o__invalid_parameter_noinfo(v15);
      sub_1800B8610(2147942487LL);
    }
    memmove(v8, DebugInfo, 8 * v10);
  }
  _o_free(lpCriticalSection[1].DebugInfo);
  lpCriticalSection[1].DebugInfo = v9;
  lpCriticalSection[1].OwningThread = v7;
LABEL_14:
  v12 = *a2;
  *((_QWORD *)&lpCriticalSection[1].DebugInfo->Type + v3) = *a2;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  ++*(_QWORD *)&lpCriticalSection[1].LockCount;
  LeaveCriticalSection(lpCriticalSection);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
