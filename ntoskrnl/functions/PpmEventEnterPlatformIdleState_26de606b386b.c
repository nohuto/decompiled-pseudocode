void __fastcall PpmEventEnterPlatformIdleState(int a1)
{
  int *v1; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+38h] [rbp-20h]
  int v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v3 = 0;
    v1 = &v4;
    v2 = 4;
    EtwTraceKernelEvent((__int64)&v1, 1u, 0x40008000u, 0x123Bu, 0x602u);
  }
}
