void __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  __int64 *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = &v5;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0x80000400, a2 + 864, 0x501902u);
}
