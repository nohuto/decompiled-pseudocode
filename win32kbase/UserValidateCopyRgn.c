struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    v4 = HmgLockIgnoreOwner(a1, a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 80);
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
      if ( !v6 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
        {
          GreDeleteObject(RectRgnIndirect, v7);
          return 0LL;
        }
      }
    }
  }
  return RectRgnIndirect;
}
