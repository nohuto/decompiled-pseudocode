/*
 * XREFs of sub_1800338FC @ 0x1800338FC
 * Callers:
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023940 @ 0x180023940 (sub_180023940.c)
 *     sub_180028D60 @ 0x180028D60 (sub_180028D60.c)
 *     sub_180033650 @ 0x180033650 (sub_180033650.c)
 *     sub_18003E810 @ 0x18003E810 (sub_18003E810.c)
 *     sub_180042C40 @ 0x180042C40 (sub_180042C40.c)
 *     sub_180042E90 @ 0x180042E90 (sub_180042E90.c)
 *     sub_180043080 @ 0x180043080 (sub_180043080.c)
 *     sub_180043350 @ 0x180043350 (sub_180043350.c)
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800338FC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  signed __int32 v8; // eax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v9 = 0LL;
  v4 = a1[10];
  if ( v4 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v4 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v8 + 1, v8) )
      {
        *(_QWORD *)&v9 = a1[9];
        v5 = a1[10];
        *((_QWORD *)&v9 + 1) = v5;
        goto LABEL_3;
      }
    }
  }
  v5 = 0LL;
LABEL_3:
  sub_18006187C(v9 + 24);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  v6 = a1[18];
  *a2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
