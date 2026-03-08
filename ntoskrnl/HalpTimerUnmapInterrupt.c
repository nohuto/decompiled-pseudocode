/*
 * XREFs of HalpTimerUnmapInterrupt @ 0x1405074D0
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptLineToGsi @ 0x140503150 (HalpInterruptLineToGsi.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 */

void __fastcall HalpTimerUnmapInterrupt(__int64 a1, int a2, int a3, char a4)
{
  int v5; // edi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v15[24]; // [rsp+40h] [rbp-39h] BYREF

  *(_QWORD *)v14 = 0LL;
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 0x40) != 0 )
  {
    v9 = v5 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 184) = v9;
    memset(v15, 0, 0x58uLL);
    v15[1] = a2;
    v15[10] = v15[10] & 0xC0000000 | a3 & 0x3FFFFFFF | 0x40000000;
    if ( a4 || (v9 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 236);
      v15[3] = 0;
      v15[11] = v13;
      v15[12] = *(_DWORD *)(a1 + 232);
      v15[13] = *(_DWORD *)(a1 + 240);
      v15[0] = 3;
      v15[4] = 1;
LABEL_15:
      HalpInterruptUnmap(
        **(_DWORD **)(a1 + 288),
        *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
        *(_QWORD *)(a1 + 288) + 8,
        0,
        (__int64)v15,
        1);
      return;
    }
    v10 = *(_DWORD *)(a1 + 224);
    if ( (v10 & 0x200) != 0 )
    {
      if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), v14) < 0 )
        return;
    }
    else if ( (v10 & 0x100) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 84);
      if ( v11 >= 8 )
      {
        v14[0] = 45057;
        v11 -= 8;
      }
      else
      {
        v14[0] = 45056;
      }
      v14[1] = v11;
    }
    v12 = *(_DWORD *)(a1 + 96);
    v15[0] = 0;
    v15[4] = v12;
    v15[3] = *(_DWORD *)(a1 + 92);
    HalpInterruptApplyOverrides(v14, &v15[3], &v15[4]);
    if ( (int)HalpInterruptLineToGsi(v14, &v15[14]) >= 0 )
      goto LABEL_15;
  }
}
