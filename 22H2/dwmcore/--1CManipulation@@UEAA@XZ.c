/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x1801D3D18
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x1801D3D90 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094D90 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  v2 = *((_QWORD *)this + 89);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 89) = 0LL;
  }
  `vector destructor iterator'(
    (char *)this + 480,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
