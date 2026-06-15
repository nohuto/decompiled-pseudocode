/*
 * XREFs of sub_180073300 @ 0x180073300
 * Callers:
 *     sub_180073AC0 @ 0x180073AC0 (sub_180073AC0.c)
 * Callees:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801360D8 @ 0x1801360D8 (sub_1801360D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180073300(char **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+20h]
  char v11; // [rsp+50h] [rbp+28h] BYREF
  __int64 v12; // [rsp+58h] [rbp+30h] BYREF
  int v13; // [rsp+60h] [rbp+38h] BYREF
  __int64 v14; // [rsp+68h] [rbp+40h] BYREF

  v12 = a2;
  v13 = 0;
  LOBYTE(v12) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 80LL))(a3, &v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 88LL))(a3, &v13);
    if ( v6 >= 0 && (_BYTE)v12 && !v13 )
    {
      v14 = 0LL;
      sub_1800461B8(&v14);
      if ( ((*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 56LL))(a3, &v14) < 0
         || (unsigned __int8)sub_1801360D8(v7, v14))
        && sub_180036AC8((__int64)*a1) )
      {
        *((_DWORD *)*a1 + 46) = 4;
        v11 = 0;
        v8 = sub_18005F1D4(*a1, &v11);
        if ( v8 < 0 )
          sub_18006D26C((int)retaddr, 1812, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v8);
        if ( v11 || !(*a1)[209] )
        {
          if ( (*a1)[208] )
            v6 = sub_180036510((ULONGLONG)*a1, 1);
        }
      }
      sub_1800461B8(&v14);
    }
  }
  sub_18005F1A8(v5, (__int64)"AppUpdating check result", v6);
  return (unsigned int)v6;
}
