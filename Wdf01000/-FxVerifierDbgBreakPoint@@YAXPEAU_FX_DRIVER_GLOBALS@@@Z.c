void __fastcall FxVerifierDbgBreakPoint(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v1; // rax
  char ext[4]; // [rsp+40h] [rbp+8h] BYREF

  strcpy(ext, "sys");
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    FxDriverGlobals->Public.DriverName,
    ext,
    FxDriverGlobals->Public.DriverName,
    ext);
  if ( *(_BYTE *)(v1 + 326) )
  {
    *(_BYTE *)(v1 + 347) = 1;
    DbgBreakPoint();
  }
}
