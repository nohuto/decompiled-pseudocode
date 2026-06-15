/*
 * XREFs of sub_18005EC54 @ 0x18005EC54
 * Callers:
 *     sub_18005EB98 @ 0x18005EB98 (sub_18005EB98.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 *     sub_1800C04D0 @ 0x1800C04D0 (sub_1800C04D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall sub_18005EC54(LPCRITICAL_SECTION lpCriticalSection, float *a2)
{
  HANDLE LockSemaphore; // rcx

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  EnterCriticalSection(lpCriticalSection);
  LockSemaphore = lpCriticalSection[1].LockSemaphore;
  if ( LockSemaphore && *(float *)&lpCriticalSection[2].DebugInfo != 0.0 )
  {
    (*(void (__fastcall **)(HANDLE, float *))(*(_QWORD *)LockSemaphore + 104LL))(LockSemaphore, a2);
    (*(void (__fastcall **)(HANDLE, _DWORD *))(*(_QWORD *)lpCriticalSection[1].LockSemaphore + 112LL))(
      lpCriticalSection[1].LockSemaphore,
      (_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 2) = (int)(float)((float)((float)(*a2 - *(float *)&lpCriticalSection[1].SpinCount)
                                             / *(float *)&lpCriticalSection[2].DebugInfo)
                                     + 0.5);
  }
  LeaveCriticalSection(lpCriticalSection);
  return a2;
}
