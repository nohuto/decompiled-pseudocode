__int64 __fastcall CRegion::AddRect(CRegion *this, const struct tagRECT *a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  int v7; // ecx
  void *v8; // rbx
  int v9; // r9d
  struct _RECTL v10; // [rsp+30h] [rbp-10h] BYREF
  PVOID v11; // [rsp+78h] [rbp+38h] BYREF
  PVOID v12; // [rsp+80h] [rbp+40h] BYREF
  void *v13; // [rsp+88h] [rbp+48h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v8 = (void *)*((_QWORD *)this + 2);
  v13 = v8;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v12, 0x70u);
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v11, 0x70u);
  if ( v12 && v11 )
  {
    v10 = (struct _RECTL)*a2;
    RGNCOREOBJ::vSet((RGNCOREOBJ *)&v12, &v10);
    LOBYTE(v9) = 14;
    if ( (unsigned __int8)RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___(
                            (int)&v11,
                            (int)&v13,
                            (int)&v12,
                            v9,
                            (struct RGNCOREOBJ *)&v11) )
    {
      *((_QWORD *)this + 2) = v11;
      v11 = v8;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNCOREOBJ::vDeleteRGNCOREOBJ(&v11);
  RGNCOREOBJ::vDeleteRGNCOREOBJ(&v12);
  return v5;
}
