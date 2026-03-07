__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_RELATIONS *v4; // r14
  KIRQL v5; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r12
  _LIST_ENTRY *Flink; // rbx
  char v8; // r13
  unsigned int v9; // r15d
  KIRQL v10; // si
  const void *_a1; // rax
  __int64 v12; // r8
  _DWORD *_a3; // rsi
  _LIST_ENTRY *v14; // rbx
  _LIST_ENTRY *v15; // r15
  const void *v16; // rax
  __int64 v17; // r8
  const void *ObjectHandleUnchecked; // rax
  int v19; // r15d
  unsigned __int8 v20; // r12
  KIRQL v21; // al
  KIRQL v22; // bl
  unsigned __int8 v23; // r8
  PVOID *Objects; // rbx
  __int64 Count; // rdi
  unsigned __int64 v27; // rax
  const void *v28; // rax
  const void *v29; // rax
  _LIST_ENTRY *v30; // rbx
  int v31; // eax
  const void *v32; // rax
  __int64 v33; // rdx
  const void *v34; // rax
  __int64 v35; // rdx
  const void *v36; // rax
  __int64 v37; // rdx
  const void *v38; // rax
  __int64 v39; // rdx
  const void *v40; // rax
  int v41; // edx
  size_t v42; // rax
  _LIST_ENTRY *v43; // rbx
  const void *v44; // rax
  __int64 v45; // rdx
  const void *v46; // rax
  __int64 v47; // rdx
  const void *v48; // rax
  __int64 v49; // rdx
  _DEVICE_OBJECT *v50; // rbx
  unsigned __int8 invalidateRelations[8]; // [rsp+40h] [rbp-78h] BYREF
  _DWORD *v52; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v53; // [rsp+50h] [rbp-68h]
  _DEVICE_RELATIONS *Pool2; // [rsp+58h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+60h] [rbp-58h] BYREF
  char v56; // [rsp+C0h] [rbp+8h]
  _LIST_ENTRY *v57; // [rsp+C0h] [rbp+8h]
  char v59; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_Globals = this->m_Globals;
  v59 = 1;
  v56 = 0;
  v4 = 0LL;
  invalidateRelations[0] = 0;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v8 = 0;
  v9 = 0;
  NewIrql = 0;
  v10 = v5;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      if ( LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[1].Flink) == 2 )
      {
        ++v9;
      }
      else if ( LODWORD(Flink[1].Flink) == 4 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Flink[4].Flink);
          WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, _a1, *(const void **)(v12 + 144));
        }
        v8 = 1;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    NewIrql = v8;
    v4 = 0LL;
  }
  KeReleaseSpinLock(&this->m_ListLock, v10);
  _a3 = *DeviceRelations;
  v52 = *DeviceRelations;
  if ( v9 )
  {
    if ( _a3 )
      v9 += *_a3;
  }
  else
  {
    if ( !v8 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, ObjectHandleUnchecked);
      }
      goto LABEL_21;
    }
    if ( _a3 )
    {
      v14 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v15 = v14->Flink;
          if ( LODWORD(v14[1].Flink) == 4 )
          {
            v16 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v14[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v16, *(const void **)(v17 + 144));
            LODWORD(v14[1].Flink) = 3;
            BYTE3(v14[5].Flink) = 1;
          }
          v14 = v15;
        }
        while ( v15 != p_m_DescriptionListHead );
        _a3 = v52;
      }
LABEL_21:
      v59 = 0;
      v19 = -1073741637;
LABEL_22:
      v20 = v56;
      goto $Done_8;
    }
  }
  v27 = FxChildList::_ComputeRelationsSize(v9);
  Pool2 = (_DEVICE_RELATIONS *)ExAllocatePool2(256LL, v27, m_Globals->Tag);
  v4 = Pool2;
  if ( !Pool2 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v9);
    ++this->m_EnumRetries;
    v19 = -1073741637;
    v59 = 0;
    LODWORD(v52) = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      if ( NewIrql )
      {
        v28 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v28);
      }
      v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v29, 3);
    }
    else
    {
      v56 = 1;
    }
    if ( _a3 )
    {
      v30 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v53 = v30->Flink;
          v31 = (int)v30[1].Flink;
          if ( v31 == 2 )
          {
            v34 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v30[4].Flink);
            WPP_IFR_SF_qqq(
              m_Globals,
              4u,
              0xCu,
              0x28u,
              WPP_FxChildList_cpp_Traceguids,
              v34,
              *(const void **)(v35 + 144),
              _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v38 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v30[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                3u,
                0xCu,
                0x2Au,
                WPP_FxChildList_cpp_Traceguids,
                v38,
                *(const void **)(v39 + 144));
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v30, 1u) )
            {
              v36 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v30[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                4u,
                0xCu,
                0x29u,
                WPP_FxChildList_cpp_Traceguids,
                v36,
                *(const void **)(v37 + 144));
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v30, 1u);
            }
            LODWORD(v30[1].Flink) = 3;
            BYTE3(v30[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v31 == 4 )
          {
            v32 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v30[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v32, *(const void **)(v33 + 144));
            LODWORD(v30[1].Flink) = 3;
            BYTE3(v30[5].Flink) = 1;
          }
          v30 = v53;
        }
        while ( v53 != p_m_DescriptionListHead );
        v4 = Pool2;
        v19 = (int)v52;
      }
    }
    else
    {
      v19 = -1073741670;
    }
    goto LABEL_22;
  }
  if ( _a3 && *_a3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v40 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v40, (__int64)_a3, v41);
    }
    v42 = FxChildList::_ComputeRelationsSize(*_a3);
    memmove(Pool2, _a3, v42);
  }
  v43 = p_m_DescriptionListHead->Flink;
  v19 = 0;
  if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
    goto LABEL_22;
  do
  {
    v57 = v43->Flink;
    if ( LODWORD(v43[1].Flink) != 1 )
    {
      if ( LODWORD(v43[1].Flink) != 2 )
      {
        if ( LODWORD(v43[1].Flink) == 4 )
        {
          v44 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v43[4].Flink);
          WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v44, *(const void **)(v45 + 144));
          LODWORD(v43[1].Flink) = 3;
          BYTE3(v43[5].Flink) = 1;
        }
        goto LABEL_78;
      }
      goto LABEL_75;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
    if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v43, invalidateRelations) )
    {
      v46 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v43[4].Flink);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v46, *(const void **)(v47 + 144));
LABEL_75:
      if ( m_Globals->FxVerboseOn )
      {
        v48 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v43[4].Flink);
        WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v48, *(const void **)(v49 + 144));
      }
      v50 = (_DEVICE_OBJECT *)v43[4].Flink[9].Flink;
      ObfReferenceObject(v50);
      v4->Objects[v4->Count++] = v50;
    }
LABEL_78:
    v43 = v57;
  }
  while ( v57 != p_m_DescriptionListHead );
  v20 = invalidateRelations[0];
  _a3 = v52;
$Done_8:
  v21 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v22 = v21;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v19 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v22);
  if ( v20 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead, v23);
  if ( v59 )
  {
    if ( _a3 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v19 < 0 && v4 )
    {
      if ( v4->Count )
      {
        Objects = (PVOID *)v4->Objects;
        Count = v4->Count;
        do
        {
          ObfDereferenceObject(*Objects++);
          --Count;
        }
        while ( Count );
      }
      ExFreePoolWithTag(v4, 0);
      v4 = 0LL;
    }
    *DeviceRelations = v4;
  }
  return (unsigned int)v19;
}
