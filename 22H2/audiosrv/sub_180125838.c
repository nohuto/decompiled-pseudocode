/*
 * XREFs of sub_180125838 @ 0x180125838
 * Callers:
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     sub_18004C0F0 @ 0x18004C0F0 (sub_18004C0F0.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1801252B8 @ 0x1801252B8 (sub_1801252B8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180125838(__int64 a1, void *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+80h] [rbp+30h] BYREF
  void *v9; // [rsp+88h] [rbp+38h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(unsigned __int8 *)(a1 + 6852);
    v8 = v6;
    v9 = a2;
    sub_1801252B8(v6, byte_18016BFAD, v4, v5, &v9, (__int64)&v8, (__int64)&v7);
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    if ( !*(_BYTE *)(a1 + 6852)
      || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48)) < 0
      || (LODWORD(v9) = 0,
          LODWORD(v8) = 0,
          v7 = 0,
          (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48), &v7) < 0)
      || v7
      || (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 128LL))(*(_QWORD *)(a1 + 48), &v8) < 0
      || (_DWORD)v8
      || (*(int (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 48) + 184LL))(*(_QWORD *)(a1 + 48), &v9) < 0
      || (_DWORD)v9 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      memset((void *)(a1 + 104), 0, 0x48uLL);
      *(_DWORD *)(a1 + 168) = sub_1800104CC();
      *(_DWORD *)(a1 + 176) = 0;
      memset((void *)(a1 + 180), 0, 0x1A10uLL);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 48LL))(
        *(_QWORD *)(a1 + 40),
        a1 + 104,
        0LL,
        0LL);
      *(_BYTE *)(a1 + 6852) = 1;
      sub_18004C0F0(a1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)a1);
}
