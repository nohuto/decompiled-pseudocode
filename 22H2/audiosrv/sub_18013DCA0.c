/*
 * XREFs of sub_18013DCA0 @ 0x18013DCA0
 * Callers:
 *     sub_18013DA70 @ 0x18013DA70 (sub_18013DA70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D630 @ 0x18013D630 (sub_18013D630.c)
 *     sub_18013DB38 @ 0x18013DB38 (sub_18013DB38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013DCA0(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 *SpinCount; // rcx
  __int64 v8; // rax
  int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  v11[0] = 0LL;
  v12 = 0;
  v13 = 0;
  if ( a3 != 1 && a3 != 8 )
  {
    v6 = sub_18013DB38(a1, a2);
    if ( v6 >= 0 )
      goto LABEL_13;
    goto LABEL_6;
  }
  v6 = sub_18013D630((__int64)a1, a2, &v12, v11);
  v5 = v11[0];
  if ( v6 < 0 )
  {
LABEL_6:
    v4 = v6;
    goto LABEL_13;
  }
  SpinCount = (__int64 *)a1->SpinCount;
  if ( SpinCount )
  {
    v8 = *SpinCount;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *, _QWORD))(v8 + 24))(SpinCount, v11[0]);
    else
      (*(void (__fastcall **)(__int64 *, _QWORD))(v8 + 40))(SpinCount, v11[0]);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 32LL))(v5, &v13);
  if ( v9 < 0 )
    v4 = v9;
LABEL_13:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}
