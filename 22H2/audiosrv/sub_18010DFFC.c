/*
 * XREFs of sub_18010DFFC @ 0x18010DFFC
 * Callers:
 *     sub_18010C820 @ 0x18010C820 (sub_18010C820.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_18010E768 @ 0x18010E768 (sub_18010E768.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18010DFFC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  const CHAR *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 377) = 0;
  if ( *(_QWORD *)(a1 + 352) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *(_QWORD *)(a1 + 352) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 120) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, *(_QWORD *)(a1 + 120));
      if ( v6 < 0 )
        sub_18006D26C(
          (int)retaddr,
          132,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          v6);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 128) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 80LL))(
             *(_QWORD *)(a1 + 72),
             *(_QWORD *)(a1 + 128));
      if ( v7 < 0 )
        sub_18006D26C(
          (int)retaddr,
          138,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          v7);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v8 = *(__int64 **)(a1 + 160);
    v9 = *v8;
    v18 = *v8;
    while ( (__int64 *)v9 != v8 )
    {
      v10 = *(_QWORD *)(v9 + 48);
      if ( v10 && *(_QWORD *)(v9 + 56) )
      {
        sub_180048790(&v17, v10);
        v16 = 0LL;
        v11 = (**v17)(v17, &unk_18015E758, &v16);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, *(_QWORD *)(v9 + 56));
          *(_QWORD *)(v9 + 56) = 0LL;
        }
        else
        {
          sub_18006D26C(
            (int)retaddr,
            147,
            (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            v11);
        }
        sub_18000F708(&v16);
        sub_18000F708((__int64 *)&v17);
      }
      sub_1800E3598(&v18);
      v9 = v18;
    }
    sub_18010E768(a1 + 160);
  }
  v12 = *(const CHAR **)(a1 + 56);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(const CHAR *, __int64))(*(_QWORD *)v12 + 56LL))(v12, a1);
    if ( v13 < 0 )
      sub_18006D26C(
        (int)retaddr,
        159,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        v13);
    sub_1800CB144((__int64 *)(a1 + 56));
  }
  v14 = *(unsigned int *)(a1 + 368);
  if ( (_DWORD)v14 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019E618 + 352LL))(
      qword_18019E618,
      v14,
      a1 + 8);
    *(_DWORD *)(a1 + 368) = 0;
  }
  sub_18010CB28(v12, 0, a3, a4);
}
