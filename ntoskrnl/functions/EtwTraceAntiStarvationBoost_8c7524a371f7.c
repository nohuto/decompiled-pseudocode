void __fastcall EtwTraceAntiStarvationBoost(__int64 a1, char a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+34h] [rbp-24h]
  char v5; // [rsp+36h] [rbp-22h]
  char v6; // [rsp+37h] [rbp-21h]
  int *v7; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 1232);
  v2 = *(_DWORD *)(a1 + 536);
  v9 = 0;
  v4 = v2;
  v5 = a2;
  v7 = &v3;
  v6 = 0;
  v8 = 8;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x40000001u, 0x53Cu, 0x401802u);
}
