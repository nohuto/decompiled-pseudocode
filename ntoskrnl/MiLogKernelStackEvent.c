void __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v4; // [rsp+48h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]

  v3[2] = a2;
  v3[1] = a1;
  v3[0] = 11LL;
  v4 = v3;
  v6 = 0;
  v5 = 24;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x20000001u, 633 - (a3 != 0), 0x11401B04u);
}
