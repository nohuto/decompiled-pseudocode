/*
 * XREFs of ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0086D5C
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C00826AC (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0087A84 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokens(
        CEndpointResourceStateManager **this,
        struct FlipManagerObject *a2,
        struct CFlipPropertySet *a3,
        bool a4,
        struct _LIST_ENTRY *a5)
{
  CEndpointResourceStateManager *v5; // rdx
  int v9; // esi
  __int64 v10; // rcx
  char v11; // al
  CEndpointResourceStateManager *v12; // r14
  __int64 v13; // rbx
  char v14; // al
  int UpdateTokens; // eax
  struct _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v5 = *this;
  v9 = 0;
  while ( v5 != (CEndpointResourceStateManager *)this )
  {
    v10 = (__int64)v5 + 24;
    if ( !v5 )
      v10 = 32LL;
    v11 = *(_BYTE *)v10;
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      v11 |= 4u;
      *(_BYTE *)v10 = v11;
    }
    if ( (v11 & 2) != 0 )
      *(_BYTE *)v10 = v11 | 8;
    v5 = *(CEndpointResourceStateManager **)v5;
  }
  v12 = this[2];
  while ( v12 != (CEndpointResourceStateManager *)(this + 2) )
  {
    if ( *(_QWORD *)(*(_QWORD *)((((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)) + 0x18) + 48LL) )
    {
      v14 = *(_BYTE *)((((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)) + 0x20);
      if ( (v14 & 1) != 0 )
      {
        v14 |= 4u;
        *(_BYTE *)((((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)) + 0x20) = v14;
      }
      if ( (v14 & 2) != 0 )
        *(_BYTE *)((((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)) + 0x20) = v14 | 8;
      if ( (*(_BYTE *)((((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)) + 0x40) & 1) != 0 )
      {
        UpdateTokens = CContentResourceState::CreateUpdateTokens(
                         (CContentResourceState *)(((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL)),
                         (struct CEndpointResourceStateManager *)this,
                         a3,
                         a4,
                         a5);
        v13 = ((unsigned __int64)v12 - 8) & -(__int64)(v12 != 0LL);
        *(_BYTE *)(v13 + 64) |= 2u;
        v9 = UpdateTokens;
      }
    }
    v12 = *(CEndpointResourceStateManager **)v12;
    if ( v9 < 0 )
    {
      while ( 1 )
      {
        Flink = a5->Flink;
        if ( a5->Flink == a5 )
          break;
        v16 = Flink->Flink;
        Blink = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v16;
        v16->Blink = Blink;
        if ( Flink != (struct _LIST_ENTRY *)8 )
          ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
      }
      return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
