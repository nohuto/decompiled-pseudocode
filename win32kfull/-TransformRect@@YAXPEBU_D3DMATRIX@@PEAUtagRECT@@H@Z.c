void __fastcall TransformRect(const struct _D3DMATRIX *a1, struct tagRECT *a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // r9d
  int v6; // r11d

  v3 = (int)a1;
  TransformVector((_DWORD)a1, (_DWORD)a2, (_DWORD)a2 + 4, 0, a3);
  TransformVector(v3, v4 + 8, v4 + 12, v5, v6);
}
