/*
 * XREFs of sub_1801426AC @ 0x1801426AC
 * Callers:
 *     sub_180140F80 @ 0x180140F80 (sub_180140F80.c)
 * Callees:
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013FE74 @ 0x18013FE74 (sub_18013FE74.c)
 */

__int64 __fastcall sub_1801426AC(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v5 = 0;
  v6 = sub_18013FE74(a1 + 120, a2, &v12, &v11, &v10);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      sub_1800579A4(&v9, v7);
      v4 = v9;
    }
    if ( a3 )
    {
      *a3 = v4;
      if ( !v4 )
        return v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  else
  {
    v5 = -2147023728;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
