struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(CDxHandleBitmapRealization *this, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this - 11);
  if ( v2 )
  {
    (**(void (__fastcall ***)(__int64))(v2 + 96))(v2 + 96);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return (struct D2D_SIZE_U)a2;
}
