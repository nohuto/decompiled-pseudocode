void __stdcall ExFreePool(PVOID P)
{
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)P);
}
