/*
 * XREFs of sub_180045EE0 @ 0x180045EE0
 * Callers:
 *     sub_180046B30 @ 0x180046B30 (sub_180046B30.c)
 *     sub_180046DE0 @ 0x180046DE0 (sub_180046DE0.c)
 *     sub_1800E3D40 @ 0x1800E3D40 (sub_1800E3D40.c)
 *     sub_1800E6740 @ 0x1800E6740 (sub_1800E6740.c)
 *     sub_1800E6810 @ 0x1800E6810 (sub_1800E6810.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180045EE0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+38h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 368) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
    v5 = v2;
    v3 = 0LL;
    v4 = 0LL;
    if ( *(_QWORD *)(a1 + 384) )
    {
      sub_1800579A4(&v4);
      v3 = v4;
    }
    if ( *(_DWORD *)(a1 + 280) )
    {
      if ( !*(_BYTE *)(a1 + 328) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *(_QWORD *)(a1 + 368));
        *(_BYTE *)(a1 + 328) = 1;
      }
    }
    else if ( *(_BYTE *)(a1 + 328) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, *(_QWORD *)(a1 + 368));
      *(_BYTE *)(a1 + 328) = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
}
