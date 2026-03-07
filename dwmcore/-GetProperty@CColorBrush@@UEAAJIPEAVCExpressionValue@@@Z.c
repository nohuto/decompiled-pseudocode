__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v4; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *const *v5; // rcx
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = &CColorBrush::k_rgAnimDef;
  while ( 1 )
  {
    v6 = *v5;
    if ( a2 == **(_DWORD **)v5 )
      break;
    if ( ++v5 == &CComponentTransform3D::k_rgAnimDef )
      goto LABEL_11;
  }
  if ( !v6 )
  {
LABEL_11:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024809, 0x21u, 0LL);
    return v4;
  }
  v7 = *((_DWORD *)v6 + 1);
  v8 = *((_QWORD *)v6 + 1);
  if ( v7 <= 69 )
  {
    if ( v7 == 69 )
    {
      *((_DWORD *)a3 + 18) = 69;
      goto LABEL_7;
    }
    v11 = v7 - 17;
    if ( !v11 )
    {
      *(_BYTE *)a3 = *((_BYTE *)this + v8);
      *((_DWORD *)a3 + 18) = 17;
      goto LABEL_8;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
      *((_DWORD *)a3 + 18) = 18;
      goto LABEL_8;
    }
    v13 = v12 - 17;
    if ( !v13 )
    {
      *((_DWORD *)a3 + 18) = 35;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
      goto LABEL_8;
    }
    v14 = v13 - 7;
    if ( !v14 )
    {
      *((_DWORD *)a3 + 18) = 42;
      *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
      goto LABEL_8;
    }
    if ( v14 == 10 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
      goto LABEL_8;
    }
LABEL_28:
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  }
  v9 = v7 - 70;
  if ( v9 )
  {
    v15 = v9 - 1;
    if ( !v15 )
    {
      *((_DWORD *)a3 + 18) = 71;
      goto LABEL_7;
    }
    v16 = v15 - 33;
    if ( !v16 )
    {
      *((_DWORD *)a3 + 18) = 104;
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
      *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
      goto LABEL_8;
    }
    if ( v16 == 161 )
    {
      *((_DWORD *)a3 + 18) = 265;
      *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
      *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
      *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
      goto LABEL_8;
    }
    goto LABEL_28;
  }
  *((_DWORD *)a3 + 18) = 70;
LABEL_7:
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
LABEL_8:
  *((_BYTE *)a3 + 76) = 1;
  return v4;
}
