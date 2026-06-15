/*
 * XREFs of sub_180104D68 @ 0x180104D68
 * Callers:
 *     ??1_Locimp@locale@std@@MEAA@XZ @ 0x180104CE8 (--1_Locimp@locale@std@@MEAA@XZ.c)
 *     sub_180104F08 @ 0x180104F08 (sub_180104F08.c)
 *     sub_180105034 @ 0x180105034 (sub_180105034.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180104D68(__int64 a1)
{
  void *v2; // rcx

  if ( *(_DWORD *)(a1 + 12) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 120LL))(*(_QWORD *)(a1 + 32), a1);
    *(_DWORD *)(a1 + 12) = 0;
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
