void __fastcall EXFORMOBJ::vOrder(float **this, struct _RECTL *a2)
{
  float v2; // xmm1_4
  LONG *p_right; // rax
  LONG left; // r8d
  LONG v5; // r9d
  float v6; // xmm1_4
  LONG *p_bottom; // rax
  LONG *p_top; // rdx
  LONG v9; // ecx
  LONG v10; // r8d

  v2 = **this;
  p_right = &a2->right;
  if ( v2 < 0.0 )
  {
    left = a2->left;
    v5 = *p_right;
    if ( a2->left < *p_right )
      goto LABEL_10;
    if ( v2 < 0.0 )
      goto LABEL_3;
  }
  left = a2->left;
  v5 = *p_right;
  if ( a2->left > *p_right )
  {
LABEL_10:
    a2->left = v5;
    *p_right = left;
  }
LABEL_3:
  v6 = (*this)[3];
  p_bottom = &a2->bottom;
  p_top = &a2->top;
  if ( v6 >= 0.0 )
    goto LABEL_4;
  v9 = *p_top;
  v10 = *p_bottom;
  if ( *p_top < *p_bottom )
    goto LABEL_11;
  if ( v6 >= 0.0 )
  {
LABEL_4:
    v9 = *p_top;
    v10 = *p_bottom;
    if ( *p_top <= *p_bottom )
      return;
LABEL_11:
    *p_top = v10;
    *p_bottom = v9;
  }
}
