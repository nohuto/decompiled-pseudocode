struct D2D_SIZE_U __fastcall CDrawListBitmap::GetSize(CDrawListBitmap *this, _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, char *); // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 1);
  *a2 = 0LL;
  if ( v2 )
    *a2 = *(_QWORD *)(**v2)(v2, &v5);
  return (struct D2D_SIZE_U)a2;
}
