__int64 __fastcall UMPDOBJ::pxo(UMPDOBJ *this, struct _XFORMOBJ **a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 1LL;
  v3 = 0;
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 272), (const void **)a2, 4u, &v3);
}
