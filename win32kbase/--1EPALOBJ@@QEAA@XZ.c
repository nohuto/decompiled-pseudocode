void __fastcall EPALOBJ::~EPALOBJ(int **this)
{
  int *v1; // rcx

  v1 = *this;
  if ( v1 )
    HmgDecrementShareReferenceCountEx(v1, 0LL);
}
