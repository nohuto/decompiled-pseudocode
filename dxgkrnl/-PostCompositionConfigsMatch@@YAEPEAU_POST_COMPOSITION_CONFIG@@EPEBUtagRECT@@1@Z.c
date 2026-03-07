bool __fastcall PostCompositionConfigsMatch(
        struct _POST_COMPOSITION_CONFIG *a1,
        char a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // r10

  v4 = 0;
  if ( !a2 )
    return *(_BYTE *)a1 == 0;
  if ( *((_DWORD *)a1 + 1) == a3->left
    && *((_DWORD *)a1 + 3) == a3->right
    && *((_DWORD *)a1 + 2) == a3->top
    && *((_DWORD *)a1 + 4) == a3->bottom
    && *((_DWORD *)a1 + 5) == a4->left
    && *((_DWORD *)a1 + 7) == a4->right
    && *((_DWORD *)a1 + 6) == a4->top )
  {
    return *((_DWORD *)a1 + 8) == a4->bottom;
  }
  return v4;
}
