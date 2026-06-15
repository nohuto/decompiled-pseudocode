/*
 * XREFs of sub_18012DC90 @ 0x18012DC90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 */

void __fastcall sub_18012DC90(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx

  v1 = lpCriticalSection;
  if ( a1 == *(_QWORD *)&lpCriticalSection[2].LockCount )
  {
    EnterCriticalSection(lpCriticalSection);
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      sub_1800103D4((__int64)v1);
    LeaveCriticalSection(v1);
  }
}
