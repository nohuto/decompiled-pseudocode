/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209718 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@.c)
 *     ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088 (-HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagREC.c)
 *     ?HandleSameDockTargetSameMonitorMove@@YAHPEAUMOVESIZEDATA@@KH@Z @ 0x1C020A514 (-HandleSameDockTargetSameMonitorMove@@YAHPEAUMOVESIZEDATA@@KH@Z.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 *     ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C (-xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUt.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0236AF4 (-ResetArrangement@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct MOVESIZEDATA *a1,
        unsigned int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  unsigned int v5; // ebp
  struct tagCHECKPOINT *v9; // r15
  LONG v10; // edx
  struct tagPOINT v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  struct tagMONITOR *v16; // rdx
  int v17; // r13d
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  struct tagWND *v23; // rdx
  struct tagRECT v24; // xmm0
  struct tagRECT v25; // xmm0
  struct tagMONITOR *v27; // [rsp+30h] [rbp-48h] BYREF
  struct tagMONITOR *v28; // [rsp+38h] [rbp-40h] BYREF
  struct tagPOINT v29; // [rsp+40h] [rbp-38h]

  v5 = 0;
  v28 = 0LL;
  v27 = (struct tagMONITOR *)0x100000000LL;
  *a5 = 0LL;
  v9 = (struct tagCHECKPOINT *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( v9 )
  {
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
    v29.x = (__int16)a2 - *((_DWORD *)a1 + 42);
    v29.y = v10;
    if ( v29.x != *((_DWORD *)a1 + 66) || v10 != *((_DWORD *)a1 + 67) )
    {
      v11 = v29;
      v12 = ComputeMoveOutcome(*(_QWORD *)&v29, (__int64)a1, &v28, &v27);
      *((struct tagPOINT *)a1 + 33) = v11;
      v13 = *((_DWORD *)a1 + 50);
      if ( (v13 & 0x2000000) != 0 )
      {
        *((_DWORD *)a1 + 50) = v13 & 0xFDFFFFFF;
        v14 = MoveRect((__int64)a1, a2, 0);
        *((_DWORD *)a1 + 50) |= 0x2000000u;
        v15 = v14;
      }
      else
      {
        v15 = HIDWORD(v27);
      }
      v16 = (struct tagMONITOR *)(unsigned int)v27;
      v17 = *((_DWORD *)a1 + 83) & 3;
      if ( v12 == 1 && (unsigned int)v27 <= 2 )
        return (unsigned int)HandleSameDockTargetSameMonitorMove(a1, a2, v15);
      *(_OWORD *)((char *)a1 + 296) = 0LL;
      *(_OWORD *)((char *)a1 + 312) = 0LL;
      *((_DWORD *)a1 + 83) &= 0xFFFFFFFC;
      *((_DWORD *)a1 + 82) = 0;
      if ( (v18 = v12 - 1) == 0 )
      {
        return (unsigned int)HandleSameDockTargetSameMonitorMove(a1, a2, v15);
      }
      else
      {
        v19 = v18 - 2;
        if ( !v19 )
        {
          v5 = xxxHandleNewDockTargetOrMonitorMove((__int64)a1, (unsigned int)v16, v28, v11.x, a2, a3);
          if ( v5 && (*a3 & 1) != 0 )
          {
            v25 = *(struct tagRECT *)((char *)a1 + 40);
            *a5 = v9;
            *a4 = v25;
          }
          return v5;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v5 = HandleMovingAwayFromDockTargetMove(a1, v16, a2, v11, (__m128i *)v9, a3);
          if ( v5 && (*a3 & 1) != 0 )
          {
            v24 = *(struct tagRECT *)((char *)a1 + 40);
            *a5 = v9;
            *a4 = v24;
          }
          if ( v17 )
            NotifyShell::ResetArrangement(*((NotifyShell **)a1 + 2), v23);
          return v5;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 != 1 )
            return v5;
          return (unsigned int)xxxHandleNoDockTargetToDockTargetMove((__int64)a1, (unsigned int)v16, v28, a2, v9, a3);
        }
        else
        {
          return (unsigned int)MoveRect((__int64)a1, a2, *((_DWORD *)a1 + 61));
        }
      }
    }
  }
  return 0LL;
}
