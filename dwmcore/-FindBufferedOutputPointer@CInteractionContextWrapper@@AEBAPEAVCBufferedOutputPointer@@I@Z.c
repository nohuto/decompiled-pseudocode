struct CBufferedOutputPointer *__fastcall CInteractionContextWrapper::FindBufferedOutputPointer(
        CInteractionContextWrapper *this,
        int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  _DWORD **v4; // r11
  __int64 v5; // rbx
  _DWORD **v6; // rcx
  __int64 v7; // r10

  v2 = 0LL;
  v3 = 0;
  if ( *((int *)this + 152) > 0 )
  {
    v4 = (_DWORD **)*((_QWORD *)this + 75);
    v5 = *((int *)this + 152);
    v6 = v4;
    v7 = 0LL;
    while ( a2 != **v6 )
    {
      ++v3;
      ++v7;
      ++v6;
      if ( v7 >= v5 )
        return (struct CBufferedOutputPointer *)v2;
    }
    return (struct CBufferedOutputPointer *)v4[v3];
  }
  return (struct CBufferedOutputPointer *)v2;
}
