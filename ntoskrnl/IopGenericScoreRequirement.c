/*
 * XREFs of IopGenericScoreRequirement @ 0x140808530
 * Callers:
 *     <none>
 * Callees:
 *     RtlIoDecodeMemIoResource @ 0x1403706F0 (RtlIoDecodeMemIoResource.c)
 */

signed __int64 __fastcall IopGenericScoreRequirement(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  ULONGLONG v1; // rax
  ULONGLONG v2; // r9
  signed __int64 result; // rax
  ULONGLONG v4; // [rsp+38h] [rbp+10h] BYREF
  ULONGLONG v5; // [rsp+40h] [rbp+18h] BYREF
  ULONGLONG v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v1 = RtlIoDecodeMemIoResource(a1, &v4, &v5, &v6);
  v2 = v4;
  if ( !v4 )
    v2 = 1LL;
  result = (v6 - (~(v2 - 1) & (v2 + v5 - 1)) - v1 + 1) / v2 + 1;
  if ( result < 0 )
    return 0xFFFFFFFFLL;
  if ( result > 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  return result;
}
