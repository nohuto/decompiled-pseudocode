void __fastcall EtwTraceIoTimerEvent(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[1] = a3;
  v4 = v3;
  v6 = 0;
  v3[0] = a2;
  v5 = 16;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x40800000u, a1, 0x501802u);
}
