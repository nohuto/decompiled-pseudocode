bool __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool v3; // di
  __int64 v5; // rcx
  bool v8; // bl
  __int64 v9; // rcx
  bool result; // al
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((_QWORD *)this + 12);
  v11 = 0;
  v12 = 0;
  if ( !v5 )
    goto LABEL_8;
  v8 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v5 + 288LL))(
         v5,
         a2,
         &v11) )
  {
    v9 = *((_QWORD *)this + 11);
    if ( !v9
      || (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v9 + 288LL))(
           v9,
           a2,
           &v12) )
    {
      v3 = 1;
    }
  }
  if ( !v11 && !v12 )
LABEL_8:
    v8 = 0;
  result = v3;
  *a3 = v8;
  return result;
}
