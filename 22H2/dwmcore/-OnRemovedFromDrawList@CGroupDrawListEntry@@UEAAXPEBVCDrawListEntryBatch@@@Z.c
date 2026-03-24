/*
 * XREFs of ?OnRemovedFromDrawList@CGroupDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x1800C5310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGroupDrawListEntry::OnRemovedFromDrawList(
        CGroupDrawListEntry *this,
        const struct CDrawListEntryBatch *a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r10
  char *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  v5 = v2 - 1;
  *((_DWORD *)this + 2) = v5;
  if ( !v5 )
  {
    v6 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *((_QWORD *)a2 + 3);
    v8 = (char *)this - 16;
    v15 = (volatile signed __int32 *)v8;
    v9 = *(_DWORD *)(v7 + 128);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v7 + 124) )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL * v9) = v8;
        *(_DWORD *)(v7 + 128) = v10;
LABEL_8:
        _InterlockedIncrement(v15 + 2);
        return;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 104, 8, 1, &v15);
      v13 = v11;
      if ( v11 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
    }
    if ( v13 >= 0 )
      goto LABEL_8;
  }
}
