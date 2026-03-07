char __fastcall CcComputeNextScanTime(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx

  *a4 = 0LL;
  result = CcIsWriteBehindThreadpoolAtLowPriority(a1);
  if ( result )
  {
    v9 = 0x9896800uLL / (unsigned int)KeMaximumIncrement;
    if ( CcEnablePerVolumeLazyWriter )
      v10 = (_DWORD *)(v7 + 708);
    else
      v10 = (_DWORD *)(v6 + 780);
    v11 = *a3;
    if ( *a3 != 0x7FFFFFFFFFFFFFFFLL && (__int64)(v11 + v9) > MEMORY[0xFFFFF78000000320] )
    {
      v12 = v9 + v11 - MEMORY[0xFFFFF78000000320];
      *v10 = 0;
      *v8 = v12;
    }
    result = CcMaxWorklessLazywriteScans;
    if ( *v10 >= (unsigned int)CcMaxWorklessLazywriteScans )
    {
      *v10 = 0;
      *v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return result;
}
