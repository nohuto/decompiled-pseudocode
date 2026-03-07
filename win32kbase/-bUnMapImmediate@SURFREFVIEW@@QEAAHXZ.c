__int64 __fastcall SURFREFVIEW::bUnMapImmediate(SURFACE **this, void *a2, struct _ERESOURCE *a3)
{
  __int64 result; // rax
  SURFACE *v5; // rcx

  result = 0LL;
  v5 = *this;
  if ( v5 )
    result = SURFACE::bUnMapImmediate(v5, a2, a3);
  *this = 0LL;
  return result;
}
