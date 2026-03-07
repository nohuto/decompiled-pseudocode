__int64 __fastcall RegRtlDeletePathInternal(void *a1, const wchar_t *a2, char a3, __int64 a4, int a5)
{
  int v9; // ebx
  size_t v10; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v12; // rdi
  int i; // eax
  wchar_t *v14; // rax
  int v16; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  size_t pcchLength[2]; // [rsp+40h] [rbp-10h] BYREF

  pcchLength[0] = 0LL;
  Handle = 0LL;
  a5 = 0;
  v16 = 0;
  v9 = RtlUnalignedStringCchLengthW(a2, 0x7FFFuLL, pcchLength);
  if ( v9 >= 0 )
  {
    v10 = pcchLength[0] + 1;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2 * (pcchLength[0] + 1), 1279739218LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      v9 = RtlStringCchCopyExW(Pool2, v10, a2, 0LL, 0LL, 0x100u);
      if ( !v9 )
      {
        if ( !a3 )
          goto LABEL_7;
        for ( i = RegRtlDeleteTreeInternal(a1, v12, a4, 0); ; i = RegRtlDeleteKeyTransacted(a1, v12, 0LL) )
        {
          v9 = i;
          if ( i )
          {
            if ( i != -1073741772 )
              break;
          }
          v14 = wcsrchr(v12, 0x5Cu);
          if ( !v14 )
            break;
          do
          {
            *v14 = 0;
            if ( v14 == v12 )
              break;
            --v14;
          }
          while ( *v14 == 92 );
LABEL_7:
          v9 = RegRtlOpenKeyTransacted(a1, v12, 0, 1u, &Handle, a4);
          if ( v9 )
          {
            if ( v9 != -1073741772 )
            {
              if ( v9 == -1073741444 )
                v9 = 0;
              break;
            }
          }
          else
          {
            v9 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v16, 0LL, 0LL);
            ZwClose(Handle);
            if ( v9 != -1073741444 && v9 )
              break;
            if ( a5 || v16 )
            {
              v9 = -1073741535;
              break;
            }
          }
        }
      }
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v9;
}
