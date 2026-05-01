/*
 * XREFs of ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497490
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1804975B4 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180410168 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180494A14 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180497EA4 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDragVisual::_OnMouseHover(CDragVisual *this, struct tagPOINT a2)
{
  unsigned int v2; // edi
  LONG v4; // eax
  LONG v5; // ecx
  __int64 v6; // r9
  struct tagPOINT v8; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  v8 = a2;
  if ( !*((_BYTE *)this + 275) )
  {
    *(struct tagPOINT *)&rc.left = a2;
    *((struct tagPOINT *)this + 23) = a2;
    *((_BYTE *)this + 275) = 1;
  }
  if ( !*((_BYTE *)this + 276) )
  {
    v4 = *((_DWORD *)this + 46);
    v5 = *((_DWORD *)this + 47);
    rc.left = v4;
    rc.right = v4 + 1;
    rc.top = v5;
    rc.bottom = v5 + 1;
    InflateRect(&rc, 3, 3);
    if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v8) )
      *((_BYTE *)this + 276) = 1;
  }
  if ( !*((_BYTE *)this + 326) && !*((_DWORD *)this + 82) && *((_BYTE *)this + 276) )
  {
    CDragVisual::_TrackMouseLeave(this, 1);
    Geometry::CPoint::ClientToScreen((struct tagPOINT *)&rc, *((HWND *)this + 19), (LONG *)&v8);
    LOBYTE(v6) = 1;
    return (*(unsigned int (__fastcall **)(_QWORD, __int64, struct tagRECT *, __int64))(**((_QWORD **)this + 17) + 64LL))(
             *((_QWORD *)this + 17),
             1LL,
             &rc,
             v6);
  }
  return v2;
}
