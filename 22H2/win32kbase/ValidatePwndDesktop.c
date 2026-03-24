/*
 * XREFs of ValidatePwndDesktop @ 0x1C01156D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 */

__int64 __fastcall ValidatePwndDesktop(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && (*(_QWORD *)(a1 + 16) == a2 || *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 456)) )
    return 1;
  else
    UserSetLastError(1400LL, a2);
  return v2;
}
