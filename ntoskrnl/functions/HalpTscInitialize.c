__int64 __fastcall HalpTscInitialize(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // al
  char v4; // cl
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = 0;
  if ( (int)HalpTscGetAttributes(&v7, &v6, &v8) < 0 )
  {
    v4 = 0;
    v3 = 0;
  }
  else
  {
    v3 = v6;
    v4 = v7;
  }
  if ( v4 != HalpTscPerformanceStateInvariant && !v4 )
  {
    v2 = 0x2000;
    HalpTscPerformanceStateInvariant = 0;
  }
  if ( v3 != HalpTscIdleStateInvariant && !v3 )
  {
    v2 |= 0x4000u;
    HalpTscIdleStateInvariant = 0;
  }
  return HalUpdateTimerCapabilities(a1, v2, 0LL);
}
