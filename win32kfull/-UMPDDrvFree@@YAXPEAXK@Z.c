void __fastcall UMPDDrvFree(PVOID a1, int a2)
{
  if ( a1 && a1 >= MmSystemRangeStart && a2 == (_DWORD)a1 )
    Win32FreePool(a1);
}
