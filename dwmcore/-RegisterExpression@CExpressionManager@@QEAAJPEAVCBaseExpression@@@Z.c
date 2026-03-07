__int64 __fastcall CExpressionManager::RegisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  char *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int inserted; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  void *v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 SourceAnimationsForProperty; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r11
  unsigned int v23; // edx
  unsigned int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // rcx
  void *v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-18h]
  void *v30; // [rsp+40h] [rbp-10h]
  struct CBaseExpression *v31; // [rsp+68h] [rbp+18h] BYREF

  v31 = a2;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v4 = (char *)this + 32 * *((unsigned int *)this + 41);
  v5 = *((_DWORD *)v4 + 48);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v10 = -2147024362;
    goto LABEL_18;
  }
  if ( v6 <= *((_DWORD *)v4 + 47) )
  {
    *(_QWORD *)(*((_QWORD *)v4 + 21) + 8LL * v5) = a2;
    *((_DWORD *)v4 + 48) = v6;
    goto LABEL_4;
  }
  v16 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v4 + 168), 8u, (__int64)v4, &v31);
  v18 = v16;
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xC0u, 0LL);
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x50u, 0LL);
    goto LABEL_7;
  }
LABEL_4:
  v28 = *((_QWORD *)v31 + 23);
  v29 = *((_DWORD *)v31 + 48);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(
               this,
               (struct CTargetMapEntry *)&v28,
               v31,
               *((struct SubchannelMaskInfo **)v31 + 25));
  v9 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inserted, 0x5Bu, 0LL);
    v21 = DynArray<CBaseExpression *,1>::Find(
            (__int64)this + 32 * *((unsigned int *)this + 41) + 168,
            v20,
            (__int64 *)&v31);
    v23 = *(_DWORD *)(v22 + 192);
    v24 = v21;
    v10 = v9;
    if ( v21 < v23 )
    {
      v25 = *(_QWORD *)(v22 + 168);
      if ( v21 < v23 - 1 )
      {
        do
        {
          v26 = v24++;
          *(_QWORD *)(v25 + 8 * v26) = *(_QWORD *)(v25 + 8LL * v24);
          v23 = *(_DWORD *)(v22 + 192);
        }
        while ( v24 < v23 - 1 );
      }
      *(_DWORD *)(v22 + 192) = v23 - 1;
    }
  }
  else
  {
    if ( (*((_BYTE *)this + 448) & 4) == 0 )
    {
      v13 = *((_QWORD *)v31 + 23);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 16);
        if ( v14 )
        {
          SourceAnimationsForProperty = CResource::GetSourceAnimationsForProperty(v14, v29);
          if ( SourceAnimationsForProperty )
          {
            if ( *(_DWORD *)(SourceAnimationsForProperty + 24) )
              *((_BYTE *)this + 448) |= 4u;
          }
        }
      }
    }
    v10 = 0;
  }
LABEL_7:
  v11 = v30;
  while ( v11 )
  {
    v27 = v11;
    v11 = (void *)*((_QWORD *)v11 + 2);
    operator delete(v27, 0x18uLL);
  }
  return v10;
}
