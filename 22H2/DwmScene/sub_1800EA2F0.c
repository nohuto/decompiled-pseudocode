/*
 * XREFs of sub_1800EA2F0 @ 0x1800EA2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_18008D558 @ 0x18008D558 (sub_18008D558.c)
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 *     sub_180095AD0 @ 0x180095AD0 (sub_180095AD0.c)
 *     sub_180095BB4 @ 0x180095BB4 (sub_180095BB4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800EA2F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v15 = 0LL;
  sub_180095AD0(a2, (__int64)&v15);
  if ( (unsigned __int8)sub_18008D558(v15, (__int64)&qword_18020B4F8) )
  {
    v5 = sub_18006AB04(a3);
    v6 = sub_1800752B4(v5, 1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_180208E08, 0LL)
      && (*(_WORD *)(v15 + 112) & 0x10) != 0
      && (*(_WORD *)(v15 + 112) & 0x2000) == 0 )
    {
      v7 = 7;
    }
    else
    {
      v7 = 3;
    }
  }
  else
  {
    v7 = 1;
  }
  v8 = sub_180095BB4(a2, &v13);
  LOBYTE(v9) = sub_180092088(*v8, v7);
  v10 = v14;
  if ( v14 )
  {
    v9 = _InterlockedDecrement(v14 + 2);
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      v9 = _InterlockedDecrement(v10 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    v9 = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      v9 = _InterlockedDecrement(v11 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return v9;
}
