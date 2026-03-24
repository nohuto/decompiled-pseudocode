/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00246B0
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C0B8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1C00242FC (xxxClientLoadStringW.c)
 */

void xxxLoadSomeStrings(void)
{
  int v0; // edx
  __int64 v1; // rdi
  int v2; // ebx

  v0 = 0;
  v1 = 0LL;
  do
  {
    v2 = v0 + 1;
    *(_DWORD *)(v1 + gpsi + 968) = v0 + 800;
    *(_DWORD *)(v1 + gpsi + 964) = v0 + 1;
    xxxClientLoadStringW(v0 + 800, gpsi + 40LL * v0 + 932, 0xFu);
    v1 += 40LL;
    v0 = v2;
  }
  while ( v2 < 11 );
  xxxClientLoadStringW(900, (__int64)&gszMIN, 0xFu);
  xxxClientLoadStringW(901, (__int64)&gszMAX, 0xFu);
  xxxClientLoadStringW(902, (__int64)&gszRESUP, 0x14u);
  xxxClientLoadStringW(903, (__int64)&gszRESDOWN, 0x14u);
  xxxClientLoadStringW(905, (__int64)&gszSCLOSE, 0xFu);
  xxxClientLoadStringW(904, (__int64)&gszHELP, 0x14u);
}
