void __fastcall DXGPRESENT::XformRect(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6)
{
  LONG v8; // r11d
  LONG v9; // r10d
  LONG v10; // r8d
  LONG v11; // ecx
  LONG v12; // r11d
  LONG v13; // eax
  LONG v14; // r8d
  LONG v15; // ecx

  v8 = a5 * (a4->left - a2->left);
  a3->left = v8;
  v9 = a5 * (a4->right - a2->left);
  a3->right = v9;
  v10 = a6 * (a4->top - a2->top);
  a3->top = v10;
  v11 = a6 * (a4->bottom - a2->top);
  a3->bottom = v11;
  v12 = a1->left + ((unsigned int)(v8 + 0x8000) >> 16);
  a3->left = v12;
  v13 = a1->left + ((unsigned int)(v9 + 0x8000) >> 16);
  a3->right = v13;
  v14 = a1->top + ((unsigned int)(v10 + 0x8000) >> 16);
  a3->top = v14;
  v15 = a1->top + ((unsigned int)(v11 + 0x8000) >> 16);
  a3->bottom = v15;
  if ( v12 == v13 )
  {
    if ( v13 == a1->right )
      a3->left = v12 - 1;
    else
      a3->right = v13 + 1;
  }
  if ( v14 == v15 )
  {
    if ( v15 == a1->bottom )
      a3->top = v14 - 1;
    else
      a3->bottom = v15 + 1;
  }
}
