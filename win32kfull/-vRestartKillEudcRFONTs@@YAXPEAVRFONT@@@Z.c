void __fastcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v4; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = a1;
    do
    {
      v1 = (struct RFONT *)*((_QWORD *)v1 + 84);
      v4 = (struct _FONTOBJ *)v2;
      v3[0] = *((_QWORD *)v2 + 16);
      RFONTOBJ::vDeleteRFONT(&v4, 0LL, (struct PFFOBJ *)v3, 0);
      v4 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
      v2 = v1;
    }
    while ( v1 );
  }
}
