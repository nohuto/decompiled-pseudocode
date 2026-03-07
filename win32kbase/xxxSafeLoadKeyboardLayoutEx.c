HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        struct tagKBDTABLE_MULT_INTERNAL *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  void *v13; // rbp
  unsigned int i; // ebx
  void *v16; // rax
  void *v17; // rcx

  KeyboardLayout = 0LL;
  v13 = ConvertHandleAndVerifyLoc(Handle);
  if ( v13 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87);
        *(_DWORD *)a6 = 0;
LABEL_6:
        ZwClose(v13);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v17 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v17 )
            ZwClose(v17);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v16 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v16;
          if ( !v16 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v13, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_6;
  }
  if ( (a9 & 0x40000000) != 0 )
    PsGetThreadProcessId(*(PETHREAD *)gptiCurrent);
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0);
  return KeyboardLayout;
}
