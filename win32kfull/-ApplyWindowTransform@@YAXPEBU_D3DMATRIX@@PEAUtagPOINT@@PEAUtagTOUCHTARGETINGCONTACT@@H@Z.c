void __fastcall ApplyWindowTransform(const struct _D3DMATRIX *a1, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  LONG v4; // ebx

  v4 = 0;
  if ( a2 )
    TransformVector((_DWORD)a1, (_DWORD)a2, (_DWORD)a2 + 4, 0, a4);
  TransformVector((_DWORD)a1, (_DWORD)a3 + 32, (_DWORD)a3 + 36, 0, a4);
  TransformRect(a1, a3, a4);
  TransformRect(a1, a3 + 1, a4);
  TransformVector((_DWORD)a1, (_DWORD)a3 + 184, (_DWORD)a3 + 188, 0, a4 == 0);
  if ( a3[2].bottom > 0 )
  {
    do
    {
      TransformVector((_DWORD)a1, (_DWORD)a3 + 8 * (v4 + 6), (_DWORD)a3 + 8 * (v4 + 6) + 4, 0, a4);
      ++v4;
    }
    while ( v4 < a3[2].bottom );
  }
}
