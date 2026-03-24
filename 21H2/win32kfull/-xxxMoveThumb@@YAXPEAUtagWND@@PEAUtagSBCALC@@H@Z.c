/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244E34
 * Callers:
 *     xxxTrackThumb @ 0x1C0246CB0 (xxxTrackThumb.c)
 * Callees:
 *     DrawThumb2 @ 0x1C0158244 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01583CC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0244A80 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  __int64 v6; // rbx
  int i; // r8d
  int v8; // r9d
  INT v9; // r10d
  int v10; // r11d
  struct tagWND *v11; // rdx
  __int64 DCEx; // rax
  int v13; // edx
  HDC v14; // rbx
  HBRUSH ColorObjects; // r15
  __int64 v16; // r12
  _DWORD *v17; // r14

  v3 = a3;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 && a3 != *(_DWORD *)(v6 + 76) )
  {
    for ( i = *((_DWORD *)a2 + 15); ; v3 = i + *((_DWORD *)a2 + 14) )
    {
      if ( v3 >= i )
      {
        v9 = *((_DWORD *)a2 + 14);
        if ( v3 < v9 + i )
        {
          v10 = *(_DWORD *)a2;
          v8 = v9
             ? *(_DWORD *)a2
             + EngMulDiv(
                 *((_DWORD *)a2 + 1) - (*((_DWORD *)a2 + 2) != 0 ? *((_DWORD *)a2 + 2) - 1 : 0) - v10,
                 v3 - i,
                 v9)
             : v10 - 1;
        }
        else
        {
          v8 = *((_DWORD *)a2 + 1) - (*((_DWORD *)a2 + 2) != 0 ? *((_DWORD *)a2 + 2) - 1 : 0);
        }
      }
      else
      {
        v8 = *(_DWORD *)a2;
      }
      *(_DWORD *)(v6 + 84) = v8;
      if ( v8 == *(_DWORD *)(v6 + 80) )
        break;
      v11 = *(struct tagWND **)(v6 + 24);
      if ( v11 )
        xxxDoScroll(*(struct _LARGE_STRING ***)(v6 + 16), v11, 5u, v8, (*(_DWORD *)v6 >> 1) & 1);
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
      if ( !v6 || !*(_QWORD *)(v6 + 48) )
        return;
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 84);
      i = *((_DWORD *)a2 + 15);
      if ( v3 < i + *((_DWORD *)a2 + 14) )
        break;
    }
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
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
