void __fastcall PrintDebugMessage(int a1, const void *a2, const void *a3, const void *a4, const void *a5)
{
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF

  if ( (_BYTE)KdDebuggerEnabled )
  {
    RtlStringCchPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", a1, a2, a3, a4, a5);
    DbgCommandString("ACPI", pszDest);
  }
  else
  {
    RtlStringCchPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", a1, a2, a3, a4, a5);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
}
