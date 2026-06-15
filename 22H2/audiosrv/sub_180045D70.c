/*
 * XREFs of sub_180045D70 @ 0x180045D70
 * Callers:
 *     sub_1800E4790 @ 0x1800E4790 (sub_1800E4790.c)
 * Callees:
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

__int64 __fastcall sub_180045D70(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 88);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 152LL))(v4) )
  {
LABEL_17:
    if ( a1 != -96 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 88);
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 104LL))(v5, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = *(_QWORD *)(v13 + 24);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    if ( !(unsigned int)sub_18004B400(v10, v11) )
    {
      v7 = -2004287447;
      v9 = 302LL;
      v8 = 2290679849LL;
      goto LABEL_10;
    }
    if ( v13 )
      sub_1800E3CDC(v13);
    goto LABEL_17;
  }
  v8 = (unsigned int)v6;
  v9 = 301LL;
LABEL_10:
  sub_18004BD84(retaddr, v9, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v8);
  if ( v13 )
    sub_1800E3CDC(v13);
  v13 = 0LL;
  if ( a1 != -96 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  return v7;
}
