void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this, char a2)
{
  struct CResource **v2; // rdi
  CBaseExpression *v4; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  CBaseExpression *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  void **v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+38h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  bool v18; // [rsp+80h] [rbp+20h] BYREF

  v2 = (struct CResource **)((char *)this + 464);
  v4 = (CBaseExpression *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = *((_QWORD *)this + 2);
      v7 = *(_QWORD *)(v6 + 424);
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v12 = v7;
      v11 = &CExpressionValueStack::`vftable';
      v14 = 0LL;
      v18 = 0;
      CBaseExpression::CalculateValue(v4, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v6 + 496), &v18);
      v11 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v14);
    }
    CResource::UnRegisterNotifierInternal(this, *v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v2);
  }
  v8 = (CBaseExpression *)*((_QWORD *)this + 59);
  if ( v8 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 2);
      v10 = *(_QWORD *)(v9 + 424);
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v12 = v10;
      v11 = &CExpressionValueStack::`vftable';
      v14 = 0LL;
      v18 = 0;
      CBaseExpression::CalculateValue(v8, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v9 + 496), &v18);
      v11 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v14);
    }
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 59));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  }
}
