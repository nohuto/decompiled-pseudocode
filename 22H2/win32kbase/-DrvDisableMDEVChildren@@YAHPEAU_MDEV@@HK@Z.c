/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001845C
 * Callers:
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00C2000 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  int v7; // esi
  __int64 v9; // rbp
  __int64 v10; // rdx
  HDEV *v11; // rdi

  WdLogSingleEntry2(5LL, a1);
  v6 = 0LL;
  v7 = 1;
  if ( !*((_DWORD *)a1 + 5) )
    goto LABEL_4;
  while ( !a2 )
  {
LABEL_3:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 5) )
      goto LABEL_4;
  }
  v9 = 56LL * (unsigned int)v6;
  v7 = DrvDisableDisplay(*(HDEV *)((char *)a1 + v9 + 40), 0);
  if ( v7 )
  {
    DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v9 + 40), 0LL, a3);
    goto LABEL_3;
  }
  if ( (_DWORD)v6 )
  {
    v11 = (HDEV *)((char *)a1 + 40);
    do
    {
      LOBYTE(v10) = 1;
      DrvDxgkDisplayOnOff(*v11, v10, a3);
      while ( !(unsigned int)DrvEnableDisplay(*v11) )
        ;
      v11 += 7;
      --v6;
    }
    while ( v6 );
  }
LABEL_4:
  WdLogSingleEntry1(5LL, v7);
  return (unsigned int)v7;
}
