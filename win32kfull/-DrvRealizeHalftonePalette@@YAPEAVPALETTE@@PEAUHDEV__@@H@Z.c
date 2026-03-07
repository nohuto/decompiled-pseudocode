struct PALETTE *__fastcall DrvRealizeHalftonePalette(Gre::Base *a1, int a2)
{
  int v4; // r14d
  struct Gre::Base::SESSION_GLOBALS *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  HDC DisplayDC; // rdi
  HPALETTE CompatibleHalftonePalette; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  v16 = *((_QWORD *)v5 + 17);
  GreAcquireSemaphore(v16);
  v6 = *((_QWORD *)a1 + 223);
  if ( !a2 && v6 )
    goto LABEL_11;
  DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
  if ( !DisplayDC )
    goto LABEL_12;
  if ( !v6 )
  {
    CompatibleHalftonePalette = (HPALETTE)GreCreateCompatibleHalftonePalette(v7, 10);
    EPALOBJ::EPALOBJ((EPALOBJ *)&v15, CompatibleHalftonePalette);
    v10 = v15;
    if ( v15 )
    {
      *((_QWORD *)a1 + 223) = v15;
      DEC_SHARE_REF_CNT(v10);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)a1 + 223);
  if ( v11 )
  {
    v12 = GreSelectPalette(DisplayDC, *v11, 1LL);
    if ( v12 )
    {
      v15 = *((_QWORD *)a1 + 223);
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v15);
      GreRealizePalette(DisplayDC);
      GreSelectPalette(DisplayDC, v12, 0LL);
      v4 = 1;
    }
  }
  GrepDeleteDC(DisplayDC, 0x400000LL);
  if ( v4 )
LABEL_11:
    v13 = *((_QWORD *)a1 + 223);
  else
LABEL_12:
    v13 = *((_QWORD *)v5 + 750);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return (struct PALETTE *)v13;
}
