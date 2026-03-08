/*
 * XREFs of RtlpHpFixedVsCommit @ 0x1402FE750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpFixedVsCommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(__int64, __int64 *, __int64 *); // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))(RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8));
  v5 = a3;
  return v3(a1, &v6, &v5);
}
