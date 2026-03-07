__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  NTSTATUS KeyTransacted; // edi
  size_t v11; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  wchar_t *v16; // rax
  size_t pcchLength; // [rsp+58h] [rbp-30h] BYREF

  pcchLength = 0LL;
  KeyTransacted = RegRtlCreateKeyTransacted(Handle);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RtlUnalignedStringCchLengthW(pszSrc, 0x7FFFuLL, &pcchLength);
    if ( KeyTransacted >= 0 )
    {
      v11 = pcchLength + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * (pcchLength + 1), 1279739218LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        KeyTransacted = RtlStringCchCopyExW(Pool2, v11, pszSrc, 0LL, 0LL, 0x100u);
        if ( !KeyTransacted )
        {
          v14 = (unsigned __int64)v13;
          v15 = (__int64)Handle;
          if ( !Handle && !wcsnicmp(v13, L"\\REGISTRY\\MACHINE\\", 0x12uLL) )
          {
            v15 = 2147483650LL;
            v14 = (unsigned __int64)(v13 + 18);
          }
          while ( 1 )
          {
            v16 = wcschr((const wchar_t *)v14, 0x5Cu);
            v14 = (unsigned __int64)v16;
            if ( v16 )
            {
              *v16 = 0;
              do
                v14 += 2LL;
              while ( *(_WORD *)v14 == 92 );
              v14 &= -(__int64)(*(_WORD *)v14 != 0);
            }
            KeyTransacted = RegRtlCreateKeyTransacted(v15);
            if ( (HANDLE)v15 != Handle && v15 != 2147483650LL )
              ZwClose((HANDLE)v15);
            if ( KeyTransacted )
              break;
            if ( !v14 )
            {
              *a7 = 0LL;
              break;
            }
            v15 = 0LL;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)KeyTransacted;
}
