/*
 * XREFs of sub_18005279C @ 0x18005279C
 * Callers:
 *     sub_180052750 @ 0x180052750 (sub_180052750.c)
 * Callees:
 *     sub_18005284C @ 0x18005284C (sub_18005284C.c)
 *     sub_18005289C @ 0x18005289C (sub_18005289C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18005279C(LPCRITICAL_SECTION lpCriticalSection, int a2)
{
  unsigned int i; // edx
  unsigned int v5; // edi
  ULONG_PTR *p_SpinCount; // r15

  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    v5 = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    if ( *((_DWORD *)&lpCriticalSection[1].DebugInfo->Type + i) == a2 )
    {
      p_SpinCount = &lpCriticalSection[1].SpinCount;
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= lpCriticalSection[2].DebugInfo )
        sub_1800B8610(2147942487LL);
      --*(_DWORD *)(*p_SpinCount + 4LL * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= lpCriticalSection[2].DebugInfo )
        sub_1800B8610(2147942487LL);
      if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
      {
        sub_18005289C(&lpCriticalSection[1], i);
        sub_18005284C(&lpCriticalSection[1].SpinCount, v5);
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
