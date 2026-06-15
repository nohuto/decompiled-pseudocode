/*
 * XREFs of sub_1800CA2FC @ 0x1800CA2FC
 * Callers:
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 * Callees:
 *     sub_1800059AC @ 0x1800059AC (sub_1800059AC.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CA2FC(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // r9
  __int64 result; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  v17 = v3;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)v16 + 24LL))();
    v5 = v4;
    if ( v4 >= 0 )
    {
      sub_180048790(&v15, v16);
      v8 = *(__int64 **)(a1 + 784);
      if ( *(__int64 **)(a1 + 792) == v8 )
      {
        sub_1800059AC((SIZE_T *)(a1 + 776), v8, &v15);
      }
      else
      {
        v9 = v15;
        v15 = 0LL;
        *v8 = v9;
        *(_QWORD *)(a1 + 784) += 8LL;
      }
      sub_18000F708(&v15);
      if ( *(_BYTE *)(a1 + 800) )
        *(_BYTE *)(a1 + 800) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16) != 0;
      v11 = (_DWORD *)sub_180008448(v10, sub_1800B6240)[1];
      if ( *v11 > 4u )
      {
        LODWORD(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
        v17 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 728);
        sub_1800512F4((__int64)v11, byte_180166B35, v12, v13, (void **)&v17, (__int64)&v15);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      sub_18004BD84((int)retaddr, 1953, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v4);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           1980,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
