__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax
  __int64 v4; // rdi

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    v4 = *(_QWORD *)(Prop + 8);
    if ( v4 )
    {
      SetOldRedirectionBitmap(a1, 0LL);
      DeleteOrSetRedirectionBitmap(a1, v4, 1);
      return 1;
    }
  }
  return v1;
}
