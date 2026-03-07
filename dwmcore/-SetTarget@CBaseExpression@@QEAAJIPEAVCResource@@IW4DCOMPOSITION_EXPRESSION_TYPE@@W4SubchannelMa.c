__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        struct CResource *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  unsigned int v8; // ebp
  struct CWeakResourceReference *v9; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  struct CWeakResourceReference *v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  void *v22; // rcx
  _BYTE *v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // r9d
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  int v32; // eax
  unsigned int v33; // [rsp+20h] [rbp-38h]
  struct CWeakResourceReference *v34; // [rsp+70h] [rbp+18h] BYREF

  v8 = a7;
  v9 = 0LL;
  v34 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 216) & 2) != 0 )
    {
      v27 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v16 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x88u, 0LL);
        return v16;
      }
    }
    else
    {
      v25 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v16 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x8Cu, 0LL);
        return v16;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    v14 = CWeakReference<CResource>::Create(a3, &v34);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x94u, 0LL);
      v9 = v34;
      goto LABEL_19;
    }
    v9 = v34;
  }
  v17 = *(struct CWeakResourceReference **)(a1 + 184);
  if ( v17 )
  {
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v17 + 8LL))(v17);
    *(_QWORD *)(a1 + 184) = 0LL;
    v17 = 0LL;
  }
  if ( v9 && *((_QWORD *)v9 + 2) )
  {
    *(_QWORD *)(a1 + 184) = v9;
    v17 = v9;
    v9 = 0LL;
  }
  v18 = *(_BYTE *)(a1 + 216);
  v19 = -(__int64)v17;
  *(_DWORD *)(a1 + 192) = a4;
  LOBYTE(v19) = v18 & 0xFD | (v19 != 0 ? 2 : 0);
  v20 = *(_DWORD *)(a1 + 176);
  *(_BYTE *)(a1 + 216) = v19;
  if ( v20 )
  {
    if ( v20 != a2 )
    {
      v16 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x305u, 0LL);
      v33 = 162;
      goto LABEL_36;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 176) = a2;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 296LL))(a1, a5);
  v16 = v21;
  if ( v21 < 0 )
  {
    v33 = 163;
LABEL_47:
    v29 = v21;
    goto LABEL_48;
  }
  v22 = *(void **)(a1 + 200);
  if ( v22 )
  {
    operator delete(v22, 8uLL);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  if ( !(_BYTE)v8 )
  {
LABEL_16:
    if ( (*(_BYTE *)(a1 + 232) & 0x10) != 0
      || (v21 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1), v16 = v21, v21 >= 0) )
    {
      v16 = 0;
      goto LABEL_19;
    }
    v33 = 190;
    goto LABEL_47;
  }
  if ( a6 == 1 )
  {
    v24 = operator new(0xCuLL);
    if ( v24 )
    {
      *(_DWORD *)v24 = 1;
      v24[4] = (unsigned __int8)v8 < 5u ? v8 : 0;
      v24[8] = a8;
    }
    *(_QWORD *)(a1 + 200) = v24;
    goto LABEL_16;
  }
  if ( a6 == 2 )
  {
    v30 = operator new(0x10uLL);
    v31 = v30;
    if ( v30 )
    {
      *v30 = 2;
      if ( (unsigned __int8)v8 > 0x10u || (v32 = 65631, !_bittest(&v32, v8)) )
        LOBYTE(v8) = 0;
      *((_QWORD *)v31 + 1) = a8;
      *((_BYTE *)v31 + 4) = v8;
    }
    else
    {
      v31 = 0LL;
    }
    *(_QWORD *)(a1 + 200) = v31;
    goto LABEL_16;
  }
  v16 = -2147467259;
  v33 = 184;
LABEL_36:
  v29 = v16;
LABEL_48:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v29, v33, 0LL);
LABEL_19:
  if ( v9 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v9 + 8LL))(v9);
  return v16;
}
