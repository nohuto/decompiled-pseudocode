void __fastcall MulDisablePDEV(struct PDEV ***pv)
{
  struct PDEV **i; // rbx

  if ( qword_1C02D55A8 )
    qword_1C02D55A8(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7);
  EngFreeMem(pv);
}
