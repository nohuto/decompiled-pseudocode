/*
 * XREFs of ?GetSize@CWICBitmapWrapper@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800E6920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CWICBitmapWrapper::GetSize(CWICBitmapWrapper *this, _DWORD *a2)
{
  __int64 v2; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v2 + 24LL))(v2, &v5, &v6);
  *a2 = v5;
  a2[1] = v6;
  return (struct D2D_SIZE_U)a2;
}
