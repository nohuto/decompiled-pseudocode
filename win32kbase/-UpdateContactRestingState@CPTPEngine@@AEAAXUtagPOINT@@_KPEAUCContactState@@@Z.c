void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct tagPOINT a2,
        __int64 a3,
        struct CContactState *a4)
{
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // r14d
  bool v14; // dl
  __int64 v15; // r11
  int v16; // ebp
  struct CContactState *v17; // r8
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int i; // r8d
  struct CContactState *v21; // r9
  int v22; // r10d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  char *v25; // r8
  unsigned int v26; // r9d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  struct CContactState *v29; // r10
  struct CContactState *j; // r11
  int v31; // r9d
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  int v35; // eax
  CPTPEngine *v36; // rcx
  struct CContactState *v37; // r10
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v8 = a3 - *((_QWORD *)a4 + 12);
  v9 = *((_QWORD *)a4 + 9);
  v10 = *(_DWORD *)a4;
  v11 = 6LL;
  v12 = a3 - v9;
  v13 = -__CFSHR__(*(_DWORD *)a4, 8);
  v14 = *((_DWORD *)this + 911) == 6 && !__CFSHR__(*(_DWORD *)a4, 8);
  v15 = 0x624DD2F1A9FBE77LL;
  if ( (v10 & 0x200) == 0 && !v14 )
  {
    if ( (v10 & 0x100) != 0 )
    {
      if ( v12 )
      {
LABEL_11:
        if ( 10 * v8 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 56) / 0x3E8 )
          goto LABEL_28;
        v16 = 0;
        if ( *((_DWORD *)this + 911) == 2 )
        {
          if ( v13 )
          {
            v17 = (CPTPEngine *)((char *)this + 400 * *((unsigned int *)this + 902) + 1208);
            if ( a4 != v17
              && (*(_DWORD *)v17 & 0x80u) == 0
              && (a2.y >= *((_DWORD *)this + 969) || v9 < *((_QWORD *)v17 + 13))
              && !(unsigned int)CPTPEngine::AreTheseTwoContactsAPan(this, a4, v17) )
            {
              v16 = 1;
            }
          }
        }
        if ( (*(_DWORD *)a4 & 0x100) != 0 )
          v18 = *((unsigned int *)a4 + 37);
        else
          v18 = 0LL;
        if ( (int)((*(_QWORD *)((char *)a4 + 8 * v18 + 156) - a2.x) * (*(_QWORD *)((char *)a4 + 8 * v18 + 156) - a2.x)
                 + (HIDWORD(*(_QWORD *)((char *)a4 + 8 * v18 + 156)) - y)
                 * (HIDWORD(*(_QWORD *)((char *)a4 + 8 * v18 + 156)) - y)) <= (unsigned __int64)*((unsigned int *)this
                                                                                                + 55) )
          v16 = 1;
        goto LABEL_27;
      }
    }
    else if ( v12 )
    {
      if ( !*((_DWORD *)a4 + 37) )
        *(_DWORD *)a4 = v10 | 0x100;
      goto LABEL_11;
    }
    v16 = 1;
LABEL_27:
    CPTPEngine::SetContactRestingState(this, a4, v16);
    *(struct tagPOINT *)((char *)a4 + 8 * *((unsigned int *)a4 + 37) + 156) = a2;
    v19 = *((_DWORD *)a4 + 37) + 1;
    *((_QWORD *)a4 + 12) = a3;
    *((_DWORD *)a4 + 37) = v19 % 0xA;
  }
