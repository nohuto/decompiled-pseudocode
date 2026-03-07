__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  wchar_t *Pool2; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  pcchLength = 0LL;
  pullResult = 0LL;
  *a4 = 0LL;
  if ( pszSrc )
  {
    v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
    if ( v4 >= 0 )
    {
      if ( !pcchLength )
        return (unsigned int)v4;
      v4 = RtlULongLongMult(pcchLength + 1, 2uLL, &pullResult);
      if ( v4 >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, pullResult, a3);
        *a4 = Pool2;
        if ( Pool2 )
        {
          v4 = RtlStringCbCopyW(Pool2, pullResult, pszSrc);
          if ( v4 >= 0 )
            return (unsigned int)v4;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v4;
}
