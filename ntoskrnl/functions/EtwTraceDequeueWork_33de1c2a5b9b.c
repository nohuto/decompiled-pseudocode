void __fastcall EtwTraceDequeueWork(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _DWORD v4[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h]
  _QWORD v6[3]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1232);
  v5 = 0LL;
  v4[0] = v3;
  v6[0] = v4;
  v6[2] = a2;
  v6[1] = 8LL;
  v7 = 8 * a3;
  v8 = 0;
  v4[1] = a3;
  EtwTraceKernelEvent((__int64)v6, 2u, 0x21000000u, 0x53Fu, 0x1501E02u);
}
