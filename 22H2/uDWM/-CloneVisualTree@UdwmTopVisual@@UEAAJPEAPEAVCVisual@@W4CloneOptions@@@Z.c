/*
 * XREFs of ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180028440 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081124 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmTopVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int inserted; // ebx
  _BYTE *v7; // rcx
  int v8; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+58h] [rbp+20h] BYREF

  inserted = CVisual::CloneVisualTree(a1, a2, a3);
  if ( inserted < 0 )
  {
    v10 = 163LL;
  }
  else
  {
    v7 = *(_BYTE **)(a1 + 240);
    if ( !v7 || (v7[84] & 8) != 0 )
      return 0LL;
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v7 + 152LL))(v7, &v13, a3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAB,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v8,
        v11);
    if ( !v13 )
      return 0LL;
    inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)*a2 + 32), v13, 0LL, 0, 1);
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v13 = 0LL;
    }
    if ( inserted >= 0 )
      return 0LL;
    v10 = 177LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
