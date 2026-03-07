void __fastcall RGNCOREOBJ::vSet(struct _RECTL **this, const struct _RECTL *const a2)
{
  struct _RECTL *v2; // r10
  bool v3; // zf
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  _DWORD *v6; // r8
  struct _RECTL *v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // r8
  char *v10; // r8

  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v7 = *this;
    v8 = *(_QWORD *)&v7->right;
    v7[1].right = 16;
    v7[1].bottom = 1;
    v7[2] = 0LL;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0x80000000;
    *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)&v7[1].left = v8 + 16;
  }
  else
  {
    v2 = *this;
    v3 = (*this)[1].right == 56;
    v4 = *(_DWORD **)&(*this)->right;
    (*this)[2] = *a2;
    if ( v3 )
    {
      v4[2] = a2->top;
      v5 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      v5[1] = a2->top;
      v5[2] = a2->bottom;
      v5[3] = a2->left;
      v5[4] = a2->right;
      v6 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      v6[1] = a2->bottom;
      *(_QWORD *)&v2[1].left = (char *)v6 + (unsigned int)(4 * *v6 + 16);
    }
    else
    {
      v2[1].right = 56;
      v2[1].bottom = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v9 = v4 + 4;
      *v9 = 2;
      v9[1] = a2->top;
      v9[2] = a2->bottom;
      v9[3] = a2->left;
      v9[4] = a2->right;
      v9[5] = 2;
      v10 = (char *)v9 + (unsigned int)(4 * *v9 + 16);
      *(_DWORD *)v10 = 0;
      *((_DWORD *)v10 + 1) = a2->bottom;
      *((_QWORD *)v10 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)&v2[1].left = v10 + 16;
    }
  }
}
