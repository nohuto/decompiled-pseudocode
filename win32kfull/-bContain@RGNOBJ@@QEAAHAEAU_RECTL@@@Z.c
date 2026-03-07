_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct _RECTL *a2)
{
  _DWORD *v2; // r8

  v2 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 56LL) <= a2->left
      && v2[16] >= a2->right
      && v2[15] <= a2->top
      && v2[17] >= a2->bottom;
}
