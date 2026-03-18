/*
 * XREFs of ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209718
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A7C0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD.c)
 */

__int64 __fastcall ComputeMoveOutcome(unsigned __int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // eax
  struct tagMONITOR *v9; // r8
  int v10; // edx
  int v11; // ecx
  bool v12; // cf
  int v14; // [rsp+50h] [rbp+18h] BYREF
  struct tagMONITOR *v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  v8 = HitTargetAndMonitorFromPoint(
         (struct tagPOINT)a1,
         (const struct MOVESIZEDATA *const)a2,
         &v15,
         (enum THRESHOLD_MARGIN_DIRECTION *)&v14);
  v9 = v15;
  v10 = v14;
  *a3 = v15;
  *a4 = v10;
  if ( !v8 )
  {
    v12 = *(_DWORD *)(a2 + 240) != 4;
    return 5 - (unsigned int)v12;
  }
  v11 = *(_DWORD *)(a2 + 240);
  if ( v10 == 3 )
  {
    *a4 = 4;
    v12 = v11 != 4;
    return 5 - (unsigned int)v12;
  }
  if ( v11 == 4 )
    return 6LL;
  if ( v9 == *(struct tagMONITOR **)(a2 + 232) )
  {
    if ( v10 == v11 )
    {
      if ( (*(_DWORD *)(a2 + 332) & 1) == 0 || PtInRect((_DWORD *)(a2 + 312), a1) )
        return 1LL;
    }
    else if ( v9 == *(struct tagMONITOR **)(a2 + 232) && v10 == v11 )
    {
      return 0LL;
    }
  }
  return 3LL;
}
