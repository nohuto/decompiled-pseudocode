/*
 * XREFs of RtlpGetStackLimitsEx @ 0x140340290
 * Callers:
 *     RtlDispatchException @ 0x14033E580 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402D0C30 (KeQueryCurrentStackInformationEx.c)
 */

bool __fastcall RtlpGetStackLimitsEx(unsigned __int64 a1, struct _KPRCB **a2, unsigned __int64 *a3)
{
  bool result; // al
  char v4; // [rsp+48h] [rbp+20h] BYREF

  result = KeQueryCurrentStackInformationEx(a1, &v4, a2, a3);
  if ( !result )
    __fastfail(4u);
  return result;
}
