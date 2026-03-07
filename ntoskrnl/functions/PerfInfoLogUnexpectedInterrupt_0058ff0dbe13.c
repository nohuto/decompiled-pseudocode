void __fastcall PerfInfoLogUnexpectedInterrupt(int a1)
{
  int *v1; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-20h]
  int v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v3 = 0;
  v1 = &v4;
  v2 = 2;
  EtwTraceKernelEvent((__int64)&v1, 1u, 0x20004000u, 0xF5Cu, 0x400A02u);
}
