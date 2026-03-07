void __fastcall EtwTraceRetpolineExit(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v2; // [rsp+38h] [rbp-20h] BYREF
  int v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+44h] [rbp-14h]

  v1 = a1;
  v2 = &v1;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0xA0000002, 0xF6Eu, 0x400A02u);
}
