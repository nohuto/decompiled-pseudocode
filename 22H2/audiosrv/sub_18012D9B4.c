/*
 * XREFs of sub_18012D9B4 @ 0x18012D9B4
 * Callers:
 *     sub_18012DAC0 @ 0x18012DAC0 (sub_18012DAC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010BD6C @ 0x18010BD6C (sub_18010BD6C.c)
 *     sub_18012DC50 @ 0x18012DC50 (sub_18012DC50.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18012D9B4(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF
  DWORD v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v11 = v2;
  v3 = *(char **)(a1 + 88);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && GetExitCodeProcess(v3, &ExitCode) )
  {
    if ( (unsigned int)dword_18019C4B8 > 4 )
    {
      v9 = ExitCode;
      v10 = *(_DWORD *)(a1 + 96);
      sub_18010BD6C((__int64)&dword_18019C4B8, byte_18016C21C, v4, v5, (__int64)&v10, (__int64)&v9);
    }
    sub_18012DC50(a1 + 88, 0LL);
    *(_DWORD *)(a1 + 96) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 96LL))(
      qword_18019E640,
      *(_QWORD *)(a1 + 128));
    *(_QWORD *)(a1 + 128) = 0LL;
    v7 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 152);
    if ( v7 )
    {
      LOBYTE(v6) = 1;
      (**v7)(v7, v6);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
