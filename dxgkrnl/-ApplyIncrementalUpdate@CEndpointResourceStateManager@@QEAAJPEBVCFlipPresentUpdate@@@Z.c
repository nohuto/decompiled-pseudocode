/*
 * XREFs of ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C00851B4
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0081CF0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x1C007C728 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C00849B8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C008513C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0085680 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0087028 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0087B98 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087BF0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::ApplyIncrementalUpdate(
        struct _LIST_ENTRY *this,
        const struct CFlipPresentUpdate *a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // ebx
  unsigned int *v4; // r15
  CEndpointResourceStateManager *v6; // rcx
  CEndpointResourceStateManager *v7; // rcx
  CEndpointResourceStateManager *v8; // rcx
  CEndpointResourceStateManager *v9; // rcx
  CContentResourceState *v10; // rax
  CContentResourceState *v11; // rbp
  __int64 v12; // rbp
  char *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // al
  struct _LIST_ENTRY *v17; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // al
  CEndpointResourceStateManager *v22; // rdx
  CEndpointResourceStateManager **v23; // rax
  struct CFlipResourceState *v24; // rax
  struct CPoolBufferResourceState *ResourceState; // rax

  v2 = (unsigned int *)*((_QWORD *)a2 + 6);
  v3 = 0;
  v4 = (unsigned int *)((char *)v2 + *((unsigned int *)a2 + 10));
  while ( v2 < v4 )
  {
    v6 = (CEndpointResourceStateManager *)*v2;
    if ( !(_DWORD)v6 )
    {
      ResourceState = CEndpointResourceStateManager::FindResourceState(v6, *((_QWORD *)v2 + 1), this);
      if ( !ResourceState )
        return (unsigned int)-1073741823;
      CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)this, ResourceState);
      goto LABEL_25;
    }
    v7 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v6 - 1);
    if ( !(_DWORD)v7 )
    {
      v24 = CEndpointResourceStateManager::FindResourceState(v7, *((_QWORD *)v2 + 1), this + 1);
      if ( !v24 )
        return (unsigned int)-1073741823;
      (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v24 + 24LL))(v24);
      goto LABEL_25;
    }
    v8 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v8 - 1);
      if ( !(_DWORD)v9 )
      {
        v13 = (char *)&this[1];
        if ( CEndpointResourceStateManager::FindResourceState(v9, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this + 1) )
          return (unsigned int)-1073741823;
        v14 = DXGQUOTAALLOCATOR<256,1936868166>::operator new();
        v15 = v14;
        if ( !v14 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(v14 + 24) = *((_QWORD *)v2 + 1);
        v16 = *(_BYTE *)(v14 + 32) & 0xF1;
        *(_QWORD *)v15 = &CFlipResourceState::`vftable';
        *(_BYTE *)(v15 + 32) = v16 | 1;
        *(_QWORD *)(v15 + 16) = v15 + 8;
        *(_QWORD *)(v15 + 8) = v15 + 8;
        ++*(_DWORD *)(*(_QWORD *)(v15 + 24) + 24LL);
        *(_BYTE *)(v15 + 64) &= 0xFCu;
        *(_QWORD *)v15 = &CContentResourceState::`vftable';
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_QWORD *)(v15 + 48) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
        v17 = (struct _LIST_ENTRY *)((v15 + 8) & -(__int64)(v15 != 0));
        Blink = this[1].Blink;
        if ( (char *)Blink->Flink != v13 )
          goto LABEL_27;
        v17->Flink = (struct _LIST_ENTRY *)v13;
        *(_QWORD *)(((v15 + 8) & -(__int64)(v15 != 0)) + 8) = Blink;
        Blink->Flink = v17;
        this[1].Blink = v17;
        goto LABEL_25;
      }
      if ( (_DWORD)v9 != 1 )
        return (unsigned int)-1073741823;
      v10 = CEndpointResourceStateManager::FindResourceState(v9, *((_QWORD *)v2 + 1), this + 1);
      v11 = v10;
      if ( !v10 )
        return (unsigned int)-1073741823;
      CContentResourceState::SetBoundBuffer(v10, *((struct CPoolBufferResource **)v2 + 2));
      CContentResourceState::SetBoundPropertySet(v11, *((struct CFlipPropertySet **)v2 + 3));
      *((_QWORD *)v11 + 7) = *((_QWORD *)v2 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v11 + 3) + 48LL);
      if ( v12 )
      {
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v12 + 48)) >= 0 )
        {
          CPresentRate::NotifyFrame((CPresentRate *)(v12 + 96));
          CPushLock::ReleaseLock((CPushLock *)(v12 + 48));
        }
      }
      v2 += 10;
    }
    else
    {
      if ( CEndpointResourceStateManager::FindResourceState(v8, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this) )
        return (unsigned int)-1073741823;
      v19 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
      v20 = v19;
      if ( !v19 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(v19 + 24) = *((_QWORD *)v2 + 1);
      v21 = *(_BYTE *)(v19 + 32) & 0xF1;
      *(_QWORD *)v20 = &CFlipResourceState::`vftable';
      *(_BYTE *)(v20 + 32) = v21 | 1;
      *(_QWORD *)(v20 + 16) = v20 + 8;
      *(_QWORD *)(v20 + 8) = v20 + 8;
      ++*(_DWORD *)(*(_QWORD *)(v20 + 24) + 24LL);
      *(_QWORD *)v20 = &CPoolBufferResourceState::`vftable';
      v22 = (CEndpointResourceStateManager *)((v20 + 8) & -(__int64)(v20 != 0));
      v23 = (CEndpointResourceStateManager **)this->Blink;
      if ( *v23 != (CEndpointResourceStateManager *)this )
LABEL_27:
        __fastfail(3u);
      *(_QWORD *)v22 = this;
      *(_QWORD *)(((v20 + 8) & -(__int64)(v20 != 0)) + 8) = v23;
      *v23 = v22;
      this->Blink = (struct _LIST_ENTRY *)v22;
LABEL_25:
      v2 += 4;
    }
  }
  return v3;
}
