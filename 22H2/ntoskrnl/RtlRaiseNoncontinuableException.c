/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1404077C0
 * Callers:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1404070B0 (RtlpCaptureContext.c)
 */

__int64 RtlRaiseNoncontinuableException()
{
  char v0; // r8
  __int64 v2; // [rsp+28h] [rbp-10h]
  __int64 v3; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v5; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  *(_QWORD *)(v2 + 152) = &v5;
  *(_QWORD *)(v2 + 248) = retaddr;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v2 + 248);
  if ( v0 )
    return RtlDispatchException(v3, v2);
  else
    return ZwRaiseException(v3, v2);
}
