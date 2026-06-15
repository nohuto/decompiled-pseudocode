/*
 * XREFs of sub_1800103D4 @ 0x1800103D4
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_1800102E0 @ 0x1800102E0 (sub_1800102E0.c)
 *     sub_1800DD8C0 @ 0x1800DD8C0 (sub_1800DD8C0.c)
 *     sub_1800E01F0 @ 0x1800E01F0 (sub_1800E01F0.c)
 *     sub_18012DC90 @ 0x18012DC90 (sub_18012DC90.c)
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800103D4(__int64 a1)
{
  __int64 v2; // rdi
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = qword_18019E640;
  if ( !*(_QWORD *)(a1 + 136) )
    *(_QWORD *)(a1 + 136) = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(__int64, __int64), __int64))(*(_QWORD *)qword_18019E640 + 8LL))(
                              qword_18019E640,
                              sub_180003E50,
                              a1);
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioDGInactiveTimeout",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v4 = pvData;
  if ( ValueW )
    v4 = 300;
  v5 = *(_QWORD *)(a1 + 136);
  pvData = v4;
  if ( v5 )
  {
    v9 = -10000000LL * v4;
    (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(v2, v5, &v9, 0LL, 0);
  }
  return 0LL;
}
