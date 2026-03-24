/*
 * XREFs of ?OnRemovedFromDrawList@CStateSettingDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800132F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRemovedFromDrawList@CBaseDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x180013394 (-OnRemovedFromDrawList@CBaseDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStateSettingDrawListEntry::OnRemovedFromDrawList(
        CStateSettingDrawListEntry *this,
        const struct CDrawListEntryBatch *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF

  CBaseDrawListEntry::OnRemovedFromDrawList(this, a2);
  if ( !*((_DWORD *)this + 2) )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v5 = *((_QWORD *)a2 + 3);
    v6 = (char *)this - 16;
    v12 = (volatile signed __int32 *)v6;
    v7 = *(_DWORD *)(v5 + 88);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v8 <= *(_DWORD *)(v5 + 84) )
      {
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 8LL * v7) = v6;
        *(_DWORD *)(v5 + 88) = v8;
LABEL_7:
        _InterlockedIncrement(v12 + 2);
        return;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 64, 8LL, 1LL, &v12);
      v11 = v9;
      if ( v9 >= 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
    }
    if ( v11 >= 0 )
      goto LABEL_7;
  }
}
