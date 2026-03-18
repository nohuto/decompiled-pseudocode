/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00D4C34
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00D42E4 (xxxInitWindowStation.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1C00D4D24 (xxxClientLoadStringW.c)
 */

void xxxLoadSomeStrings(void)
{
  int v0; // edx
  __int64 v1; // rdi
  __int64 v2; // rcx
  int v3; // ebx

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
  xxxClientLoadStringW(900LL, &gszMIN, 15LL);
  xxxClientLoadStringW(901LL, &gszMAX, 15LL);
  xxxClientLoadStringW(902LL, &gszRESUP, 20LL);
  xxxClientLoadStringW(903LL, &gszRESDOWN, 20LL);
  xxxClientLoadStringW(905LL, &gszSCLOSE, 15LL);
  xxxClientLoadStringW(904LL, &gszHELP, 20LL);
}
