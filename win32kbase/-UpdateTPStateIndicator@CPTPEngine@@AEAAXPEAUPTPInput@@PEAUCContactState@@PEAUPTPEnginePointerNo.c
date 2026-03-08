/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C023ACE0
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C0235408 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0235604 (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0237DFC (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C023A51C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C023A63C (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C023A830 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // r13
  int v12; // r9d
  __int64 v13; // r10
  int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  _DWORD *v17; // rax
  int v18; // ecx
  int v19; // r9d
  unsigned __int64 v20; // r8
  unsigned int v21; // ebp
  int v22; // r12d
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  unsigned __int64 v27; // r10
  __int64 v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // r8d
  int v34; // ecx

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    *((_QWORD *)a3 + 1) = v5;
    if ( !*((_DWORD *)this + 5) || !*((_DWORD *)this + 115) || PtInRect((_DWORD *)this + 12, *((_QWORD *)a4 + 5)) )
    {
      *(_DWORD *)a3 |= 0x800u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v12 = *((_DWORD *)this + 984);
    v13 = 0x624DD2F1A9FBE77LL;
    if ( (v12 & 0x4000000) != 0
      && *(_QWORD *)a2 - *((_QWORD *)this + 467) >= *((_QWORD *)this + 12)
                                                  * (unsigned __int64)*((unsigned int *)this + 102)
                                                  / 0x3E8 )
    {
      *((_DWORD *)this + 984) = v12 & 0xFBFFFFFF;
    }
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 968, v5) )
    {
      v14 |= 0x40u;
      *(_DWORD *)a3 = v14;
    }
    if ( (v14 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v8, a3);
      v21 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v21;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        v22 = v21;
        if ( (v21 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          v22 = v21 | 4;
          *(_DWORD *)a3 = v21 | 4;
          *((_QWORD *)a3 + 5) = v5;
          *a5 = 1;
        }
        v23 = v22;
        if ( (v22 & 8) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          v23 = v22 | 8;
          *(_DWORD *)a3 = v22 | 8;
        }
        if ( (v23 & 0x80000) == 0
          && *((unsigned int *)this + 100)
           * (__int64)(int)((HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(v5)))
           + (unsigned __int64)*((unsigned int *)this + 101)
           * (int)((*((_QWORD *)a3 + 6) - v5) * (*((_QWORD *)a3 + 6) - v5)) >= *((unsigned int *)this + 100)
                                                                             * (unsigned __int64)*((unsigned int *)this
                                                                                                 + 101) )
        {
          v23 |= 0x80000u;
          *(_DWORD *)a3 = v23;
        }
        v21 = v23;
        if ( (v23 & 0x1000000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
        {
          v21 = v23 | 0x1000000;
          *(_DWORD *)a3 = v23 | 0x1000000;
        }
        if ( (v21 & 0x10000000) == 0 )
        {
          v24 = (unsigned int)(*((_DWORD *)this + 95) * *((_DWORD *)this + 95));
          v25 = (unsigned int)(*((_DWORD *)this + 94) * *((_DWORD *)this + 94));
          if ( v25 * (int)((HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v5)) * (HIDWORD(*((_QWORD *)a3 + 2)) - HIDWORD(v5)))
             + v24 * (int)((*((_QWORD *)a3 + 2) - v5) * (*((_QWORD *)a3 + 2) - v5)) >= (unsigned __int64)(v25 * v24) )
          {
            v21 |= 0x10000000u;
            *(_DWORD *)a3 = v21;
          }
        }
      }
      v26 = *((_QWORD *)this + 467);
      v27 = v8 - *((_QWORD *)a3 + 9);
      v28 = *((_QWORD *)this + 468);
      v29 = v21 & 0xFFFFFFDF | (*((_QWORD *)this + 470) < v27 ? 0x20 : 0);
      *(_DWORD *)a3 = v29;
      v30 = v29 & 0xFFEFFFFF | (*((_QWORD *)this + 471) < v27 ? 0x100000 : 0);
      *(_DWORD *)a3 = v30;
      v31 = v30 & 0xFFDFFFFF | (*((_QWORD *)this + 472) < v27 ? 0x200000 : 0);
      *(_DWORD *)a3 = v31;
      v32 = v31 & 0xFFBFFFFF | (*((_QWORD *)this + 473) < v27 ? 0x400000 : 0);
      *(_DWORD *)a3 = v32;
      if ( v8 - v28 >= (unsigned __int64)(v8 - v26) )
        v28 = v26;
      v33 = v32 & 0xFF7FFFFF | (*((_QWORD *)this + 471) < (unsigned __int64)(v8 - v28) ? 0x800000 : 0);
      *(_DWORD *)a3 = v33;
      v34 = v33;
      if ( (v33 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 10)) > *((_QWORD *)this + 469) )
      {
        v34 = v33 | 0x10;
        *(_DWORD *)a3 = v33 | 0x10;
        *a5 = 1;
      }
      if ( (v34 & 0x2000000) == 0 && v27 > *((_QWORD *)this + 474) )
      {
        v34 |= 0x2000000u;
        *(_DWORD *)a3 = v34;
      }
      if ( (v34 & 0x80u) == 0
        && (*((_DWORD *)this + 984) & 0x20000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 13), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      v15 = v14 & 0xFF87FFE3;
      *((_QWORD *)a3 + 9) = v8;
      *(_DWORD *)a3 = v15;
      *((_QWORD *)a3 + 12) = v8;
      *((_QWORD *)a3 + 14) = v8;
      v16 = v15 & 0xE3FFE5FC | 3;
      *((_QWORD *)a3 + 16) = v8;
      *((_DWORD *)a3 + 35) = *((_DWORD *)a4 + 16);
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *((_QWORD *)a3 + 2) = v5;
      *((_QWORD *)a3 + 6) = v5;
      *((_QWORD *)a3 + 7) = v5;
      *((_QWORD *)a3 + 8) = *(_QWORD *)((char *)a2 + 28);
      v17 = (_DWORD *)((char *)this + 3644);
      *(_DWORD *)a3 = v16;
      *((_DWORD *)a3 + 36) = 0;
      if ( !*((_DWORD *)this + 903) || (v18 = 0x2000, *v17 == 1) )
        v18 = 0;
      *((_DWORD *)a3 + 1) |= 0xBu;
      *((_DWORD *)a3 + 37) = 0;
      v19 = v18 & 0x7CF83A3F | v16 & 0x7CF81A3F;
      *((_QWORD *)a3 + 11) = v8;
      *(_DWORD *)a3 = v19;
      *((_QWORD *)a3 + 4) = v5;
      if ( (unsigned int)(*v17 - 1) <= 1 )
      {
        v20 = *((_QWORD *)this + 12) * *((unsigned int *)this + 110);
        if ( *(_QWORD *)a2 - *((_QWORD *)this + 482) >= (unsigned __int64)(((v20
                                                                           * (unsigned __int128)(unsigned __int64)v13) >> 64)
                                                                         + ((unsigned __int64)(v20
                                                                                             - ((v20
                                                                                               * (unsigned __int128)(unsigned __int64)v13) >> 64)) >> 1)) >> 9 )
          v6 = 0x40000000;
      }
      *(_DWORD *)a3 = v6 | v19 & 0xBFFFFFFF;
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v8, a3);
    }
  }
}
