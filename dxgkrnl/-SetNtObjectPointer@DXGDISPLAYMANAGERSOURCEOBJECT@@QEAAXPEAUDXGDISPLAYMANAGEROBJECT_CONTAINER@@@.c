/*
 * XREFs of ?SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1C02F9650
 * Callers:
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C02F8C7C (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::SetNtObjectPointer(
        DXGDISPLAYMANAGERSOURCEOBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT_CONTAINER *a2)
{
  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 705LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 705LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 3) = a2;
}
