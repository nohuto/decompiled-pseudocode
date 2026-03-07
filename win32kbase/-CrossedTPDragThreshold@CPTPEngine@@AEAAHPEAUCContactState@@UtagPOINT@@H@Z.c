__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  int v4; // esi
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rdx
  int v10; // r9d
  __int64 v11; // r10
  int v12; // eax
  CPTPEngine *v13; // r10
  char v14; // r11
  int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // r10d
  __int64 v18; // r9
  unsigned int v19; // r11d
  __int64 v20; // rax

  v4 = *((_DWORD *)this + 67);
  if ( (v4 & 0x10) == 0 || (v7 = *((_DWORD *)this + 984), (v7 & 0x2000) != 0) || (v7 & 0x1000000) != 0 )
  {
    v8 = 0;
    v13 = this;
  }
  else
  {
    v8 = 0;
    v9 = (_DWORD *)((char *)this + 1208);
    v10 = 0;
    v11 = 6LL;
    do
    {
      if ( (*v9 & 1) != 0 )
      {
        v12 = v9[1];
        if ( (v12 & 1) != 0 || (v12 & 2) != 0 )
          ++v10;
      }
      v9 += 100;
      --v11;
    }
    while ( v11 );
    v13 = this;
    if ( v10 == 1 )
    {
      v14 = 1;
      goto LABEL_14;
    }
  }
  v14 = 0;
LABEL_14:
  if ( *((_DWORD *)this + 910) && *((_QWORD *)a2 + 9) > *((_QWORD *)this + 468) )
    goto LABEL_25;
  v15 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x800000) == 0
    || (*((_DWORD *)v13 + 984) & 1) != 0 && *((_QWORD *)a2 + 9) <= *((_QWORD *)this + 468) )
  {
    goto LABEL_28;
  }
  if ( (v4 & 0x40) != 0 && (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 969) && (v15 & 0x400000) != 0 )
  {
    v16 = 284LL;
    v17 = *((_DWORD *)this + 73) * *((_DWORD *)this + 73);
    v18 = (unsigned int)(*((_DWORD *)this + 75) * *((_DWORD *)this + 75));
    v19 = *((_DWORD *)this + 76) * *((_DWORD *)this + 76);
    goto LABEL_30;
  }
  if ( !v14 )
    goto LABEL_28;
  if ( (v15 & 0x100000) != 0 )
  {
LABEL_25:
    v16 = 252LL;
    v17 = *((_DWORD *)this + 68) * *((_DWORD *)this + 68);
    v18 = (unsigned int)(*((_DWORD *)this + 70) * *((_DWORD *)this + 70));
    v19 = *((_DWORD *)this + 71) * *((_DWORD *)this + 71);
    goto LABEL_30;
  }
  if ( (v15 & 0x200000) != 0 )
  {
    v16 = 268LL;
    v17 = *((_DWORD *)this + 107) * *((_DWORD *)this + 107);
    v18 = (unsigned int)(*((_DWORD *)this + 108) * *((_DWORD *)this + 108));
  }
  else
  {
LABEL_28:
    v18 = *((unsigned int *)this + 53);
    v16 = 236LL;
    v17 = *((_DWORD *)this + 52);
  }
  v19 = v18;
LABEL_30:
  if ( (v4 & 1) != 0 )
  {
    LOBYTE(v8) = !PtInRect((struct CContactState *)((char *)a2 + v16), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v20 = *((_QWORD *)a2 + 3);
    else
      v20 = *((_QWORD *)a2 + 2);
    if ( SHIDWORD(v20) < a3.y )
      v18 = v19;
    LOBYTE(v8) = v18 * ((int)v20 - a3.x) * ((int)v20 - a3.x)
               + (unsigned __int64)v17 * (HIDWORD(v20) - a3.y) * (HIDWORD(v20) - a3.y) >= v18 * (unsigned __int64)v17;
  }
  return v8;
}
