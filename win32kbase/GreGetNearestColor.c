/*
 * XREFs of GreGetNearestColor @ 0x1C001A710
 * Callers:
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 * Callees:
 *     ulIndexToRGB @ 0x1C0008B00 (ulIndexToRGB.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001A928 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C001AA00 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00AAA70 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // rbp
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v5; // rdi
  HSEMAPHORE Flink; // rbx
  int v7; // ecx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  char v13; // [rsp+60h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v3 = v10[0];
  if ( v10[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v10);
    Blink = *(struct _LIST_ENTRY **)(v3 + 496);
    v5 = *(_QWORD *)(v3 + 88);
    if ( !Blink )
      Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
    if ( (*(_DWORD *)(v3 + 32) & 0xFFFFFFFD) != 0 )
      Flink = (HSEMAPHORE)Blink[8].Flink;
    else
      Flink = *(HSEMAPHORE *)(*(_QWORD *)(v3 + 48) + 1776LL);
    v7 = *(_DWORD *)(v3 + 120);
    if ( (v7 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v3 + 976) + 248LL) || (v7 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !Flink || *((_DWORD *)Flink + 7) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(Flink, *(_QWORD *)(v3 + 88), a2);
        a2 = ulIndexToRGB(Flink, v5, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
    if ( v12 )
    {
      if ( v13 )
      {
        *(_DWORD *)(v12 + 40) &= ~2u;
        v13 = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v12);
    }
  }
  else
  {
    a2 = -1;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return a2;
}
