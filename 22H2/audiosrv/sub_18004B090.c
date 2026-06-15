/*
 * XREFs of sub_18004B090 @ 0x18004B090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18004B090(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        int *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v13; // bl
  int v14; // eax
  unsigned __int64 v15; // r8
  int v16; // ecx
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int DefaultSpatialRenderingMode; // esi
  int v21; // eax
  int v22; // esi
  __int64 v23; // rcx
  _BYTE v25[56]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-58h]

  v13 = 1;
  if ( !byte_18019E4B4 )
  {
    v14 = IsHrtfApoAvailable();
    byte_18019E4B5 = v14 != 0;
    byte_18019E4B4 = 1;
    if ( !v14
      && (unsigned int)dword_18019C448 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x10,
           v15) )
    {
      sub_1800521E8(v16, (unsigned int)&unk_18016C0C1, 0, 0, 2, (__int64)v25);
    }
  }
  v26 = 0LL;
  v17 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
  if ( v17 )
    v26 = (**v17)(v17, v25);
  if ( (unsigned __int8)sub_180072420(a1, a2, a3, a4, (__int64)v25, a6, (__int64)a7, (__int64)a8, a9) )
  {
    DefaultSpatialRenderingMode = 0;
    *a7 = 0;
    if ( (unsigned __int8)sub_18006C4AC(v19) )
      DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
    if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
    {
      *a7 = 1;
LABEL_18:
      *a8 = 1;
      goto LABEL_26;
    }
    if ( !DefaultSpatialRenderingMode )
    {
      if ( ((a2 - 3) & 0xFFFFFFFD) != 0 )
      {
        v21 = *a7;
      }
      else
      {
        *a7 = 10;
        v21 = 10;
      }
      if ( v21 )
        goto LABEL_18;
      v22 = 0;
      *a7 = 0;
      if ( (unsigned __int8)sub_18006C4AC(10LL) )
        v22 = GetDefaultSpatialRenderingMode(a2);
      if ( v22 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
      {
        *a7 = 1;
        goto LABEL_26;
      }
      if ( !v22 )
      {
        if ( a2 == 1 )
          *a7 = 10;
LABEL_26:
        if ( byte_18019E4B5 )
          goto LABEL_28;
      }
    }
  }
  v13 = 0;
LABEL_28:
  v23 = *(_QWORD *)(a5 + 56);
  if ( v23 )
  {
    LOBYTE(v18) = v23 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v18);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v13;
}
