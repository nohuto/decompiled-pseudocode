/*
 * XREFs of ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1C00463CC
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C003EF34 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0045FE8 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxObject::MoveContexts(FxObject *this, FxObject *TargetObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned int _a3; // ebx
  char *v6; // rdi
  KIRQL v7; // al
  FxContextHeader *_a1; // r14
  FxContextHeader *NextHeader; // r13
  int v10; // eax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]
  PKSPIN_LOCK SpinLock; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  _a3 = 0;
  if ( this->m_ObjectSize )
  {
    v6 = (char *)this + this->m_ObjectSize;
    if ( v6 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        _a3 = -1073741811;
        WPP_IFR_SF_q(m_Globals, 2u, 0xBu, 0xBu, WPP_FxObject_cpp_Traceguids, this);
      }
      else if ( (TargetObject->m_ObjectFlags & 8) != 0 )
      {
        SpinLock = &this->m_SpinLock.m_Lock;
        v7 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
        _a1 = (FxContextHeader *)*((_QWORD *)v6 + 1);
        NewIrql = v7;
        if ( _a1 )
        {
          while ( 1 )
          {
            NextHeader = _a1->NextHeader;
            _a1->NextHeader = 0LL;
            _a1->Object = TargetObject;
            v10 = FxObject::AddContext(TargetObject, _a1, 0LL, 0LL);
            _a3 = v10;
            if ( v10 == 0x40000000 )
              break;
            if ( v10 < 0 )
              goto LABEL_12;
            *((_QWORD *)v6 + 1) = NextHeader;
            _a1 = NextHeader;
            if ( !NextHeader )
              goto LABEL_13;
          }
          WPP_IFR_SF_qq(m_Globals, 2u, 0xBu, 0xDu, WPP_FxObject_cpp_Traceguids, _a1, TargetObject);
          FxVerifierDbgBreakPoint(m_Globals);
          _a3 = -1073741635;
LABEL_12:
          WPP_IFR_SF_qid(m_Globals, 2u, 0xBu, 0xEu, WPP_FxObject_cpp_Traceguids, _a1, (__int64)TargetObject, _a3);
          _a1->Object = this;
          _a1->NextHeader = NextHeader;
        }
LABEL_13:
        KeReleaseSpinLock(SpinLock, NewIrql);
      }
      else
      {
        _a3 = -1073741811;
        WPP_IFR_SF_q(m_Globals, 2u, 0xBu, 0xCu, WPP_FxObject_cpp_Traceguids, TargetObject);
      }
    }
  }
  return _a3;
}
