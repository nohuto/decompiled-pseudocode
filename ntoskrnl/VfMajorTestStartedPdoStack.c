/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140AD0164
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x140201FB8 (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140ACFBD0 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 (__fastcall *__fastcall VfMajorTestStartedPdoStack(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64); // rax

  result = (__int64 (__fastcall *)(_QWORD))IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && (VfRuleClasses & 0x400000) == 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_140D72660 + 12 * v3);
      if ( v4 )
        v4(a1);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= 0x1B );
    result = qword_140D730E0;
    if ( qword_140D730E0 )
      return (__int64 (__fastcall *)(_QWORD))qword_140D730E0(a1);
  }
  return result;
}
