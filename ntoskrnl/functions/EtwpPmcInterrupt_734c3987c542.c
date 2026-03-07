void __fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  unsigned __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  unsigned int CurrentRunTime; // [rsp+38h] [rbp-30h]
  __int16 v6; // [rsp+3Ch] [rbp-2Ch]
  __int16 v7; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v8[1] = 16LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v4 = v2;
  v7 = 0;
  v6 = a2;
  v8[0] = &v4;
  v3 = 34640386;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34642434;
  EtwTraceKernelEvent((__int64)v8, 1u, 0x20000400u, 0xF2Fu, v3);
}
