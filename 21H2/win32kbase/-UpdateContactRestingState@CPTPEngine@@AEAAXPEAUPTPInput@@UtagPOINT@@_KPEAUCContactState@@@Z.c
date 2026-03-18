/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0204570
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0204A20 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01FEE48 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C02040F4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        __int64 a4,
        struct CContactState *a5)
{
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // r14d
  bool v14; // dl
  __int64 v15; // r11
  unsigned __int64 v16; // rcx
  int v17; // ebp
  struct CContactState *v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int i; // r8d
  struct CContactState *v22; // r9
  int v23; // r10d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  char *v26; // r8
  unsigned int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  struct CContactState *v30; // r10
  struct CContactState *j; // r11
  int v32; // r9d
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  int v36; // eax
  CPTPEngine *v37; // rcx
  struct CContactState *v38; // r10
  LONG y; // [rsp+64h] [rbp+1Ch]

  y = a3.y;
  v8 = a4 - *((_QWORD *)a5 + 12);
  v9 = *((_QWORD *)a5 + 9);
  v10 = *(_DWORD *)a5;
  v11 = 6LL;
  v12 = a4 - v9;
  v13 = -__CFSHR__(*(_DWORD *)a5, 8);
  v14 = *((_DWORD *)this + 911) == 6 && !__CFSHR__(*(_DWORD *)a5, 8);
  v15 = 0x624DD2F1A9FBE77LL;
  if ( (v10 & 0x200) == 0 && !v14 )
  {
    if ( (v10 & 0x100) != 0 )
    {
      if ( v12 )
      {
LABEL_11:
        v16 = *((_QWORD *)this + 12) * *((unsigned int *)this + 56);
        if ( 10 * v8 < v16 / 0x3E8 )
          goto LABEL_28;
        v17 = 0;
        if ( *((_DWORD *)this + 911) == 2 )
        {
          if ( v13 )
          {
            v18 = (CPTPEngine *)((char *)this + 400 * *((unsigned int *)this + 902) + 1208);
            if ( a5 != v18
              && (*(_DWORD *)v18 & 0x80u) == 0
              && (y >= *((_DWORD *)this + 969) || v9 < *((_QWORD *)v18 + 13))
              && !(unsigned int)CPTPEngine::AreTheseTwoContactsAPan(
                                  this,
                                  (const struct PTPInput *)((v16 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64),
                                  a5,
                                  v18) )
            {
              v17 = 1;
            }
          }
        }
        if ( (*(_DWORD *)a5 & 0x100) != 0 )
          v19 = *((unsigned int *)a5 + 37);
        else
          v19 = 0LL;
        if ( (int)((*(_QWORD *)((char *)a5 + 8 * v19 + 156) - a3.x) * (*(_QWORD *)((char *)a5 + 8 * v19 + 156) - a3.x)
                 + (HIDWORD(*(_QWORD *)((char *)a5 + 8 * v19 + 156)) - y)
                 * (HIDWORD(*(_QWORD *)((char *)a5 + 8 * v19 + 156)) - y)) <= (unsigned __int64)*((unsigned int *)this
                                                                                                + 55) )
          v17 = 1;
        goto LABEL_27;
      }
    }
    else if ( v12 )
    {
      if ( !*((_DWORD *)a5 + 37) )
        *(_DWORD *)a5 = v10 | 0x100;
      goto LABEL_11;
    }
    v17 = 1;
LABEL_27:
    CPTPEngine::SetContactRestingState(this, a5, v17);
    *(struct tagPOINT *)((char *)a5 + 8 * *((unsigned int *)a5 + 37) + 156) = a3;
    v20 = *((_DWORD *)a5 + 37) + 1;
    *((_QWORD *)a5 + 12) = a4;
    *((_DWORD *)a5 + 37) = v20 % 0xA;
  }
LABEL_28:
  if ( *((_DWORD *)this + 911) == 1 )
  {
    if ( v13 && (*(_DWORD *)a5 & 4) != 0 && (*((_DWORD *)a5 + 1) & 2) != 0 )
    {
      for ( i = 0; i < 6; ++i )
      {
        v22 = (CPTPEngine *)((char *)this + 400 * i + 1208);
        if ( a5 != v22 )
        {
          v23 = *(_DWORD *)v22;
          if ( (*(_DWORD *)v22 & 1) != 0 )
          {
            v24 = *((_QWORD *)this + 12) * *((unsigned int *)this + 56);
            v25 = (unsigned __int64)(((v24 * (unsigned __int128)(unsigned __int64)v15) >> 64)
                                   + ((unsigned __int64)(v24 - ((v24 * (unsigned __int128)(unsigned __int64)v15) >> 64)) >> 1)) >> 9;
            if ( (v23 & 0x80u) == 0
              || __CFSHR__(v23, 17)
              || a4 - *((_QWORD *)v22 + 9) < v25 && __CFSHR__(v23, 3) && __CFSHR__(*((_DWORD *)v22 + 1), 2) )
            {
              goto LABEL_50;
            }
          }
        }
        v15 = 0x624DD2F1A9FBE77LL;
      }
      v26 = (char *)this + 1212;
      do
      {
        if ( a5 != (struct CContactState *)(v26 - 4) && (*((_DWORD *)v26 - 1) & 1) != 0 )
        {
          v27 = *(_DWORD *)v26 & 0xFFFFFFFD;
          *(_DWORD *)v26 = v27;
          v28 = *((_QWORD *)this + 12) * *((unsigned int *)this + 56);
          v29 = (unsigned __int64)(((v28 * (unsigned __int128)(unsigned __int64)v15) >> 64)
                                 + ((unsigned __int64)(v28 - ((v28 * (unsigned __int128)(unsigned __int64)v15) >> 64)) >> 1)) >> 9;
          if ( a4 - *(_QWORD *)(v26 + 68) >= v29 && a4 - *((_QWORD *)a5 + 9) < v29 )
            *(_DWORD *)v26 = v27 & 0xFFFFFFFE;
        }
        v26 += 400;
        --v11;
      }
      while ( v11 );
      CPTPEngine::SetContactRestingState(this, a5, 0);
    }
LABEL_50:
    if ( *((_DWORD *)this + 911) == 1 )
    {
      v30 = (CPTPEngine *)((char *)this + 1208);
      for ( j = (CPTPEngine *)((char *)this + 3608); v30 != j; v30 = (struct CContactState *)((char *)v30 + 400) )
      {
        v32 = *(_DWORD *)v30;
        if ( (*(_DWORD *)v30 & 1) != 0 && v30 != a5 && ((v32 & 0x80u) != 0 || (*(_DWORD *)a5 & 0x80u) != 0) )
        {
          v33 = *((_QWORD *)v30 + 9);
          v34 = *((_QWORD *)a5 + 9);
          v35 = v33 - v34;
          if ( v33 <= v34 )
            v35 = *((_QWORD *)a5 + 9) - v33;
          if ( v35 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 99) / 0x3E8 )
          {
            v36 = *((_DWORD *)this + 969);
            if ( *((_DWORD *)a5 + 5) >= v36
              && *((_DWORD *)v30 + 5) >= v36
              && (*((_DWORD *)a5 + 1) & 1) != 0
              && (*((_DWORD *)v30 + 1) & 1) != 0
              && _bittest((const signed __int32 *)a5, 0x13u)
              && (v32 & 0x80000) != 0
              && (int)((HIDWORD(*((_QWORD *)a5 + 2)) - HIDWORD(*((_QWORD *)v30 + 2)))
                     * (HIDWORD(*((_QWORD *)a5 + 2)) - HIDWORD(*((_QWORD *)v30 + 2)))
                     + (*((_QWORD *)a5 + 2) - *((_QWORD *)v30 + 2)) * (*((_QWORD *)a5 + 2) - *((_QWORD *)v30 + 2))) <= (unsigned __int64)*((unsigned int *)this + 85) )
            {
              CPTPEngine::SetContactRestingState(this, a5, 0);
              CPTPEngine::SetContactRestingState(v37, v38, 0);
              *(_DWORD *)a5 |= 0x200u;
              *(_DWORD *)v30 |= 0x200u;
            }
          }
        }
      }
    }
  }
}
