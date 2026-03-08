/*
 * XREFs of ?InternalCommit@CChannel@@AEAAJPEAX@Z @ 0x180044118
 * Callers:
 *     ?Commit@CChannel@@UEAAJXZ @ 0x1800440C0 (-Commit@CChannel@@UEAAJXZ.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1800CCFA8 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 * Callees:
 *     ?FlushCommands@CChannel@@AEAAJPEAX@Z @ 0x18004414C (-FlushCommands@CChannel@@AEAAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::InternalCommit(CChannel *this, void *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v2 + 72LL))(*((_QWORD *)this + 8), a2);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 570LL;
  }
  else
  {
    v3 = CChannel::FlushCommands(this, a2);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 574LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return (unsigned int)v3;
}
