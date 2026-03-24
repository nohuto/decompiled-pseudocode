/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BB2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v3; // bl
  __int64 v5; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((_QWORD *)this + 11);
  v10 = 0;
  v11 = 0;
  if ( !v5 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v5 + 296LL))(
         v5,
         a2,
         &v10) )
  {
    v8 = *((_QWORD *)this + 10);
    if ( !v8
      || (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v8 + 296LL))(
           v8,
           a2,
           &v11) )
    {
      v3 = 1;
    }
  }
  if ( v10 || v11 )
  {
    result = v3;
    *a3 = 1;
  }
  else
  {
LABEL_8:
    *a3 = 0;
    return v3;
  }
  return result;
}
