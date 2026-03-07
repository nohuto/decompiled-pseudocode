__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  const unsigned int *v4; // r9
  _DWORD *v5; // rax
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rdx
  float v9; // xmm0_4
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 4 )
  {
    v9 = *((float *)this + 48) * 57.295776;
LABEL_11:
    *(float *)a3 = v9;
    *((_DWORD *)a3 + 18) = 18;
  }
  else
  {
    v4 = (const unsigned int *)&CComponentTransform2D::k_rgAnimDef;
    while ( 1 )
    {
      v5 = *(_DWORD **)v4;
      if ( a2 == **(_DWORD **)v4 )
        break;
      v4 += 2;
      if ( v4 == &CProjectedShadowReceiver::`vftable' )
        goto LABEL_5;
    }
    if ( !v5 )
    {
LABEL_5:
      MilInstrumentationCheckHR_MaybeFailFast(
        (unsigned int)&CProjectedShadowReceiver::`vftable',
        0LL,
        0,
        -2147024809,
        0x6Fu,
        0LL);
      return 2147942487LL;
    }
    v7 = v5[1];
    v8 = *((_QWORD *)v5 + 1);
    if ( v7 != 35 )
    {
      switch ( v7 )
      {
        case 17:
          *(_BYTE *)a3 = *((_BYTE *)this + v8);
          *((_DWORD *)a3 + 18) = 17;
          goto LABEL_9;
        case 18:
          v9 = *(float *)((char *)this + v8);
          goto LABEL_11;
        case 42:
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
          goto LABEL_9;
        case 52:
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
          goto LABEL_9;
        case 69:
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 70:
          *((_DWORD *)a3 + 18) = 70;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 71:
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 104:
          *((_DWORD *)a3 + 18) = 104;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
          *((_BYTE *)a3 + 76) = 1;
          return result;
        case 265:
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
          goto LABEL_9;
        default:
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
    }
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
  }
LABEL_9:
  *((_BYTE *)a3 + 76) = 1;
  return 0LL;
}
