/*
 * XREFs of ??1CVector3Force@@EEAA@XZ @ 0x180238864
 * Callers:
 *     ??_GCVector3Force@@EEAAPEAXI@Z @ 0x1802389F0 (--_GCVector3Force@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVector3Force::~CVector3Force(CVector3Force *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 38);
  if ( v2 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *((_QWORD *)this + 37);
  if ( v3 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
