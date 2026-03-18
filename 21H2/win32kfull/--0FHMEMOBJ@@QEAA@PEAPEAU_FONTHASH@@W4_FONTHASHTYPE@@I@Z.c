/*
 * XREFs of ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C01197F0
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0270730 (-bInitPrivatePFT@@YAHXZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA244 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     bInitFontTables @ 0x1C0391900 (bInitFontTables.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 **__fastcall FHMEMOBJ::FHMEMOBJ(__int64 **a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 *v8; // rcx

  *a1 = a2;
  if ( a4 > 0x1FFFFFFA )
  {
    *a2 = 0LL;
  }
  else
  {
    if ( 8 * a4 == -40 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = Win32AllocPoolZInit(8 * a4 + 40, 1935763527LL);
      a2 = *a1;
    }
    *a2 = v7;
  }
  v8 = (__int64 *)**a1;
  a1[1] = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 1213415752;
    *((_DWORD *)a1[1] + 1) = a3;
    *((_DWORD *)a1[1] + 2) = a4;
    *((_DWORD *)a1[1] + 3) = 0;
    *((_DWORD *)a1[1] + 4) = 0;
    memset(a1[1] + 5, 0, 8LL * *((unsigned int *)a1[1] + 2));
    a1[1][3] = 0LL;
    a1[1][4] = 0LL;
  }
  return a1;
}
