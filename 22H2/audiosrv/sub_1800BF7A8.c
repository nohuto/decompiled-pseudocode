/*
 * XREFs of sub_1800BF7A8 @ 0x1800BF7A8
 * Callers:
 *     sub_1800C07F0 @ 0x1800C07F0 (sub_1800C07F0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18005EC54 @ 0x18005EC54 (sub_18005EC54.c)
 *     sub_1800BEBD4 @ 0x1800BEBD4 (sub_1800BEBD4.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BF7A8(LPCRITICAL_SECTION lpCriticalSection)
{
  __int64 v2; // rcx
  void *QuadPart; // rax
  LONG v4; // eax
  _DWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *LockSemaphore; // rdx
  int v8; // ecx
  int SpinCount_high; // [rsp+70h] [rbp+7h] BYREF
  int SpinCount; // [rsp+74h] [rbp+Bh] BYREF
  int v11; // [rsp+78h] [rbp+Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+17h] BYREF
  void *v13; // [rsp+88h] [rbp+1Fh] BYREF
  void *v14; // [rsp+90h] [rbp+27h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v15; // [rsp+98h] [rbp+2Fh] BYREF
  LONG v16; // [rsp+A0h] [rbp+37h]
  LPCRITICAL_SECTION v17; // [rsp+D0h] [rbp+67h] BYREF
  int v18; // [rsp+D8h] [rbp+6Fh] BYREF
  int v19; // [rsp+E0h] [rbp+77h] BYREF
  int DebugInfo; // [rsp+E8h] [rbp+7Fh] BYREF

  EnterCriticalSection(lpCriticalSection);
  v17 = lpCriticalSection;
  if ( !lpCriticalSection[1].LockSemaphore )
    goto LABEL_12;
  sub_18005EC54(lpCriticalSection, (float *)&v15);
  if ( v16 == HIDWORD(lpCriticalSection[2].DebugInfo) )
    goto LABEL_12;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++HIDWORD(lpCriticalSection[2].OwningThread);
  QuadPart = (void *)PerformanceCount.QuadPart;
  lpCriticalSection[3].OwningThread = (HANDLE)PerformanceCount.QuadPart;
  if ( HIDWORD(lpCriticalSection[2].OwningThread) == 1 )
  {
    lpCriticalSection[2].LockSemaphore = QuadPart;
    lpCriticalSection[2].SpinCount = (ULONG_PTR)v15;
    v4 = v16;
    LODWORD(lpCriticalSection[3].DebugInfo) = v16;
  }
  else
  {
    v4 = v16;
    if ( v16 < SLODWORD(lpCriticalSection[3].DebugInfo) )
    {
      lpCriticalSection[2].SpinCount = (ULONG_PTR)v15;
      LODWORD(lpCriticalSection[3].DebugInfo) = v4;
    }
    if ( v4 <= lpCriticalSection[3].RecursionCount )
      goto LABEL_9;
  }
  *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[3].DebugInfo + 4) = v15;
  lpCriticalSection[3].RecursionCount = v4;
LABEL_9:
  v5 = (_DWORD *)sub_180008448(v2, sub_1800B6240)[1];
  if ( *v5 > 5u )
  {
    LockSemaphore = lpCriticalSection[1].LockSemaphore;
    v8 = LockSemaphore[20];
    LODWORD(v17) = v16;
    v18 = HIDWORD(v15);
    v19 = (int)v15;
    DebugInfo = (int)lpCriticalSection[2].DebugInfo;
    SpinCount_high = HIDWORD(lpCriticalSection[1].SpinCount);
    SpinCount = lpCriticalSection[1].SpinCount;
    v11 = v8;
    v13 = (void *)*((_QWORD *)LockSemaphore + 9);
    v14 = (void *)*((_QWORD *)LockSemaphore + 8);
    sub_1800BEBD4(
      (__int64)v5,
      byte_180166648,
      (__int64)v5,
      v6,
      &v14,
      &v13,
      (__int64)&v11,
      (__int64)&SpinCount,
      (__int64)&SpinCount_high,
      (__int64)&DebugInfo,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  HIDWORD(lpCriticalSection[2].DebugInfo) = v16;
  sub_1800C0F9C(lpCriticalSection);
LABEL_12:
  LeaveCriticalSection(lpCriticalSection);
}
