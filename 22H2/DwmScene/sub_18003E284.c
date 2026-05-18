/*
 * XREFs of sub_18003E284 @ 0x18003E284
 * Callers:
 *     sub_18003EE50 @ 0x18003EE50 (sub_18003EE50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18003E284(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = a2[1];
  a1[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  a1[2] = 0LL;
  a1[3] = 0LL;
  v6 = a2[3];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v7 = a2[5];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  a1[4] = a2[4];
  a1[5] = a2[5];
  return a1;
}
