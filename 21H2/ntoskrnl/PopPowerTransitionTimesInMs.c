/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x140382984
 * Callers:
 *     PopDiagTracePowerTransitionTime @ 0x1407741C4 (PopDiagTracePowerTransitionTime.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408E693C (PopCalculateWakeTimeAdjustment.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140990634 (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140C23928, &qword_140C23930);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140C23948, &qword_140C23950);
    *a2 = result;
  }
  v12 = a5;
  if ( a5 )
  {
    v13 = 0LL;
    result = PopQpcTimeInMs(&v13, &qword_140C23968);
    *v12 = result;
    if ( dword_140C23B70 )
    {
      result = (unsigned int)(qword_140C239E8 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140C239B0 / v11;
    *a3 = qword_140C239B0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140C23AE8 + qword_140C23A20) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140C23990 / v11;
    *a6 = qword_140C23990 / v11;
  }
  return result;
}
