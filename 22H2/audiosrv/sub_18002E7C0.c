/*
 * XREFs of sub_18002E7C0 @ 0x18002E7C0
 * Callers:
 *     sub_18002E740 @ 0x18002E740 (sub_18002E740.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_1800C9420 @ 0x1800C9420 (sub_1800C9420.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004CDA0 @ 0x18004CDA0 (sub_18004CDA0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 *     sub_1800C5F30 @ 0x1800C5F30 (sub_1800C5F30.c)
 *     sub_1800CB200 @ 0x1800CB200 (sub_1800CB200.c)
 */

__int64 __fastcall sub_18002E7C0(__int64 *a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  int v9; // ebp
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __vcrt_trace_logging_provider *v14; // rcx
  unsigned __int64 v15; // r8
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+44h] [rbp-44h] BYREF
  _QWORD v22[8]; // [rsp+48h] [rbp-40h] BYREF
  int v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+98h] [rbp+10h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 19, (unsigned int)&unk_18015DEF0, a1[91], a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 101));
  v9 = *((_DWORD *)a1 + 213);
  v10 = 0;
  if ( v9 != a2 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB200(*((_QWORD *)off_18019C348 + 2), 20, (unsigned int)&unk_18015DEF0, a1[91], v9, a2);
    }
    sub_18004CDA0(a1);
    v12 = *a1;
    *((_DWORD *)a1 + 213) = a2;
    if ( (*(int (__fastcall **)(__int64 *, int *))(v12 + 168))(a1, &v24) >= 0 )
    {
      v14 = (__vcrt_trace_logging_provider *)sub_180008448(v13, sub_1800B6240)[1];
      if ( *(_DWORD *)v14 > 4u )
      {
        if ( __vcrt_trace_logging_provider::_TlgKeywordOn(v14, (const struct _TlgProvider_t *)0x400000000000LL, v15) )
        {
          v23 = v24;
          v20 = *((_DWORD *)a1 + 180);
          v22[0] = a1[91];
          v21 = a2;
          sub_1800C5F30(
            v16,
            (unsigned int)&unk_180166B7E,
            v17,
            v18,
            (__int64)&v21,
            (__int64)v22,
            (__int64)&v20,
            (__int64)&v23);
        }
      }
    }
  }
  if ( a1 != (__int64 *)-808LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 101));
  if ( v9 != a2 && !a4 )
  {
    LOBYTE(v19) = 0;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64, int, _QWORD))(a1[2] + 24))(
      a1 + 2,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v19,
      0LL);
  }
  if ( a5 )
  {
    LOBYTE(v10) = v9 == a2;
    *a5 = v10;
  }
  return 0LL;
}
