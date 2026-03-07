void __fastcall CExpressionManager::UnregisterExpressionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  struct _RTL_GENERIC_TABLE *v6; // rbp
  __int64 Element; // rax
  _QWORD *v10; // rdx
  CTargetMapEntry *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 *v21; // r10
  unsigned int v22; // eax
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  v27 = a2;
  v6 = (struct _RTL_GENERIC_TABLE *)(a1 + 328);
  v25 = a3;
  v26 = a4;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(a1 + 328, &v25);
  v11 = (CTargetMapEntry *)Element;
  if ( Element )
  {
    v12 = *(_QWORD **)(Element + 16);
    v10 = v12;
    while ( v12 )
    {
      if ( v12[1] == a2 )
      {
        v13 = v12[2];
        if ( v12 == *((_QWORD **)v11 + 2) )
          *((_QWORD *)v11 + 2) = v13;
        else
          v10[2] = v13;
        operator delete(v12, 0x18uLL);
        break;
      }
      v10 = v12;
      v12 = (_QWORD *)v12[2];
    }
    if ( !*((_QWORD *)v11 + 2) )
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(v6, v11);
  }
  else
  {
    *(_BYTE *)(a2 + 216) &= ~2u;
  }
  if ( !a6 )
  {
    v14 = DynArray<CBaseExpression *,1>::Find(32LL * *(int *)(a1 + 164) + a1 + 168, v10, &v27);
    if ( v14 >= *(_DWORD *)(32 * (v17 + 6) + a1) )
    {
      v20 = DynArray<CBaseExpression *,1>::Find(a1 + 296, v15, &v27);
      if ( v20 >= *(_DWORD *)(a1 + 320) )
      {
LABEL_19:
        if ( (*(_BYTE *)(a1 + 448) & 1) != 0 )
        {
          v22 = DynArray<CBaseExpression *,1>::Find(32LL * (1 - *(_DWORD *)(a1 + 164)) + a1 + 168, v15, &v27);
          if ( v22 < *(_DWORD *)(32 * (v24 + 6) + a1) )
            *(_QWORD *)(*(_QWORD *)(v23 + a1 + 168) + 8LL * v22) = 0LL;
        }
        return;
      }
      v18 = v20;
      v19 = *v21;
    }
    else
    {
      v18 = v14;
      v19 = *(_QWORD *)(v16 + a1 + 168);
    }
    *(_QWORD *)(v19 + 8 * v18) = 0LL;
    goto LABEL_19;
  }
}
