/*
 * XREFs of ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1804975B4
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498688 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180410168 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1804971A4 (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497490 (-_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497A54 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180497AE4 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnMouseMove(CDragVisual *this, struct tagPOINT a2)
{
  char v4; // r15
  char v5; // r14
  LONG *v6; // rdx
  LONG v7; // ecx
  int v8; // edi
  int SystemMetrics; // eax
  int started; // eax
  __int64 v11; // rcx
  struct tagPOINT v12; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-18h] BYREF

  *(_QWORD *)&rc.left = this;
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&rc.left);
  if ( v12 == *(_QWORD *)((char *)this + 292) )
    goto LABEL_21;
  v4 = *((_BYTE *)this + 324);
  *(struct tagPOINT *)((char *)this + 292) = a2;
  if ( GetCapture() == *((HWND *)this + 19) )
  {
    v5 = 1;
    if ( *((_BYTE *)this + 324) )
      goto LABEL_10;
    if ( Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), (const struct tagPOINT *)((char *)this + 300)) )
    {
      v7 = *((_DWORD *)this + 76);
      rc.left = *v6;
      rc.right = rc.left + 1;
      rc.top = v7;
      rc.bottom = v7 + 1;
      v8 = 2 * GetSystemMetrics(69);
      SystemMetrics = GetSystemMetrics(68);
      InflateRect(&rc, 2 * SystemMetrics, v8);
      if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v12) )
        *((_BYTE *)this + 324) = 1;
    }
  }
  else
  {
    v5 = 0;
    if ( *((_DWORD *)this + 37) == 6 )
      CDragVisual::_OnMouseHover(this, a2);
  }
  if ( *((_BYTE *)this + 324) )
  {
LABEL_10:
    if ( v4 )
      started = CDragVisual::_OnContinueDrag(this, 0, a2);
    else
      started = CDragVisual::_OnStartDrag(this, 0, a2);
    if ( started < 0 && *((_QWORD *)this + 19) && v5 )
      ReleaseCapture();
    goto LABEL_21;
  }
  if ( v5 )
    CDragVisual::_OnPressDown(this, a2);
  v11 = *((_QWORD *)this + 12);
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 112LL))(v11, *(_QWORD *)((char *)this + 292));
LABEL_21:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
}
