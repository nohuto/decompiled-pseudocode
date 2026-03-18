/*
 * XREFs of GreGetNearestColor @ 0x1C005FC20
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 * Callees:
 *     ulIndexToRGB @ 0x1C00097B0 (ulIndexToRGB.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005FE28 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005FF00 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C009B700 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v4; // rdi
  HSEMAPHORE Flink; // rbx
  int v6; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v9[6]; // [rsp+20h] [rbp-A8h] BYREF
  struct _ERESOURCE v10; // [rsp+50h] [rbp-78h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v10);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v10, (struct XDCOBJ *)v9);
    Blink = *(struct _LIST_ENTRY **)(v9[0] + 496LL);
    v4 = *(_QWORD *)(v9[0] + 88LL);
    if ( !Blink )
      Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
    if ( (*(_DWORD *)(v9[0] + 32LL) & 0xFFFFFFFD) != 0 )
      Flink = (HSEMAPHORE)Blink[8].Flink;
    else
      Flink = *(HSEMAPHORE *)(*(_QWORD *)(v9[0] + 48LL) + 1776LL);
    v6 = *(_DWORD *)(v9[0] + 120LL);
    if ( (v6 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 248LL) || (v6 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !Flink || *((_DWORD *)Flink + 7) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(Flink, *(_QWORD *)(v9[0] + 88LL), a2);
        a2 = ulIndexToRGB(Flink, v4, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor(&v10);
    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&v10.SharedWaiters);
  }
  else
  {
    a2 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return a2;
}
