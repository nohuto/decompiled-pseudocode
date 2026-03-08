/*
 * XREFs of ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0190964
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

void __fastcall MapMonitorToUnifromSpaceInStripe(struct _MDEV *a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rcx

  v5 = 56LL * a2;
  v7 = (int)(float)((float)((float)(*(_DWORD *)((char *)a1 + v5 + 64) - *(_DWORD *)((char *)a1 + v5 + 56))
                          * (float)(96.0
                                  / (float)((96 * *(_DWORD *)(*(_QWORD *)((char *)a1 + v5 + 40) + 2432LL) + 50) / 0x64u)))
                  + 0.5);
  v8 = (int)(float)((float)((float)(*(_DWORD *)((char *)a1 + v5 + 68) - *(_DWORD *)((char *)a1 + v5 + 60))
                          * (float)(96.0
                                  / (float)((96 * *(_DWORD *)(*(_QWORD *)((char *)a1 + v5 + 40) + 2432LL) + 50) / 0x64u)))
                  + 0.5);
  if ( a3 == -1 )
  {
    v9 = 0;
  }
  else
  {
    v10 = 56LL * a3;
    if ( a4 )
      v9 = *(_DWORD *)((char *)a1 + v10 + 84);
    else
      v9 = *(_DWORD *)((char *)a1 + v10 + 76) - v7;
  }
  *(_DWORD *)((char *)a1 + v5 + 80) = 0;
  *(_DWORD *)((char *)a1 + v5 + 76) = v9;
  *(_DWORD *)((char *)a1 + v5 + 84) = v7 + v9;
  *(_DWORD *)((char *)a1 + v5 + 88) = v8;
}
