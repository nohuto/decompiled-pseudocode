__int64 __fastcall CPTPEngine::ApplyElasticDragModeDeltas(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINTER_INFO *a3,
        struct tagPOINT *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // r10
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax

  v4 = *((_QWORD *)a3 + 5);
  v6 = 0;
  v8 = *((_DWORD *)this + 45);
  v9 = *((_DWORD *)this + 44)
     / 0xAu
     * ((unsigned __int64)(1000LL * (*((_QWORD *)a3 + 10) - *((_QWORD *)a2 + 11)))
      / *((_QWORD *)this + 12));
  if ( (int)v4 <= v8 )
  {
    v10 = *((_DWORD *)this + 45);
    v11 = *((_DWORD *)a2 + 36);
    if ( (v11 & 2) == 0 && *((_DWORD *)a2 + 8) > v8 )
    {
      v11 |= 2u;
      *((_DWORD *)a2 + 36) = v11;
      v10 = *((_DWORD *)this + 45);
    }
    v8 = v10;
    if ( (v11 & 2) != 0 )
    {
      a4->x -= v9;
      v6 = 1;
    }
  }
  v12 = *((_DWORD *)this + 10) - v8;
  if ( (int)v4 >= v12 )
  {
    v13 = *((_DWORD *)a2 + 36);
    if ( (v13 & 1) == 0 && *((_DWORD *)a2 + 8) < v12 )
    {
      v13 |= 1u;
      *((_DWORD *)a2 + 36) = v13;
    }
    if ( (v13 & 1) != 0 )
    {
      a4->x += v9;
      v6 = 1;
    }
  }
  v14 = *((_DWORD *)this + 46);
  v15 = HIDWORD(v4);
  if ( (int)v15 <= v14 )
  {
    v16 = *((_DWORD *)this + 46);
    v17 = *((_DWORD *)a2 + 36);
    if ( (v17 & 4) == 0 && *((_DWORD *)a2 + 9) > v14 )
    {
      v17 |= 4u;
      *((_DWORD *)a2 + 36) = v17;
      v16 = *((_DWORD *)this + 46);
    }
    v14 = v16;
    if ( (v17 & 4) != 0 )
    {
      a4->y -= v9;
      v6 = 1;
    }
  }
  v18 = *((_DWORD *)this + 11) - v14;
  if ( (int)v15 >= v18 )
  {
    v19 = *((_DWORD *)a2 + 36);
    if ( (v19 & 8) == 0 && *((_DWORD *)a2 + 9) < v18 )
    {
      v19 |= 8u;
      *((_DWORD *)a2 + 36) = v19;
    }
    if ( (v19 & 8) != 0 )
    {
      a4->y += v9;
      return 1;
    }
  }
  return v6;
}
