/*
 * XREFs of ??1_Locimp@locale@std@@MEAA@XZ @ 0x180104CE8
 * Callers:
 *     sub_1800E15C0 @ 0x1800E15C0 (sub_1800E15C0.c)
 *     sub_180104D30 @ 0x180104D30 (sub_180104D30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180104D68 @ 0x180104D68 (sub_180104D68.c)
 */

void __fastcall std::locale::_Locimp::~_Locimp(std::locale::_Locimp *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = off_1801477C0;
  sub_180104D68(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
