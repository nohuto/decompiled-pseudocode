/*
 * XREFs of ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1804E9D7C
 * Callers:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1804E9E88 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1804E9CB0 (-HorizontallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1804E9CFC (-MoveNearRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1804EA1C4 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1804EA2B0 (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int64 __fastcall Windows::UI::Immersive::PositionRelativeOnSide(
        __int64 a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  const struct tagRECT *v7; // r9
  LPRECT v8; // rax
  const struct tagRECT *v9; // r9
  char v10; // cl
  LONG v11; // edx
  struct tagRECT v13; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-38h] BYREF

  *(_OWORD *)a1 = 0LL;
  if ( (int)a4 >= 0 )
  {
    if ( (int)a4 <= 2 )
    {
      v15 = *Windows::UI::Immersive::MoveNearRect(&v13, a3, a2, (int)a4);
      v8 = Windows::UI::Immersive::HorizontallyCenterRect(
             &rc,
             a2,
             (const struct Windows::UI::Immersive::CConstraint *)&v15,
             v9);
      goto LABEL_6;
    }
    if ( (int)a4 <= 4 )
    {
      v15 = *Windows::UI::Immersive::MoveNearRect(&rc, a3, a2, (int)a4);
      v8 = Windows::UI::Immersive::VerticallyCenterRect(
             &v13,
             a2,
             (const struct Windows::UI::Immersive::CConstraint *)&v15,
             v7);
LABEL_6:
      *(struct tagRECT *)a1 = *v8;
    }
  }
  v10 = 1;
  v11 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 > v11 || *(_DWORD *)(a1 + 4) > *(_DWORD *)(a1 + 12) )
    v10 = 0;
  if ( *(_DWORD *)a1 < a5->left || v11 > a5->right || *(_DWORD *)(a1 + 4) < a5->top || *(_DWORD *)(a1 + 12) > a5->bottom )
    v10 = 0;
  if ( !v10 )
    *(struct tagRECT *)a1 = *Windows::UI::Immersive::ShiftRectIntoContainer(
                               (Windows::UI::Immersive *)&v13,
                               a5,
                               (const struct Windows::UI::Immersive::CConstraint *)a1,
                               a4);
  return a1;
}
