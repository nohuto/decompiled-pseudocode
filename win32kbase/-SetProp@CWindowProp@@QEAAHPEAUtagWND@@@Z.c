/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008EA50
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     RealInternalSetProp @ 0x1C00798E0 (RealInternalSetProp.c)
 *     RealInternalRemoveProp @ 0x1C008EB00 (RealInternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  CWindowProp *v8; // rax
  CWindowProp *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax

  v4 = (*(unsigned __int16 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144), v5, v6, v7);
  v8 = (CWindowProp *)RealInternalRemoveProp(*(_QWORD *)(a2 + 144), v4, 1LL);
  v9 = v8;
  if ( v8 && v8 != this )
    (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
  v10 = (*(unsigned __int16 (__fastcall **)(CWindowProp *, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v9);
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144), v11, v12, v13);
  result = RealInternalSetProp(*(_QWORD *)(a2 + 144), v10, (__int64)this, 32769LL);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
