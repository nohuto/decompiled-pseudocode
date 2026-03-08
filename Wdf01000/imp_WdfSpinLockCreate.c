/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C004C760
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0001ADC (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00500D4 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  bool v7; // cf
  unsigned __int16 v8; // bp
  FxSpinLock *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF
  WDFSPINLOCK__ *lock; // [rsp+80h] [rbp+18h] BYREF

  lock = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], SpinLockAttributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, SpinLockAttributes, 0);
  if ( (int)result >= 0 )
  {
    v7 = m_Globals->FxVerifierLock != 0;
    *SpinLock = 0LL;
    v8 = v7 ? 0x100 : 0;
    *(_QWORD *)&v13.UsePoolType = 0LL;
    v13.u.PoolFlags = 64LL;
    v9 = (FxSpinLock *)FxObjectHandleAllocCommon(
                         m_Globals,
                         &v13,
                         0x80uLL,
                         0,
                         SpinLockAttributes,
                         v8,
                         FxObjectTypeExternal);
    if ( v9 && (FxSpinLock::FxSpinLock(v9, m_Globals, v8), (v11 = v10) != 0LL) )
    {
      v12 = FxObject::Commit(v10, SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v12 < 0 )
      {
        FxObject::ClearEvtCallbacks(v11);
        v11->DeleteObject(v11);
      }
      else
      {
        *SpinLock = lock;
      }
      return (unsigned int)v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
