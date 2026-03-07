void __fastcall EtwpTraceFltIo(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  EtwTraceKernelEvent((__int64)&v4, 1u, a3, a4, 0x501903u);
}
