/*
 * XREFs of ?GetDragVisualLocation@ElementDragData@@UEAAJPEAUCRect@Geometry@@PEAUCPoint@3@@Z @ 0x18042D3D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ElementDragData::GetDragVisualLocation(
        ElementDragData *this,
        struct Geometry::CRect *a2,
        struct tagPOINT *a3)
{
  HWND v6; // rax
  __int64 v7; // rcx
  HWND v8; // rax
  struct tagPOINT v9; // rax
  struct tagPOINT v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+28h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6), Points);
  v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5));
  MapWindowPoints(v6, 0LL, Points, 2u);
  v7 = *((_QWORD *)this + 5);
  v11 = *(struct tagPOINT *)((char *)this + 92);
  v8 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 328LL))(v7);
  MapWindowPoints(v8, 0LL, &v11, 1u);
  v9 = v11;
  *(_OWORD *)a2 = *(_OWORD *)&Points[0].x;
  *a3 = v9;
  return 0LL;
}
