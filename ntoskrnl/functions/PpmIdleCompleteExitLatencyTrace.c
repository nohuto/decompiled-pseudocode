__int64 PpmIdleCompleteExitLatencyTrace(__int64 a1, int a2, char a3, ...)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  int v5; // eax
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v9; // [rsp+60h] [rbp+28h]
  __int64 v10; // [rsp+68h] [rbp+30h]
  __int64 v11; // [rsp+70h] [rbp+38h]
  __int64 v12; // [rsp+78h] [rbp+40h]
  va_list va1; // [rsp+80h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  v3 = a1;
  if ( a2 < 0 )
    return PpmCancelExitLatencyTrace(a1);
  if ( a3 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 33600) + 64LL), v7 > v4) )
    v5 = PpmConvertTime(v7 - v4, PopQpcFrequency, 0x989680uLL);
  else
    v5 = v9;
  if ( !(unsigned __int8)PpmTraceExitLatency((unsigned int)va, v11, v12, v10, v5, (__int64)va) )
  {
    a1 = v3;
    return PpmCancelExitLatencyTrace(a1);
  }
  result = *(_QWORD *)(v3 + 33600);
  *(_BYTE *)(result + 3) = 0;
  *(_QWORD *)(result + 64) = 0LL;
  return result;
}
