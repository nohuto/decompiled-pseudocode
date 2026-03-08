/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140A018A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return off_140C01D40[0]();
  ProbeForWrite(a1, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(__int64 *))off_140C01D40[0])(&v3);
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
