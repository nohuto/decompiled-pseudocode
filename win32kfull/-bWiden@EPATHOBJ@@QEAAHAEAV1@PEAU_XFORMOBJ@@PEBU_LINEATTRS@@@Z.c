_BOOL8 __fastcall EPATHOBJ::bWiden(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        const struct _LINEATTRS *a4)
{
  BOOL v5; // ebx
  _BYTE v7[1312]; // [rsp+20h] [rbp-548h] BYREF

  WIDENER::WIDENER((WIDENER *)v7, a2, (struct EXFORMOBJ *)a3, a4);
  v5 = WIDENER::bValid((WIDENER *)v7);
  if ( v5 )
    WIDENER::vMakeItWide((WIDENER *)v7, this);
  WIDENER::~WIDENER((WIDENER *)v7);
  return v5;
}
