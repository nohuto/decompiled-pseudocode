/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01FF0A8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0204A20 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  int v11; // eax
  bool v12; // r10
  int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r10d
  int v16; // r9d
  unsigned int v17; // r11d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax

  v4 = *((_DWORD *)this + 67);
  if ( (v4 & 0x10) == 0 || (v6 = *((_DWORD *)this + 984), (v6 & 0x2000) != 0) || (v6 & 0x1000000) != 0 )
  {
    v7 = 0;
    v12 = 0;
  }
  else
  {
    v7 = 0;
    v8 = (_DWORD *)((char *)this + 1208);
    v9 = 0;
    v10 = 6LL;
    do
    {
      if ( (*v8 & 1) != 0 )
      {
        v11 = v8[1];
        if ( (v11 & 1) != 0 || (v11 & 2) != 0 )
          ++v9;
      }
      v8 += 100;
      --v10;
    }
    while ( v10 );
    v12 = v9 == 1;
  }
  if ( *((_DWORD *)this + 910) && *((_QWORD *)a2 + 9) > *((_QWORD *)this + 468) )
    goto LABEL_21;
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x800000) == 0 )
    goto LABEL_24;
  if ( (v4 & 0x40) != 0 && (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 969) && (v13 & 0x400000) != 0 )
  {
    v14 = 284LL;
    v15 = *((_DWORD *)this + 73) * *((_DWORD *)this + 73);
    v16 = *((_DWORD *)this + 75) * *((_DWORD *)this + 75);
    v17 = *((_DWORD *)this + 76) * *((_DWORD *)this + 76);
    goto LABEL_26;
  }
  if ( !v12 )
    goto LABEL_24;
  if ( (v13 & 0x100000) != 0 )
  {
LABEL_21:
    v14 = 252LL;
    v15 = *((_DWORD *)this + 68) * *((_DWORD *)this + 68);
    v16 = *((_DWORD *)this + 70) * *((_DWORD *)this + 70);
    v17 = *((_DWORD *)this + 71) * *((_DWORD *)this + 71);
    goto LABEL_26;
  }
  if ( (v13 & 0x200000) != 0 )
  {
    v14 = 268LL;
    v15 = *((_DWORD *)this + 107) * *((_DWORD *)this + 107);
    v16 = *((_DWORD *)this + 108) * *((_DWORD *)this + 108);
  }
  else
  {
LABEL_24:
    v16 = *((_DWORD *)this + 53);
    v14 = 236LL;
    v15 = *((_DWORD *)this + 52);
  }
  v17 = v16;
LABEL_26:
  if ( (v4 & 1) != 0 )
  {
    LOBYTE(v7) = !PtInRect((struct CContactState *)((char *)a2 + v14), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v18 = *((_QWORD *)a2 + 3);
    else
      v18 = *((_QWORD *)a2 + 2);
    v19 = HIDWORD(v18);
    v20 = v18 - a3.x;
    if ( (int)v19 >= a3.y )
      v17 = v16;
    LOBYTE(v7) = v17 * (__int64)(v20 * v20) + (unsigned __int64)v15 * ((int)v19 - a3.y) * ((int)v19 - a3.y) >= v17 * (unsigned __int64)v15;
  }
  return v7;
}
