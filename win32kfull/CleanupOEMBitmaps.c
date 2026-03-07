__int64 CleanupOEMBitmaps()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  v0 = &gOemBitmapSet;
  v1 = 18LL;
  do
  {
    *((_DWORD *)v0 + 2) = 0;
    *((_DWORD *)v0 + 3) = 0;
    if ( *v0 )
    {
      GreSetBitmapOwner(*v0, 2147483650LL);
      result = GreDeleteObject(*v0);
      *v0 = 0LL;
    }
    v0 += 95;
    --v1;
  }
  while ( v1 );
  return result;
}
