void __fastcall CResource::GetPropertyImpl(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct CExpressionValue *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 1);
  if ( v3 > 69 )
  {
    v9 = v3 - 70;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 33;
        if ( !v11 )
        {
          *((_DWORD *)a3 + 18) = 104;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v4 + 16);
          goto LABEL_9;
        }
        if ( v11 == 161 )
        {
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v4 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v4 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v4 + 48);
          goto LABEL_9;
        }
LABEL_22:
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
      *((_DWORD *)a3 + 18) = 71;
    }
    else
    {
      *((_DWORD *)a3 + 18) = 70;
    }
LABEL_16:
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
    goto LABEL_9;
  }
  if ( v3 == 69 )
  {
    *((_DWORD *)a3 + 18) = 69;
    goto LABEL_16;
  }
  v5 = v3 - 17;
  if ( !v5 )
  {
    *(_BYTE *)a3 = *((_BYTE *)this + v4);
    *((_DWORD *)a3 + 18) = 17;
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
    *((_DWORD *)a3 + 18) = 18;
    goto LABEL_9;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
    goto LABEL_9;
  }
  v8 = v7 - 7;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 18) = 42;
    *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
    goto LABEL_9;
  }
  if ( v8 != 10 )
    goto LABEL_22;
  *((_DWORD *)a3 + 18) = 52;
  *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
  *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v4 + 8);
LABEL_9:
  *((_BYTE *)a3 + 76) = 1;
}
