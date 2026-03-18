/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F99C
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F7E0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FC54 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010A58 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     memmove @ 0x1C001D640 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032C78 (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003AC7C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003AEC8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003C12C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_RELATIONS *v4; // rsi
  KIRQL v5; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r15
  _LIST_ENTRY *Flink; // r14
  char v8; // r12
  int v9; // ebx
  KIRQL v10; // r13
  int *_a3; // r14
  int v12; // r12d
  unsigned __int8 v13; // r15
  KIRQL v14; // al
  KIRQL v15; // bl
  int v17; // eax
  SIZE_T v18; // r12
  _DEVICE_RELATIONS *PoolWithTag; // rax
  _LIST_ENTRY *v20; // rbx
  _DEVICE_OBJECT *v21; // rbx
  const void *ObjectHandleUnchecked; // rax
  __int64 v23; // r8
  _LIST_ENTRY *v24; // rbx
  _LIST_ENTRY *v25; // r12
  const void *v26; // rax
  __int64 v27; // r8
  const void *_a1; // rax
  const void *v29; // rax
  const void *v30; // rax
  _LIST_ENTRY *v31; // rbx
  int v32; // eax
  const void *v33; // rax
  __int64 v34; // rdx
  const void *v35; // rax
  __int64 v36; // rdx
  const void *v37; // rax
  __int64 v38; // rdx
  const void *v39; // rax
  __int64 v40; // rdx
  int v41; // edx
  const void *v42; // rax
  int v43; // edx
  size_t v44; // r8
  const void *v45; // rax
  __int64 v46; // rdx
  const void *v47; // rax
  __int64 v48; // rdx
  const void *v49; // rax
  __int64 v50; // rdx
  unsigned int i; // ebx
  unsigned __int8 invalidateRelations[8]; // [rsp+40h] [rbp-78h] BYREF
  int *v53; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v54; // [rsp+50h] [rbp-68h]
  _DEVICE_RELATIONS *v55; // [rsp+58h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+60h] [rbp-58h] BYREF
  char v57; // [rsp+C0h] [rbp+8h]
  _LIST_ENTRY *v58; // [rsp+C0h] [rbp+8h]
  char v60; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_Globals = this->m_Globals;
  v60 = 1;
  v57 = 0;
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
      v17 = (int)Flink[1].Flink;
      if ( v17 > 0 )
      {
        if ( v17 > 2 )
        {
          if ( v17 == 4 )
          {
            if ( m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Flink[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                5u,
                0xCu,
                0x22u,
                WPP_FxChildList_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v23 + 144));
            }
            v8 = 1;
          }
        }
        else
        {
          ++v9;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    NewIrql = v8;
    v4 = 0LL;
  }
  KeReleaseSpinLock(&this->m_ListLock, v10);
  _a3 = (int *)*DeviceRelations;
  v53 = (int *)*DeviceRelations;
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
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, _a1);
      }
LABEL_6:
      v60 = 0;
      v12 = -1073741637;
      goto LABEL_7;
    }
    if ( _a3 )
    {
      v24 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v25 = v24->Flink;
          if ( LODWORD(v24[1].Flink) == 4 )
          {
            v26 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v24[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v26, *(const void **)(v27 + 144));
            LODWORD(v24[1].Flink) = 3;
            BYTE3(v24[5].Flink) = 1;
          }
          v24 = v25;
        }
        while ( v25 != p_m_DescriptionListHead );
        _a3 = v53;
      }
      goto LABEL_6;
    }
  }
  if ( v9 )
    v18 = 8LL * (unsigned int)(v9 - 1) + 16;
  else
    v18 = 4LL;
  PoolWithTag = (_DEVICE_RELATIONS *)ExAllocatePoolWithTag(PagedPool, v18, m_Globals->Tag);
  v55 = PoolWithTag;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v9);
    ++this->m_EnumRetries;
    v12 = -1073741637;
    v60 = 0;
    LODWORD(v53) = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      if ( NewIrql )
      {
        v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v29);
      }
      v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v30, 3u);
    }
    else
    {
      v57 = 1;
    }
    if ( _a3 )
    {
      v31 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v54 = v31->Flink;
          v32 = (int)v31[1].Flink;
          if ( v32 == 2 )
          {
            v35 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v31[4].Flink);
            WPP_IFR_SF_qqq(
              m_Globals,
              4u,
              0xCu,
              0x28u,
              WPP_FxChildList_cpp_Traceguids,
              v35,
              *(const void **)(v36 + 144),
              _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v39 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v31[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                3u,
                0xCu,
                0x2Au,
                WPP_FxChildList_cpp_Traceguids,
                v39,
                *(const void **)(v40 + 144));
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v31, 1u) )
            {
              v37 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v31[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                4u,
                0xCu,
                0x29u,
                WPP_FxChildList_cpp_Traceguids,
                v37,
                *(const void **)(v38 + 144));
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v31, 1u);
            }
            LODWORD(v31[1].Flink) = 3;
            BYTE3(v31[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v32 == 4 )
          {
            v33 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v31[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v33, *(const void **)(v34 + 144));
            LODWORD(v31[1].Flink) = 3;
            BYTE3(v31[5].Flink) = 1;
          }
          v31 = v54;
        }
        while ( v54 != p_m_DescriptionListHead );
        v4 = v55;
        v12 = (int)v53;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_7;
  }
  memset(PoolWithTag, 0, v18);
  if ( _a3 )
  {
    v41 = *_a3;
    if ( *_a3 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v42 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v42, (__int64)_a3, v43);
        v41 = *_a3;
      }
      if ( v41 )
        v44 = 8LL * (unsigned int)(v41 - 1) + 16;
      else
        v44 = 4LL;
      memmove(v4, _a3, v44);
    }
  }
  v20 = p_m_DescriptionListHead->Flink;
  v12 = 0;
  if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
  {
LABEL_7:
    v13 = v57;
    goto $Done_4;
  }
  do
  {
    v58 = v20->Flink;
    switch ( LODWORD(v20[1].Flink) )
    {
      case 1:
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v20, invalidateRelations) )
        {
          v47 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v20[4].Flink);
          WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v47, *(const void **)(v48 + 144));
LABEL_28:
          if ( m_Globals->FxVerboseOn )
          {
            v49 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v20[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v49, *(const void **)(v50 + 144));
          }
          v21 = (_DEVICE_OBJECT *)v20[4].Flink[9].Flink;
          ObfReferenceObject(v21);
          v4->Objects[v4->Count++] = v21;
        }
        break;
      case 2:
        goto LABEL_28;
      case 4:
        v45 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v20[4].Flink);
        WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v45, *(const void **)(v46 + 144));
        LODWORD(v20[1].Flink) = 3;
        BYTE3(v20[5].Flink) = 1;
        break;
    }
    v20 = v58;
  }
  while ( v58 != p_m_DescriptionListHead );
  v13 = invalidateRelations[0];
  _a3 = v53;
$Done_4:
  v14 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v15 = v14;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v12 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v15);
  if ( v13 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead);
  if ( v60 )
  {
    if ( _a3 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v12 < 0 && v4 )
    {
      for ( i = 0; i < v4->Count; ++i )
        ObfDereferenceObject(v4->Objects[i]);
      ExFreePoolWithTag(v4, 0);
      v4 = 0LL;
    }
    *DeviceRelations = v4;
  }
  return (unsigned int)v12;
}
