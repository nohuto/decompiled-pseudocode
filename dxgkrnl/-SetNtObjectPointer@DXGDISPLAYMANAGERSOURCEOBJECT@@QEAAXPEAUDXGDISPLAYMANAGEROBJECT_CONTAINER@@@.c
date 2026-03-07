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
