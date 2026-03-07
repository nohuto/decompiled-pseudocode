int __fastcall CmGetDeviceChildren(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  wchar_t *v5; // rdi
  unsigned int v7; // ebx
  int result; // eax
  unsigned int i; // r14d
  int v10; // ecx
  size_t *pcchRemaining; // [rsp+20h] [rbp-E0h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-E0h]
  _DWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszSrc[200]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[200]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13[0] = 0;
  v5 = a3;
  DestinationString = 0LL;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v7 = *a4;
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(
               a1,
               (__int64)&DestinationString,
               2u,
               (__int64)pszSrc,
               (__int64)pcchRemaining,
               (__int64)v13);
    if ( result >= 0 )
    {
      if ( v13[0] )
      {
        for ( i = v13[0] + 1; ; i += v10 )
        {
          if ( v7 )
          {
            v13[1] = 2 * v7;
            if ( !(unsigned __int8)PnpMultiSzAppend(v5) )
            {
              v5 = 0LL;
              v7 = 0;
            }
          }
          result = RtlStringCchCopyExW(pszDest, 0xC8uLL, pszSrc, 0LL, 0LL, 0x800u);
          if ( result < 0 )
            break;
          result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
          if ( result < 0 )
            break;
          result = NtPlugPlayGetDeviceRelatedDevice(
                     a1,
                     (__int64)&DestinationString,
                     3u,
                     (__int64)pszSrc,
                     (__int64)pcchRemaininga,
                     (__int64)v13);
          if ( result == -1073741810 || (v10 = v13[0]) == 0 )
          {
            *a4 = i;
            result = 0;
            if ( v7 < i )
              return -1073741789;
            return result;
          }
          if ( result < 0 )
            return result;
          if ( v13[0] > 0xC8u )
            return -1073741811;
          if ( 2 * (unsigned __int64)(unsigned int)(v13[0] - 1) >= 0x190 )
            _report_rangecheckfailure();
          pszSrc[v13[0] - 1] = 0;
        }
      }
      else
      {
        return -1073741275;
      }
    }
  }
  return result;
}
