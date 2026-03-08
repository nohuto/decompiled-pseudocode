/*
 * XREFs of ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0218B30
 * Callers:
 *     xxxMNButtonDown @ 0x1C02197A8 (xxxMNButtonDown.c)
 *     xxxMNDoubleClick @ 0x1C021A56C (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     _SetTimer @ 0x1C01C1BF4 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C021CD94 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // r8d

  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 116LL);
  if ( a2 == -3 )
  {
    v7 = -1;
  }
  else
  {
    if ( a2 != -4 )
      return 0LL;
    v7 = 1;
  }
  if ( (unsigned int)xxxMNSetTop(a1, (unsigned int)(v6 + v7)) )
  {
    v8 = *(_DWORD *)(gpsi + 4976LL);
    if ( !a3 )
      v8 >>= 2;
    SetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), v4, v8, 0LL, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*(void **)(**(_QWORD **)a1 + 16LL), (void *)v4, 0, 1, 0LL);
  }
  return 1LL;
}
