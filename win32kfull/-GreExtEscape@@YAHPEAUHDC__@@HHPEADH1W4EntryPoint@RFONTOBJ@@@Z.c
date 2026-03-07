__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+48h] [rbp-21h] BYREF
  int v13; // [rsp+4Ch] [rbp-1Dh]
  _QWORD v14[2]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v15[7]; // [rsp+60h] [rbp-9h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v10 = 0;
  if ( v14[0] )
  {
    v13 = *(unsigned __int16 *)(v14[0] + 12LL);
    v12 = 25;
    v10 = GreExtEscapeInternal((struct DCOBJ *)v14, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v15, a1);
    if ( v15[0] )
    {
      v13 = *(unsigned __int16 *)(v15[0] + 12LL);
      v12 = 25;
      v10 = GreExtEscapeInternal((struct DCOBJ *)v15, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
    }
    XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v15);
  }
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v10;
}
