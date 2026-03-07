bool __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  bool IsAddressValid; // di
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool result; // al

  IsAddressValid = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12;
    if ( v9 )
    {
      while ( MmIsAddressValidEx(v8) )
      {
        v8 += 4096LL;
        if ( !--v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 8) == *a3 )
      {
        v7 = a1;
        if ( IoIsPartialDumpRetry() && (unsigned __int8)(*(_BYTE *)(a1 + 44) - 3) <= 1u )
          *(_BYTE *)(a1 + 44) = 1;
        if ( *(_BYTE *)(a1 + 44) == 1 )
        {
          v10 = *(int *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) == v11 + v10 + *(_QWORD *)(a1 + 24) && (_DWORD)v10 == a2 )
            IsAddressValid = MmIsAddressValidEx(v11);
        }
      }
    }
  }
  result = IsAddressValid;
  *a3 = v7;
  return result;
}
