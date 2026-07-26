/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C006D5D0
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F1F0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0108D14 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C01238FC (--1BindEngine@Ndis@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  Rtl::KString *value; // rcx
  Rtl::KString *v3; // rcx
  NDISWATCHDOG__ *m_ptr; // [rsp+30h] [rbp+10h] BYREF
  void (__fastcall *v5)(struct NDISWATCHDOG__ *); // [rsp+38h] [rbp+18h] BYREF

  if ( this->ReenumerateWatchdog.m_ptr != (NDISWATCHDOG__ *)-1LL )
  {
    m_ptr = this->ReenumerateWatchdog.m_ptr;
    v5 = ndisFreeWatchdog;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v5, &m_ptr);
  }
  if ( this->HookedOidWatchdog.m_ptr != (NDISWATCHDOG__ *)-1LL )
  {
    m_ptr = this->HookedOidWatchdog.m_ptr;
    v5 = ndisFreeWatchdog;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v5, &m_ptr);
  }
  if ( this->PendingOidWatchdog.m_ptr != (NDISWATCHDOG__ *)-1LL )
  {
    m_ptr = this->PendingOidWatchdog.m_ptr;
    v5 = ndisFreeWatchdog;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v5, &m_ptr);
  }
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  value = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
  v3 = this->ExportName.__ptr_.__value_;
  this->ExportName.__ptr_.__value_ = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
}
