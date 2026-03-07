__int64 __fastcall DirectComposition::CApplicationChannel::TelemetrySetApplicationId(
        DirectComposition::CApplicationChannel *this,
        const unsigned __int16 *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  void *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int16 *Quota; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( (int)StringCchLengthW(a2, 0x97uLL, &v9) < 0 )
    return 3221225485LL;
  v5 = (void *)*((_QWORD *)this + 335);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  v6 = v9;
  Quota = (unsigned __int16 *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                v4,
                                0x104uLL,
                                2 * v9 + 2,
                                0x66624344u);
  *((_QWORD *)this + 335) = Quota;
  if ( !Quota )
    return 3221225495LL;
  StringCchCopyW(Quota, v6 + 1, a2);
  *((_BYTE *)this + 240) |= 0x80u;
  return 0LL;
}
