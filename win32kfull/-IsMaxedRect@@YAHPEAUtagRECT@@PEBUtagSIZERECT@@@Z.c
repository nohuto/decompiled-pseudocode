_BOOL8 __fastcall IsMaxedRect(struct tagRECT *a1, const struct tagSIZERECT *a2)
{
  LONG top; // r8d
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)a2 <= a1->left )
  {
    top = a1->top;
    if ( *((_DWORD *)a2 + 1) <= top
      && *((_DWORD *)a2 + 2) >= a1->right - a1->left
      && *((_DWORD *)a2 + 3) >= a1->bottom - top )
    {
      return 1;
    }
  }
  return result;
}
