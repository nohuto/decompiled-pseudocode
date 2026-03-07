__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v5; // ebp
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // edx
  struct CResource *v10; // rsi
  __int64 v11; // r13
  struct CResource **v12; // rdi
  __int64 Resource; // rax
  __int64 v14; // rcx
  struct CResource *v15; // r14
  __int64 v16; // r12
  int v17; // eax
  struct CResource **v18; // rax
  __int64 v19; // r10
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // r10
  __int64 v26; // rcx
  unsigned int Slot; // eax
  __int64 v28; // r10
  CVisual *v29; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  v9 = *((_DWORD *)a3 + 2);
  v10 = 0LL;
  v11 = 0LL;
  v29 = TransformParentDataInternal;
  v12 = (struct CResource **)TransformParentDataInternal;
  if ( v9 )
  {
    Resource = CResourceTable::GetResource(v8, v9, 0xC8u);
    v10 = (struct CResource *)Resource;
    if ( !Resource )
    {
      v5 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x9BBu, 0LL);
      return v5;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Resource + 184LL))(Resource);
  }
  v15 = 0LL;
  v16 = 0LL;
  if ( v12 )
  {
    v15 = *v12;
    v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)*v12 + 184LL))(*v12);
  }
  if ( v10 != v15 )
  {
    CResource::UnRegisterNotifierInternal(this, v15);
    if ( v10 )
    {
      v17 = CResource::RegisterNotifier(this, v10);
      v5 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v17, 0x9CDu, 0LL);
        return v5;
      }
      if ( !v12 )
      {
        v18 = (struct CResource **)operator new(0x10uLL);
        v12 = v18;
        if ( v18 )
          *(_OWORD *)v18 = 0LL;
        else
          v12 = 0LL;
        CVisual::SetTransformParentDataInternal(this, (struct TransformParentData *)v12);
      }
      *v12 = v10;
      *((_BYTE *)v12 + 8) = *((_BYTE *)a3 + 12) != 0;
    }
    else if ( v12 )
    {
      SAFE_DELETE<TransformParentData>(&v29);
      v25 = (_DWORD *)*((_QWORD *)this + 29);
      if ( (*v25 & 0x1000000) != 0 )
      {
        v26 = *((_QWORD *)this + 29);
        *v25 &= ~0x1000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v26, 8);
        if ( Slot < *(_DWORD *)(v28 + 4) )
          *(_BYTE *)(Slot + v28 + 8) = 0;
      }
    }
  }
  LOBYTE(v7) = (*((_BYTE *)this + 102) & 0x40) != 0;
  if ( (_BYTE)v7 != (v10 != 0LL) )
  {
    v19 = *((_QWORD *)this + 2) + 1016LL;
    v29 = this;
    if ( v10 )
    {
      v20 = *(_DWORD *)(v19 + 24);
      v21 = v20 + 1;
      if ( v20 + 1 < v20 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v21 > *(_DWORD *)(v19 + 20) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet(v19, 8, 1, &v29);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v19 + 8LL * v20) = this;
        *(_DWORD *)(v19 + 24) = v21;
      }
      *((_BYTE *)this + 102) |= 0x40u;
    }
    else
    {
      DynArray<CVisual *,0>::Remove(v19, &v29);
      *((_BYTE *)this + 102) &= ~0x40u;
    }
  }
  if ( v11 != v16 )
  {
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
  }
  return v5;
}
