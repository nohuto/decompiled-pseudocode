/*
 * XREFs of sub_180006ED0 @ 0x180006ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180006ED0(_QWORD *a1, char a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rdx
  volatile signed __int32 *v7; // rdx
  volatile signed __int32 *v8; // rdx

  *a1 = &off_180146488;
  _o_free(a1[17]);
  v4 = a1[15];
  a1[1] = off_180146480;
  v5 = (volatile signed __int32 *)(v4 - 24);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = (volatile signed __int32 *)(a1[14] - 24LL);
  if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
  v7 = (volatile signed __int32 *)(a1[13] - 24LL);
  if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
  v8 = (volatile signed __int32 *)(a1[12] - 24LL);
  if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 152LL);
  return a1;
}
