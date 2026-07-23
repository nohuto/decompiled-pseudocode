/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x140790514
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14078FE84 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098251C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x1403A8AE8 (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlCultureNameToLCID @ 0x14078EEE0 (RtlCultureNameToLCID.c)
 *     LdrpQueryValueKey @ 0x14078F4AC (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x14078F948 (LdrpOpenKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  _WORD *v5; // rsi
  _WORD *v6; // rax
  __int64 v7; // r8
  int v8; // ebx
  WCHAR v10; // ax
  const WCHAR *v11; // rdi
  WCHAR *v12; // rcx
  WCHAR i; // ax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+48h] BYREF

  Handle = 0LL;
  Lcid = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = MuiRegAllocArray(a1, 0xACu);
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
        LODWORD(v14) = 8;
        v8 = LdrpQueryValueKey(Handle, &DestinationString, &v18, v5, (ULONG *)&v14);
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
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            *a2 = Lcid;
            if ( *v11 )
            {
              RtlInitUnicodeString(&DestinationString, v11);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                *a3 = Lcid;
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
