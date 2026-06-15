/*
 * XREFs of sub_1800BE690 @ 0x1800BE690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BD9FC @ 0x1800BD9FC (sub_1800BD9FC.c)
 *     sub_1800BEB60 @ 0x1800BEB60 (sub_1800BEB60.c)
 */

__int64 __fastcall sub_1800BE690(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  void *v8; // rcx
  int v9; // r14d
  int v10; // ebx
  __vcrt_trace_logging_provider *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebp
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // esi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  void *v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF

  v8 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEB60(*((_QWORD *)off_18019C348 + 2), a2, a3, a1, a2, a3);
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = 0;
  if ( v9 == a2 )
    goto LABEL_13;
  v11 = (__vcrt_trace_logging_provider *)sub_180008448((__int64)v8, sub_1800B6240)[1];
  if ( *(_DWORD *)v11 > 4u && __vcrt_trace_logging_provider::_TlgKeywordOn(v11, 0x400000000000uLL) )
  {
    v22 = *(void **)(a1 + 32);
    v23 = a2;
    sub_1800BD9FC(v12, byte_180166475, v13, v14, (__int64)&v23, &v22);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, a2);
  v16 = v15;
  if ( v15 < 0 )
  {
    sub_18004BD84((int)retaddr, 207, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp", v15);
    return v16;
  }
  v18 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) = a2;
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 40LL))(v18, 0LL, a3);
  v20 = v19;
  if ( v19 >= 0 )
  {
LABEL_13:
    if ( a4 )
    {
      LOBYTE(v10) = v9 == a2;
      *a4 = v10;
    }
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 211, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp", v19);
    return v20;
  }
}
