/*
 * XREFs of KiInitDynamicTraceSupport @ 0x140A4D370
 * Callers:
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14033F110 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // r9
  unsigned int *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v0 = 1;
  KiDynamicTraceCallouts[0] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v6, KiDynamicTraceCallouts, &qword_140CFCBD8);
  if ( (int)result >= 0 )
  {
    v4 = RtlLookupFunctionEntry(qword_140CFCBD8, &v5, 0LL, v3);
    if ( v4 )
    {
      qword_140CFCBD8 = v5 + *v4;
      qword_140CFCBE0 = v5 + v4[1];
    }
    result = (__int64)v6;
    *v6 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
