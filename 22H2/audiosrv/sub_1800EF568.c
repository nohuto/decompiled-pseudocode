/*
 * XREFs of sub_1800EF568 @ 0x1800EF568
 * Callers:
 *     sub_18000B850 @ 0x18000B850 (sub_18000B850.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_1800EF878 @ 0x1800EF878 (sub_1800EF878.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall sub_1800EF568(_Mtx_t a1, volatile signed __int32 **a2, int a3, char a4, char a5)
{
  volatile signed __int32 **v7; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // r15
  volatile signed __int32 *v12; // r14
  int v13; // eax
  int v14; // r9d
  std::_Ref_count_base *v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v7 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v9 = (volatile signed __int32 *)sub_180055F40(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = off_1801556C8;
    *((_QWORD *)v9 + 2) = a1;
    *((_DWORD *)v9 + 6) = a3;
    *((_BYTE *)v9 + 28) = a4;
    v11 = a5;
    *((_BYTE *)v9 + 29) = a5;
  }
  else
  {
    v10 = 0LL;
    v11 = a5;
  }
  v12 = v10 + 4;
  v13 = Mtx_lock(a1);
  try
  {
    if ( v13 )
      std::_Throw_C_error(v13);
    LOBYTE(v14) = a4;
    sub_1800EF878((_DWORD)a1, 0, a3, v14, v11);
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v12 = v10 + 4;
    }
    *v7 = v12;
    v15 = (std::_Ref_count_base *)v7[1];
    v7[1] = v10;
    if ( v15 )
      sub_180052600(v15);
    v16 = Mtx_unlock(a1);
    if ( v16 )
      std::_Throw_C_error(v16);
    if ( v10 )
      sub_180052600((std::_Ref_count_base *)v10);
  }
  catch ( ... )
  {
    sub_1800C8F54((int)retaddr, 435, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp", v17);
    return a2;
  }
  return v7;
}
