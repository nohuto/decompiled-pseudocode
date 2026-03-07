void __fastcall LFONTOBJ::~LFONTOBJ(struct LFONT **this)
{
  struct LFONT *v1; // rcx

  v1 = *this;
  if ( v1 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v1);
}
