/*
 * XREFs of ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800BB150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x1800129E0 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800167E0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UdwmBottomVisual::UpdateLayout(UdwmBottomVisual *this, char a2)
{
  const struct tagSIZE *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int updated; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagSIZE v11; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = (const struct tagSIZE *)*((_QWORD *)this + 30);
  if ( v4
    && CVisual::DoCanvasLayout(
         v4 + 15,
         (const struct _MARGINS *)this + 8,
         (const struct tagSIZE *)this + 15,
         &v12,
         &v11) )
  {
    v5 = (*(__int64 (__fastcall **)(UdwmBottomVisual *, struct tagSIZE *))(*(_QWORD *)this + 96LL))(this, &v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    CVisual::SetOffset((struct tagPOINT *)this, &v12);
  }
  updated = CVisual::UpdateLayout(this, a2);
  v9 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x115,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)updated);
  return v9;
}
