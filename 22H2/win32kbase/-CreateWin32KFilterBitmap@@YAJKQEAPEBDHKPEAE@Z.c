/*
 * XREFs of ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C00698A0
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x1C0069460 (InitializeWin32KSyscallFilter.c)
 * Callees:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C00699C4 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall CreateWin32KFilterBitmap(
        unsigned int a1,
        const char **const a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // ebx
  const char **v7; // rdi
  unsigned int v9; // ebp
  __int64 (*ExportedRoutineByName)(void); // rax
  int v11; // eax
  unsigned __int64 v12; // rcx
  char Dest[272]; // [rsp+20h] [rbp-148h] BYREF

  v5 = 0;
  v7 = a2;
  if ( a1 && a2 && a5 )
  {
    memset(a5, 255, a4);
    v9 = 0;
    if ( !a1 )
      return v5;
    while ( (int)RtlStringCbPrintfA(Dest, 0x104uLL, "__win32kstub_%s", *v7) >= 0 )
    {
      ExportedRoutineByName = (__int64 (*)(void))RtlFindExportedRoutineByName(gpvWin32kImageBase, Dest);
      if ( ExportedRoutineByName )
      {
        v11 = ExportedRoutineByName();
        v12 = (unsigned __int64)v11 >> 3;
        if ( (unsigned int)v12 >= a4 )
          return 122;
        a5[(unsigned int)v12] ^= 1 << (v11 & 7);
      }
      else
      {
        v5 = 127;
      }
      memset(Dest, 0, 0x104uLL);
      ++v9;
      ++v7;
      if ( v9 >= a1 )
        return v5;
    }
  }
  return 87LL;
}
