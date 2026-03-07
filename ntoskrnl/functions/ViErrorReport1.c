__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
