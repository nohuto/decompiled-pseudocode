__int64 __fastcall PerfInfoLogInterruptHv(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  return EtwTraceTimedEvent(3907, 0x20004000u, (__int64)&v4, 12, 4196866, a3);
}
