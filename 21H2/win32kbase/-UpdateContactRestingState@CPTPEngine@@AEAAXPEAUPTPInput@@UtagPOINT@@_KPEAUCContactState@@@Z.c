/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01C8F84
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C01C9474 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C006FD0C (PtInRect.c)
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01C3750 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01C89A8 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        __int64 a4,
        struct CContactState *a5)
{
  __int64 v6; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r12
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r8
  int v13; // r14d
  bool v14; // cl
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  LONG v17; // r15d
  int v18; // ebp
  const struct CContactState *v19; // r9
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int i; // r8d
  struct CContactState *v25; // rax
  int v26; // r9d
  struct CContactState *v27; // rcx
  int v28; // r9d
  unsigned __int64 v29; // r8
  struct CContactState *v30; // r10
  struct CContactState *j; // r11
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rax
  CPTPEngine *v37; // rcx
  struct CContactState *v38; // r10
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v6 = a4;
  v8 = a4 - *((_QWORD *)a5 + 11);
  v9 = *((_QWORD *)a5 + 8);
  v10 = *(_DWORD *)a5;
  v11 = 6LL;
  v12 = a4 - v9;
  v13 = -__CFSHR__(*(_DWORD *)a5, 8);
  v14 = *((_DWORD *)this + 887) == 6 && !__CFSHR__(*(_DWORD *)a5, 8);
  if ( (v10 & 0x200) == 0 && !v14 )
  {
    if ( (v10 & 0x100) == 0 && v12 && !*((_DWORD *)a5 + 35) )
      *(_DWORD *)a5 = v10 | 0x100;
    v15 = *((_QWORD *)this + 12) * (*((_DWORD *)this + 44) / 0xAu);
    v16 = v15 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    if ( v8 >= v15 / 0x3E8 || !v12 )
    {
      v17 = *((_DWORD *)this + 943);
      BYTE8(v16) = a3.y >= v17 || !PtInRect((_DWORD *)this + 12, *(_QWORD *)&a3);
      if ( v12 )
      {
        v18 = 0;
        if ( *((_DWORD *)this + 887) == 2
          && v13
          && (v19 = (CPTPEngine *)((char *)this + 392 * *((unsigned int *)this + 878) + 1160), a5 != v19)
          && (*(_DWORD *)v19 & 0x80u) == 0
          && (BYTE8(v16) || v9 < *((_QWORD *)v19 + 12)) )
        {
          v20 = CPTPEngine::AreTheseTwoContactsAPan(this, *((const struct PTPInput **)&v16 + 1), a5, v19);
          v21 = 1;
          if ( !v20 )
            v18 = 1;
        }
        else
        {
          v21 = 1;
        }
        if ( y >= v17 || !PtInRect((_DWORD *)this + 12, *(_QWORD *)&a3) && v13 || v9 <= *((_QWORD *)this + 456) )
        {
          v22 = (*(_DWORD *)a5 & 0x100) != 0 ? *((unsigned int *)a5 + 35) : 0LL;
          if ( (int)((HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   * (HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   + (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x) * (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x)) <= (unsigned __int64)*((unsigned int *)this + 43) )
            v18 = v21;
        }
      }
      else
      {
        v18 = BYTE8(v16);
      }
      CPTPEngine::SetContactRestingState(this, a5, v18);
      *(struct tagPOINT *)((char *)a5 + 8 * *((unsigned int *)a5 + 35) + 148) = a3;
      v23 = *((_DWORD *)a5 + 35) + 1;
      *((_QWORD *)a5 + 11) = v6;
      *((_DWORD *)a5 + 35) = v23 % 0xA;
    }
  }
  if ( *((_DWORD *)this + 887) == 1 && v13 && (*(_DWORD *)a5 & 4) != 0 && *(int *)a5 < 0 )
  {
    for ( i = 0; i < 6; ++i )
    {
      v25 = (CPTPEngine *)((char *)this + 392 * i + 1160);
      if ( a5 != v25 )
      {
        v26 = *(_DWORD *)v25;
        if ( (*(_DWORD *)v25 & 1) != 0
          && ((v26 & 0x80u) == 0
           || v6 - *((_QWORD *)v25 + 8) < *((_QWORD *)this + 12)
                                        * (unsigned __int64)*((unsigned int *)this + 44)
                                        / 0x3E8
           && __CFSHR__(v26, 3)
           && v26 < 0) )
        {
          goto LABEL_61;
        }
      }
    }
    v27 = (CPTPEngine *)((char *)this + 1160);
    do
    {
      if ( a5 != v27 && (*(_DWORD *)v27 & 1) != 0 )
      {
        v28 = *(_DWORD *)v27 & 0x7FFFFFFF;
        *(_DWORD *)v27 = v28;
        v29 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 44) / 0x3E8;
        if ( v6 - *((_QWORD *)v27 + 8) >= v29 && v6 - *((_QWORD *)a5 + 8) < v29 )
          *(_DWORD *)v27 = v28 & 0xBFFFFFFF;
      }
      v27 = (struct CContactState *)((char *)v27 + 392);
      --v11;
    }
    while ( v11 );
    CPTPEngine::SetContactRestingState(this, a5, 0);
  }
LABEL_61:
  *((_DWORD *)this + 959) &= ~1u;
  if ( *((_DWORD *)this + 887) == 1 )
  {
    v30 = (CPTPEngine *)((char *)this + 1160);
    for ( j = (CPTPEngine *)((char *)this + 3512); v30 != j; v30 = (struct CContactState *)((char *)v30 + 392) )
    {
      if ( (*(_DWORD *)v30 & 1) != 0 && v30 != a5 && ((*(_DWORD *)v30 & 0x80u) != 0 || (*(_DWORD *)a5 & 0x80u) != 0) )
      {
        v32 = *((_QWORD *)v30 + 8);
        v33 = *((_QWORD *)a5 + 8);
        v34 = v32 - v33;
        if ( v32 <= v33 )
          v34 = *((_QWORD *)a5 + 8) - v32;
        if ( v34 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 87) / 0x3E8 )
        {
          *((_DWORD *)this + 959) |= 1u;
          v35 = *((_DWORD *)this + 943);
          if ( *((_DWORD *)a5 + 3) >= v35
            && *((_DWORD *)v30 + 3) >= v35
            && (*(_DWORD *)a5 & 0x40000000) != 0
            && (*(_DWORD *)v30 & 0x40000000) != 0
            && (*(_DWORD *)a5 & 0x20000) != 0
            && (*(_DWORD *)v30 & 0x20000) != 0 )
          {
            v36 = *((_QWORD *)v30 + 1);
            if ( (int)((*((_QWORD *)a5 + 1) - v36) * (*((_QWORD *)a5 + 1) - v36)
                     + (HIDWORD(*((_QWORD *)a5 + 1)) - HIDWORD(v36)) * (HIDWORD(*((_QWORD *)a5 + 1)) - HIDWORD(v36))) <= (unsigned __int64)*((unsigned int *)this + 73) )
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
