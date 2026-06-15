/*
 * XREFs of sub_18013EE38 @ 0x18013EE38
 * Callers:
 *     sub_1801401A0 @ 0x1801401A0 (sub_1801401A0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 *     sub_18014034C @ 0x18014034C (sub_18014034C.c)
 *     sub_18014059C @ 0x18014059C (sub_18014059C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013EE38(_QWORD **a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // r15
  _QWORD **v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rdx
  int v9; // r12d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+28h] [rbp-8h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v16 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    goto LABEL_19;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 17);
  v7 = a1 + 23;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 17);
  if ( !a3 )
  {
    sub_180066980((__int64)&lpCriticalSection, v8);
    if ( (unsigned __int8)sub_180140028(v7, *(unsigned int *)(a2 + 4), &v16) )
    {
      sub_18014034C(v7, *(unsigned int *)(a2 + 4));
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, a2);
      if ( v12 < 0 )
        v5 = v12;
    }
LABEL_17:
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_19;
  }
  sub_180066980((__int64)&lpCriticalSection, v8);
  v9 = (unsigned __int8)sub_180140028(v7, *(unsigned int *)(a2 + 4), &v16);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v9 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*a1[3] + 24LL))(a1[3], a2, &v16);
    if ( v10 < 0 )
    {
      v5 = v10;
      goto LABEL_19;
    }
    sub_180066980((__int64)&lpCriticalSection, v6);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 72LL))(v16, a2);
    if ( v11 < 0
      || (sub_18014059C(v7, *(unsigned int *)(a2 + 4), &v16),
          v11 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[4])(a1),
          v11 < 0) )
    {
      v5 = v11;
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v5;
}
