/*
 * XREFs of sub_18005BDFC @ 0x18005BDFC
 * Callers:
 *     sub_18005BD78 @ 0x18005BD78 (sub_18005BD78.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005BED0 @ 0x18005BED0 (sub_18005BED0.c)
 *     sub_18005BF88 @ 0x18005BF88 (sub_18005BF88.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005BDFC(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // edi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = sub_18006A18C(104LL, &unk_18019F848);
  v7 = v6;
  if ( v6 )
  {
    sub_18005BED0(v6);
    *(_QWORD *)v7 = off_180147AF8;
    *(_QWORD *)(v7 + 8) = off_180147AB0;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 48), 0, 0);
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    v8 = *a3;
    v9 = *a2;
    v12 = v7;
    v10 = sub_18005BF88(v7, v9, v8);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v10 = 0;
      *a1 = v7;
    }
    sub_1800461B8(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
