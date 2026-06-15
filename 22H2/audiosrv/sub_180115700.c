/*
 * XREFs of sub_180115700 @ 0x180115700
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180115700(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 8);
  switch ( (_DWORD)result )
  {
    case 0:
      v2 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      v7 = v2;
      result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019E678 + 40LL))(qword_18019E678, &v7);
      if ( (int)result >= 0 )
        return result;
      v3 = 382;
      return sub_18006D26C(
               (int)retaddr,
               v3,
               (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
               result);
    case 1:
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      v7 = v4;
      result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019E678 + 48LL))(qword_18019E678, &v7);
      if ( (int)result >= 0 )
        return result;
      v3 = 386;
      return sub_18006D26C(
               (int)retaddr,
               v3,
               (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
               result);
    case 2:
      v5 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      v7 = v5;
      result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019E678 + 56LL))(qword_18019E678, &v7);
      if ( (int)result >= 0 )
        return result;
      v3 = 390;
      return sub_18006D26C(
               (int)retaddr,
               v3,
               (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
               result);
    case 3:
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 64LL))(qword_18019E678);
      if ( (int)result < 0 )
      {
        v3 = 394;
        return sub_18006D26C(
                 (int)retaddr,
                 v3,
                 (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                 result);
      }
      break;
  }
  return result;
}
