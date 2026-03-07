void __fastcall EtwpExecutiveResourceConfigRunDown(__int64 a1, char a2)
{
  unsigned int v2; // r8d
  bool v3; // cf
  __int64 v4; // rdx
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v2 = *(_DWORD *)a1;
  v3 = a2 != 0;
  v4 = *(_QWORD *)(a1 + 1096);
  v5[0] = EtwpExecutiveResourceReleaseSampleRate;
  v5[1] = EtwpExecutiveResourceContentionSampleRate;
  v5[2] = EtwpExecutiveResourceTimeout;
  v6 = v5;
  v7 = 12;
  EtwpLogKernelEvent((__int64)&v6, v4, v2, 1u, 3918 - v3, 0x401902u);
}
