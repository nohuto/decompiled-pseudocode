__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  unsigned int *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v0 = 1;
  KiDynamicTraceCallouts[0] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, KiDynamicTraceCallouts, &qword_140D1F2A8);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(qword_140D1F2A8, &v4, 0LL);
    if ( v3 )
    {
      qword_140D1F2A8 = v4 + *v3;
      qword_140D1F2B0 = v4 + v3[1];
    }
    result = (__int64)v5;
    *v5 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
