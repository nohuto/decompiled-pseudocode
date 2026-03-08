/*
 * XREFs of ExpSetTimer2 @ 0x1402CF8A0
 * Callers:
 *     NtSetIRTimer @ 0x1402CF830 (NtSetIRTimer.c)
 *     NtCancelTimer2 @ 0x1402CF850 (NtCancelTimer2.c)
 *     NtSetTimer2 @ 0x1402CF870 (NtSetTimer2.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x1402CF9D4 (ExpSetTimerObject2.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  __int128 v8; // [rsp+58h] [rbp-20h]

  v8 = 0LL;
  if ( a2 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      v4 = a4;
      if ( a4 )
      {
        if ( a4 >= 0x7FFFFFFF0000LL )
          v4 = 0x7FFFFFFF0000LL;
        v8 = *(_OWORD *)v4;
      }
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, ExpIRTimerObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
    return ExpSetTimerObject2(Object);
  return result;
}
