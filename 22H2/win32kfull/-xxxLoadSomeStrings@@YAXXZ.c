/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0021F40
 * Callers:
 *     xxxInitWindowStation @ 0x1C003DB88 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1C0022098 (xxxClientLoadStringW.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

void xxxLoadSomeStrings(void)
{
  int v0; // edx
  __int64 v1; // rdi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  void *v5; // rdx
  void *v6; // rbx
  void *v7; // rdi
  void *v8; // rsi
  void *v9; // rbp
  void *v10; // r14

  v0 = 0;
  v1 = 0LL;
  do
  {
    v2 = (unsigned int)(v0 + 800);
    v3 = v0 + 1;
    *(_DWORD *)(v1 + gpsi + 968) = v2;
    *(_DWORD *)(v1 + gpsi + 964) = v0 + 1;
    xxxClientLoadStringW(v2, gpsi + 40LL * v0 + 932, 15LL);
    v1 += 40LL;
    v0 = v3;
  }
  while ( v3 < 11 );
  if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v4, (unsigned int)v3) )
  {
    v5 = (void *)(gpsi + 7088LL);
    v6 = (void *)(gpsi + 7228LL);
    v7 = (void *)(gpsi + 7268LL);
    v8 = (void *)(gpsi + 7188LL);
    v9 = (void *)(gpsi + 7148LL);
    v10 = (void *)(gpsi + 7118LL);
  }
  else
  {
    v6 = &gszHELP;
    v7 = &gszSCLOSE;
    v8 = &gszRESDOWN;
    v9 = &gszRESUP;
    v10 = &gszMAX;
    v5 = &gszMIN;
  }
  xxxClientLoadStringW(900LL, v5, 15LL);
  xxxClientLoadStringW(901LL, v10, 15LL);
  xxxClientLoadStringW(902LL, v9, 20LL);
  xxxClientLoadStringW(903LL, v8, 20LL);
  xxxClientLoadStringW(905LL, v7, 15LL);
  xxxClientLoadStringW(904LL, v6, 20LL);
}
