/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800B8BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool v4; // bl
  __int64 v5; // rcx
  char v6; // si
  char v8; // al
  __int64 v9; // rcx
  char v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BOOL8 result; // rax
  char v15; // al
  __int64 *v16; // rcx
  bool v17; // zf
  __int64 v18; // rax

  v4 = 0;
  v5 = *((_QWORD *)this + 12);
  v6 = 0;
  if ( !v5 )
    goto LABEL_7;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 200LL);
  v9 = *((_QWORD *)this + 12);
  if ( v8 )
  {
    if ( !*(_QWORD *)(v9 + 56) || *(float *)(v9 + 72) <= 0.0 || *(float *)(v9 + 76) <= 0.0 )
      goto LABEL_7;
LABEL_11:
    v4 = 1;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, 40LL);
  v11 = (_QWORD *)*((_QWORD *)this + 12);
  if ( !v10 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 56LL))(v11, 127LL);
    v16 = (__int64 *)*((_QWORD *)this + 12);
    v17 = v15 == 0;
    v18 = *v16;
    if ( !v17 )
    {
      v4 = 1;
      v6 = (*(__int64 (**)(void))(v18 + 208))();
      goto LABEL_7;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v18 + 56))(v16, 11LL) )
      goto LABEL_7;
    goto LABEL_11;
  }
  v12 = v11[12];
  v13 = 0LL;
  if ( v12 )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  v4 = v13 != 0;
LABEL_7:
  result = v4;
  *a3 = v6;
  return result;
}