LABEL_28:
  if ( *((_DWORD *)this + 911) == 1 )
  {
    if ( v13 && (*(_DWORD *)a4 & 4) != 0 && (*((_DWORD *)a4 + 1) & 2) != 0 )
    {
      for ( i = 0; i < 6; ++i )
      {
        v21 = (CPTPEngine *)((char *)this + 400 * i + 1208);
        if ( a4 != v21 )
        {
          v22 = *(_DWORD *)v21;
          if ( (*(_DWORD *)v21 & 1) != 0 )
          {
            v23 = *((_QWORD *)this + 12) * *((unsigned int *)this + 56);
            v24 = (unsigned __int64)(((v23 * (unsigned __int128)(unsigned __int64)v15) >> 64)
                                   + ((unsigned __int64)(v23 - ((v23 * (unsigned __int128)(unsigned __int64)v15) >> 64)) >> 1)) >> 9;
            if ( (v22 & 0x80u) == 0
              || __CFSHR__(v22, 17)
              || a3 - *((_QWORD *)v21 + 9) < v24 && __CFSHR__(v22, 3) && __CFSHR__(*((_DWORD *)v21 + 1), 2) )
            {
              goto LABEL_50;
            }
          }
        }
        v15 = 0x624DD2F1A9FBE77LL;
      }
      v25 = (char *)this + 1212;
      do
      {
        if ( a4 != (struct CContactState *)(v25 - 4) && (*((_DWORD *)v25 - 1) & 1) != 0 )
        {
          v26 = *(_DWORD *)v25 & 0xFFFFFFFD;
          *(_DWORD *)v25 = v26;
          v27 = *((_QWORD *)this + 12) * *((unsigned int *)this + 56);
          v28 = (unsigned __int64)(((v27 * (unsigned __int128)(unsigned __int64)v15) >> 64)
                                 + ((unsigned __int64)(v27 - ((v27 * (unsigned __int128)(unsigned __int64)v15) >> 64)) >> 1)) >> 9;
          if ( a3 - *(_QWORD *)(v25 + 68) >= v28 && a3 - *((_QWORD *)a4 + 9) < v28 )
            *(_DWORD *)v25 = v26 & 0xFFFFFFFE;
        }
        v25 += 400;
        --v11;
      }
      while ( v11 );
      CPTPEngine::SetContactRestingState(this, a4, 0);
    }
LABEL_50:
    if ( *((_DWORD *)this + 911) == 1 )
    {
      v29 = (CPTPEngine *)((char *)this + 1208);
      for ( j = (CPTPEngine *)((char *)this + 3608); v29 != j; v29 = (struct CContactState *)((char *)v29 + 400) )
      {
        v31 = *(_DWORD *)v29;
        if ( (*(_DWORD *)v29 & 1) != 0 && v29 != a4 && ((v31 & 0x80u) != 0 || (*(_DWORD *)a4 & 0x80u) != 0) )
        {
          v32 = *((_QWORD *)v29 + 9);
          v33 = *((_QWORD *)a4 + 9);
          v34 = v32 - v33;
          if ( v32 <= v33 )
            v34 = *((_QWORD *)a4 + 9) - v32;
          if ( v34 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 99) / 0x3E8 )
          {
            v35 = *((_DWORD *)this + 969);
            if ( *((_DWORD *)a4 + 5) >= v35
              && *((_DWORD *)v29 + 5) >= v35
              && (*((_DWORD *)a4 + 1) & 1) != 0
              && (*((_DWORD *)v29 + 1) & 1) != 0
              && _bittest((const signed __int32 *)a4, 0x13u)
              && (v31 & 0x80000) != 0
              && (int)((HIDWORD(*((_QWORD *)a4 + 2)) - HIDWORD(*((_QWORD *)v29 + 2)))
                     * (HIDWORD(*((_QWORD *)a4 + 2)) - HIDWORD(*((_QWORD *)v29 + 2)))
                     + (*((_QWORD *)a4 + 2) - *((_QWORD *)v29 + 2)) * (*((_QWORD *)a4 + 2) - *((_QWORD *)v29 + 2))) <= (unsigned __int64)*((unsigned int *)this + 85) )
            {
              CPTPEngine::SetContactRestingState(this, a4, 0);
              CPTPEngine::SetContactRestingState(v36, v37, 0);
              *(_DWORD *)a4 |= 0x200u;
              *(_DWORD *)v29 |= 0x200u;
            }
          }
        }
      }
    }
  }
}
