/*
 * XREFs of sub_18010CE74 @ 0x18010CE74
 * Callers:
 *     sub_18010E230 @ 0x18010E230 (sub_18010E230.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_18010CA24 @ 0x18010CA24 (sub_18010CA24.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010CE74(__int64 a1, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  __int64 v5; // r9
  unsigned int v6; // edi
  unsigned __int8 v7; // si
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v13[1] = v4;
  v6 = 0;
  v12 = 0;
  v7 = 0;
  if ( a2[1] )
  {
    v7 = 1;
    v8 = 0;
    if ( *a2 )
    {
      while ( (int)sub_18010CA24(a2, v8, v13, v5) < 0 || !*(_DWORD *)(v13[0] + 16LL) )
      {
        if ( ++v8 >= *a2 )
          goto LABEL_8;
      }
      v6 = *(_DWORD *)(v13[0] + 24LL);
    }
LABEL_8:
    v9 = *(unsigned int *)(a1 + 368);
    if ( (_DWORD)v9 && (_DWORD)v9 != v6 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019E618 + 352LL))(
        qword_18019E618,
        v9,
        (a1 + 8) & -(__int64)(a1 != 0));
      *(_DWORD *)(a1 + 368) = 0;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)qword_18019E618 + 48LL))(qword_18019E618, v6, &v12);
      if ( *(_DWORD *)(a1 + 368) != v6 )
      {
        *(_DWORD *)(a1 + 368) = v6;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019E618 + 344LL))(
          qword_18019E618,
          v6,
          (a1 + 8) & -(__int64)(a1 != 0));
      }
    }
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 368);
    if ( (_DWORD)v10 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019E618 + 352LL))(
        qword_18019E618,
        v10,
        (a1 + 8) & -(__int64)(a1 != 0));
      *(_DWORD *)(a1 + 368) = 0;
    }
  }
  if ( v7 == *(_BYTE *)(a1 + 376) )
  {
    if ( v12 == *(_DWORD *)(a1 + 372) )
      goto LABEL_24;
  }
  else
  {
    if ( (unsigned int)CallbackContext > 4 )
    {
      LODWORD(v13[0]) = v7;
      v15 = v13;
      v16 = 4;
      v17 = 0;
      sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_1801696DD, 0LL, 0LL, 3u, &v14);
    }
    *(_BYTE *)(a1 + 376) = v7;
  }
  *(_DWORD *)(a1 + 372) = v12;
  v11 = sub_18010E270(a1);
  if ( v11 < 0 )
    sub_18006D26C(
      (int)retaddr,
      531,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v11);
LABEL_24:
  if ( v4 )
    LeaveCriticalSection(v4);
}
