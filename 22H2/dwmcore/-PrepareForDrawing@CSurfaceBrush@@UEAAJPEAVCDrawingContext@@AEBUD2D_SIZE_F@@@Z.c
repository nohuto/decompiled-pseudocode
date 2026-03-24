/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180093A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  struct CDrawingContext *v6; // rsi
  int v7; // eax
  bool v8; // di
  void (__fastcall *v9)(_QWORD *, void *, _QWORD); // rdi
  __int64 (__fastcall ***v10)(_QWORD, char *); // rcx
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rdx
  char *v14; // rcx
  _QWORD *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17[16]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0LL;
  v5 = *((_QWORD *)this + 12);
  v6 = a2;
  v16 = 0LL;
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const struct D2D_SIZE_F *))(*(_QWORD *)v5 + 56LL))(
            v5,
            200LL,
            a3) )
    {
      v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v16);
      v3 = v16;
      goto LABEL_4;
    }
    v3 = v16;
  }
  v7 = -2003292404;
LABEL_4:
  if ( v7 >= 0 )
  {
    v8 = *((_QWORD *)v6 + 6) && !*((_BYTE *)g_pComposition + 1129);
    LOBYTE(a2) = v8;
    (*(void (__fastcall **)(_QWORD *, struct CDrawingContext *, _QWORD, _QWORD))(*v3 + 32LL))(
      v3,
      a2,
      *((_QWORD *)v6 + 7),
      0LL);
    if ( v8 )
    {
      v9 = *(void (__fastcall **)(_QWORD *, void *, _QWORD))(*v3 + 40LL);
      v10 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v6 + 4)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL) + 12LL));
      v11 = (**v10)(v10, v17);
      v12 = *((_DWORD *)v6 + 102);
      if ( v12 )
        v13 = (void *)(*((_QWORD *)v6 + 53) + 68LL * (unsigned int)(v12 - 1));
      else
        v13 = &CMILMatrix::Identity;
      v9(v3, v13, *(unsigned int *)(v11 + 8));
    }
    v3 = v16;
  }
  if ( v3 )
  {
    v14 = (char *)v3 + *(int *)(v3[1] + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0LL;
}
