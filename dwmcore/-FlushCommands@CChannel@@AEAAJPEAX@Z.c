/*
 * XREFs of ?FlushCommands@CChannel@@AEAAJPEAX@Z @ 0x18004414C
 * Callers:
 *     ?InternalCommit@CChannel@@AEAAJPEAX@Z @ 0x180044118 (-InternalCommit@CChannel@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::FlushCommands(CChannel *this, void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+44h] [rbp-24h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = *((_QWORD *)this + 22);
  if ( !v5 && !a2 )
    goto LABEL_4;
  v6 = *((_DWORD *)this + 18);
  v14 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v15 = v6;
  v7 = *((_QWORD *)this + 7);
  v17 = v5;
  v13[1] = 40;
  v13[0] = 8;
  LOBYTE(a4) = *((_BYTE *)this + 233);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, void *, __int64))(**(_QWORD **)(v7 + 8) + 8LL))(
         *(_QWORD *)(v7 + 8),
         v13,
         a2,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 22) = 0LL;
LABEL_4:
    *((_BYTE *)this + 233) = 0;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
    (const char *)(unsigned int)v8,
    v11);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x131,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v9,
    v12);
  return v9;
}
