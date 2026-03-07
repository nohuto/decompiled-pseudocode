BOOL __stdcall EngEraseSurface(SURFOBJ *pso, RECTL *prcl, ULONG iColor)
{
  struct SURFACE *v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL));
  if ( !v5 )
    return 0;
  v7 = *(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v7, pso, 0LL, 0);
  vDIBSolidBlt(v5, prcl, 0LL, iColor, 0);
  return 1;
}
