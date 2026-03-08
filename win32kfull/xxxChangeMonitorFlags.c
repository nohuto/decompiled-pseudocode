/*
 * XREFs of xxxChangeMonitorFlags @ 0x1C00E49D0
 * Callers:
 *     xxxCsDdeInitialize @ 0x1C00E472C (xxxCsDdeInitialize.c)
 *     xxxEventWndProc @ 0x1C0107F00 (xxxEventWndProc.c)
 *     NtUserUpdateInstance @ 0x1C01E0670 (NtUserUpdateInstance.c)
 * Callees:
 *     xxxCsEvent @ 0x1C000DCC0 (xxxCsEvent.c)
 */

__int64 __fastcall xxxChangeMonitorFlags(__int64 a1, int a2)
{
  unsigned int v2; // r11d
  int v3; // r9d
  int *v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 result; // rax
  int v9; // eax
  int v10; // eax
  _DWORD Src[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = MonitorFlags;
  v3 = *(_DWORD *)(a1 + 40) ^ a2;
  *(_DWORD *)(a1 + 40) = a2;
  MonitorFlags = 0;
  v5 = (int *)&aMonitorCount;
  v6 = 10LL;
  do
  {
    v7 = v5[1];
    if ( (v7 & v3) != 0 )
    {
      v9 = *v5;
      if ( (v7 & a2) != 0 )
        v10 = v9 + 1;
      else
        v10 = v9 - 1;
      *v5 = v10;
    }
    if ( *v5 )
      MonitorFlags |= v7;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  result = MonitorFlags;
  if ( v2 != MonitorFlags )
  {
    Src[0] = 0;
    Src[1] = 0x40000;
    Src[2] = MonitorFlags;
    return xxxCsEvent(Src, 4u);
  }
  return result;
}
