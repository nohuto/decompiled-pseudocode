void __fastcall EtwpTraceDebugPrint(PSTRING Output, ULONG ComponentId, ULONG Level)
{
  int Length; // eax
  int v4; // edx
  _DWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[3]; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+5Ch] [rbp-24h]
  __int64 *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]

  Length = Output->Length;
  v5[0] = ComponentId;
  v4 = 512;
  v5[2] = 0;
  v5[1] = Level;
  if ( (unsigned __int16)Length <= 0x200u )
    v4 = Length;
  v7 = v4;
  v6[0] = v5;
  v6[2] = Output->Buffer;
  v8 = 0;
  v9 = &EtwpNull;
  v6[1] = 8LL;
  v10 = 1LL;
  EtwTraceKernelEvent((__int64)v6, 3u, 0x40000u, 0xA20u, 0x501902u);
}
