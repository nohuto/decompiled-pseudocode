/*
 * XREFs of LdrpObtainLockedEnclave @ 0x18002FA14
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrDeleteEnclave @ 0x1800CCC20 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800CCCB0 (LdrInitializeEnclave.c)
 *     LdrIsEnclaveAddress @ 0x1800CCDB0 (LdrIsEnclaveAddress.c)
 *     LdrLoadEnclaveModule @ 0x1800CCE50 (LdrLoadEnclaveModule.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD740 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x1800CD300 (LdrpDereferenceEnclave.c)
 */

__int64 *__fastcall LdrpObtainLockedEnclave(unsigned __int64 a1, char a2)
{
  __int64 *i; // rbx
  __int64 *v5; // r8

  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = (__int64 *)LdrpEnclaveList;
    while ( v5 != &LdrpEnclaveList )
    {
      i = v5;
      if ( a2 )
      {
        if ( a1 == v5[9] )
          break;
      }
      else if ( a1 >= v5[9] && a1 - v5[9] < v5[10] )
      {
        break;
      }
      v5 = (__int64 *)*v5;
      i = 0LL;
    }
    if ( i )
      _InterlockedIncrement((volatile signed __int32 *)i + 15);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    if ( !i )
      return 0LL;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
    if ( i[9] )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 2));
  }
  return i;
}
