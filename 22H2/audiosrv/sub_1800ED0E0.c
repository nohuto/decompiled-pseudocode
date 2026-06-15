/*
 * XREFs of sub_1800ED0E0 @ 0x1800ED0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006F63C @ 0x18006F63C (sub_18006F63C.c)
 *     sub_18006FC20 @ 0x18006FC20 (sub_18006FC20.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800EA40C @ 0x1800EA40C (sub_1800EA40C.c)
 *     sub_1800EE298 @ 0x1800EE298 (sub_1800EE298.c)
 *     sub_1800EE2F4 @ 0x1800EE2F4 (sub_1800EE2F4.c)
 */

__int64 __fastcall sub_1800ED0E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // si
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800EE2F4(*((_QWORD *)off_18019C348 + 2), 31LL, a3, a2);
  }
  v23 = 0LL;
  sub_1800CB144(&v23);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE50 + 64LL))(
         qword_18019EE50,
         a2,
         &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
    v16 = 0LL;
    v7 = *(_QWORD *)qword_18019EE50;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v7 + 24))(qword_18019EE50, v8, &v16);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v20 = 0LL;
      v19 = 0LL;
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v16 + 112LL))(v16, &lpCriticalSection);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 104LL))(v16, v23, &v19);
      v5 = v10;
      if ( v10 >= 0 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800EE298(*((_QWORD *)off_18019C348 + 2), v11, v12, (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3, a2);
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23) )
        {
          sub_180048790(&v17, v23);
          sub_18006F63C(&v18, (_QWORD *)v19, *((_QWORD **)&v19 + 1), &v17);
          sub_18006FC20(&v18);
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800EE2F4(*((_QWORD *)off_18019C348 + 2), 34LL, v13, a2);
          }
          sub_1800CB144(&v23);
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        sub_1800EA40C(&lpCriticalSection, (__int64 *)v19, *((__int64 **)&v19 + 1), v6);
        v5 = 0;
      }
      else
      {
        sub_18004BD84(
          (int)retaddr,
          2439,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          v10);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v14 = v19;
      if ( (_QWORD)v19 )
      {
        sub_1800CD58C((__int64 *)v19, *((__int64 **)&v19 + 1));
        sub_1800472E0(v14, (v20 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
        v20 = 0LL;
        v19 = 0LL;
      }
    }
    else
    {
      sub_18004BD84((int)retaddr, 2431, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v9);
    }
    sub_18000F708(&v16);
  }
  else
  {
    sub_18004BD84((int)retaddr, 2425, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v4);
  }
  sub_18000F708(&v23);
  return v5;
}
