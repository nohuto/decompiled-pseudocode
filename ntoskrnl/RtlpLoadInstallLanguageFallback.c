/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x140843474
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140844000 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A72CB8 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x14039C31C (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     LdrpOpenKey @ 0x14084370C (LdrpOpenKey.c)
 *     LdrpQueryValueKey @ 0x1408446D0 (LdrpQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v5; // rsi
  WCHAR *v6; // rax
  __int64 v7; // r8
  int v8; // ebx
  WCHAR v10; // ax
  const WCHAR *v11; // rdi
  WCHAR *v12; // rcx
  WCHAR i; // ax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+48h]

  Handle = 0LL;
  v17 = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (WCHAR *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      v18 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v8 = LdrpOpenKey(&DestinationString, 0LL, v7, &Handle);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v14) = 344;
        v8 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v14);
        if ( v8 >= 0 )
        {
          if ( v18 != 1 )
            goto LABEL_15;
          v10 = *v5;
          v11 = v5;
          while ( v10 )
          {
            v12 = (WCHAR *)(v11 + 1);
            if ( v10 == 44 )
            {
              *v11++ = 0;
              for ( i = *v12; i == 32; i = *v11 )
                ++v11;
              break;
            }
            v10 = *v12;
            ++v11;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v17) )
          {
            *a2 = v17;
            if ( *v11 )
            {
              RtlInitUnicodeString(&DestinationString, v11);
              if ( RtlCultureNameToLCID(&DestinationString.Length, &v17) )
              {
                *a3 = v17;
              }
              else
              {
                v8 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_15:
            v8 = -1073741823;
          }
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v8;
}
