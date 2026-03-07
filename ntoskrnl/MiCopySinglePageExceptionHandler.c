void __fastcall __noreturn MiCopySinglePageExceptionHandler(int **a1, __int64 a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x1Au, 0x45000uLL, a3, **a1, ((unsigned __int64)MiFlags >> 12) & 1);
}
