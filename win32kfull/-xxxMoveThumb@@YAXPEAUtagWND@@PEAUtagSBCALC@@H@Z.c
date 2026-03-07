void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // r9
  INT v9; // r10d
  int v10; // r14d
  struct tagWND *v11; // rdx
  HWND DCEx; // rax
  int v13; // edx
  HDC v14; // rbx
  HBRUSH ColorObjects; // r15
  __int64 v16; // r12
  _DWORD *v17; // r14

  v3 = a3;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 && a3 != *(_DWORD *)(v6 + 76) )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)a2 + 15);
      if ( v3 >= v7 )
      {
        v9 = *((_DWORD *)a2 + 14);
        if ( v3 < v9 + v7 )
        {
          v10 = *(_DWORD *)a2;
          v8 = v9
             ? (unsigned int)(v10
                            + EngMulDiv(
                                *((_DWORD *)a2 + 1) - (*((_DWORD *)a2 + 2) != 0 ? *((_DWORD *)a2 + 2) - 1 : 0) - v10,
                                v3 - v7,
                                v9))
             : (unsigned int)(v10 - 1);
        }
        else
        {
          v8 = *((_DWORD *)a2 + 1) - ((*((_DWORD *)a2 + 2) - 1) & (unsigned int)-(*((_DWORD *)a2 + 2) != 0));
        }
      }
      else
      {
        v8 = *(unsigned int *)a2;
      }
      *(_DWORD *)(v6 + 84) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(v6 + 80) )
        break;
      v11 = *(struct tagWND **)(v6 + 24);
      if ( v11 )
        xxxDoScroll(*(struct tagWND **)(v6 + 16), v11, 5LL, v8, (*(_DWORD *)v6 >> 1) & 1);
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
      if ( !v6 || !*(_QWORD *)(v6 + 48) )
        return;
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 84);
      if ( v3 < *((_DWORD *)a2 + 14) + *((_DWORD *)a2 + 15) )
        break;
      v3 = *((_DWORD *)a2 + 14) + *((_DWORD *)a2 + 15);
    }
    DCEx = (HWND)_GetDCEx(a1, 0LL, 65537LL);
    v13 = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 13) = v3;
    *((_DWORD *)a2 + 12) = v3 + v13;
    v14 = (HDC)DCEx;
    ColorObjects = (HBRUSH)xxxGetColorObjects(a1, DCEx);
    v16 = GreSelectBrush(v14, ColorObjects);
    v17 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 720LL);
    if ( v17 )
    {
      DrawThumb2((__int64)a1, a2, v14, ColorObjects, (*v17 >> 1) & 1, 0);
      GreSelectBrush(v14, v16);
      _ReleaseDC(v14);
      v17[19] = v3;
    }
    else
    {
      _ReleaseDC(v14);
    }
  }
}
