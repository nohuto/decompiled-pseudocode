/*
 * XREFs of GreGetNearestColor @ 0x1C0021710
 * Callers:
 *     SetSysColor @ 0x1C0020850 (SetSysColor.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003C3E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003E130 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ulIndexToRGB @ 0x1C0067820 (ulIndexToRGB.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0086DE0 (ulGetNearestIndexFromColorref.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  SURFACE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v9[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v11; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v12[64]; // [rsp+80h] [rbp-48h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v10, (struct XDCOBJ *)v9);
    v3 = *(SURFACE **)(v9[0] + 496LL);
    v4 = *(_QWORD *)(v9[0] + 88LL);
    if ( !v3 )
      v3 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v9[0] + 32LL) & 0xFFFFFFFD) != 0 )
      v5 = *((_QWORD *)v3 + 16);
    else
      v5 = *(_QWORD *)(*(_QWORD *)(v9[0] + 48LL) + 1808LL);
    v6 = *(_DWORD *)(v9[0] + 120LL);
    if ( (v6 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 248LL) || (v6 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v5 || *(_DWORD *)(v5 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v5, *(_QWORD *)(v9[0] + 88LL), a2);
        a2 = ulIndexToRGB(v5, v4, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
    if ( v11 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v11);
    PopThreadGuardedObject(v12);
  }
  else
  {
    a2 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return a2;
}
