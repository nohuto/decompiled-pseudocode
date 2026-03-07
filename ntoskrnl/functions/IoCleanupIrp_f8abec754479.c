__int64 (__fastcall *__fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1))()
{
  __int64 (__fastcall *result)(); // rax
  bool v2; // zf

  result = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2758uLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v2 )
    return IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  return result;
}
