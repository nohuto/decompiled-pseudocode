/*
 * XREFs of sub_18005C490 @ 0x18005C490
 * Callers:
 *     sub_18005C014 @ 0x18005C014 (sub_18005C014.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180057BD8 @ 0x180057BD8 (sub_180057BD8.c)
 *     sub_18005C564 @ 0x18005C564 (sub_18005C564.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005C490(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_18006A18C(632LL, &unk_18019F848);
  v7 = v6;
  if ( v6 )
  {
    sub_18005C564(v6);
    *(_QWORD *)v7 = off_180147CA8;
    *(_QWORD *)(v7 + 8) = off_180147C60;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 48), 0, 0);
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 104) = 0LL;
    v10 = v7;
    v11 = 0LL;
    v8 = sub_180057BD8(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    sub_1800461B8(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
