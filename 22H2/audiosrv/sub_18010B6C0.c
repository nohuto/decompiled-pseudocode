/*
 * XREFs of sub_18010B6C0 @ 0x18010B6C0
 * Callers:
 *     sub_18010BA60 @ 0x18010BA60 (sub_18010BA60.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_18010AB24 @ 0x18010AB24 (sub_18010AB24.c)
 */

__int64 __fastcall sub_18010B6C0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+60h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  int v16; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 168LL))(*a1, 0LL, a3, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned int)CallbackContext > 4 )
    {
      if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
             (__vcrt_trace_logging_provider *)&CallbackContext,
             0x400000000000uLL) )
      {
        v16 = *((_DWORD *)a1 + 13);
        v13 = a1 + 2;
        v14[0] = a1[5];
        v12 = a3;
        v17 = a2;
        sub_18010AB24(
          v9,
          byte_18016942C,
          v10,
          v11,
          (__int64)v14,
          (__int64 *)&v13,
          (__int64)&v17,
          (__int64)&v12,
          (__int64)&v16);
      }
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      279,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      v6);
    return v7;
  }
}
