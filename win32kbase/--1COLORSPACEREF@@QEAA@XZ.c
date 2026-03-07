void __fastcall COLORSPACEREF::~COLORSPACEREF(struct OBJECT **this)
{
  struct OBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
