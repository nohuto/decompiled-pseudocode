/*
 * XREFs of sub_1801216CC @ 0x1801216CC
 * Callers:
 *     sub_180121A98 @ 0x180121A98 (sub_180121A98.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801217EC @ 0x1801217EC (sub_1801217EC.c)
 *     sub_1801219B0 @ 0x1801219B0 (sub_1801219B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801216CC(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v5, &v11);
        v7 = v6;
        if ( v6 < 0 )
          break;
        if ( (unsigned __int8)sub_1801219B0(v11, 1LL) )
        {
          v8 = sub_1801217EC(v11, L"HP", 0LL);
          if ( v8 < 0 )
            sub_18006D26C(
              (int)retaddr,
              395,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              v8);
        }
        sub_18000F708(&v11);
        if ( ++v5 >= v10 )
          return 0LL;
      }
      sub_18004BD84((int)retaddr, 391, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v6);
      sub_18000F708(&v11);
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    sub_18004BD84((int)retaddr, 386, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v2);
    return v3;
  }
}
