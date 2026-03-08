/*
 * XREFs of PiDqPnPGetObjectProperty @ 0x1406CD8A8
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406CB9F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPropertyCallback @ 0x1406CC9A0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140746928 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14083A4C8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _PnpGetGenericStoreProperty @ 0x1406D13D0 (_PnpGetGenericStoreProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectProperty(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR pszSrc,
        PVOID *a7)
{
  PVOID *v7; // rsi
  __int128 v8; // xmm0
  const wchar_t *v9; // r12
  void *Pool2; // rdi
  __int64 v14; // rbp
  int PWSTR; // ebx
  int ObjectProperty; // eax
  _DWORD v18[18]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+C8h] [rbp+20h] BYREF

  v7 = a7;
  v8 = *(_OWORD *)a4;
  v9 = pszSrc;
  v18[0] = 0;
  v20 = 512;
  *(_OWORD *)a7 = v8;
  Pool2 = 0LL;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(a4 + 16);
  LODWORD(v14) = 0;
  *((_DWORD *)v7 + 5) = a5;
  v7[4] = 0LL;
  v7[5] = 0LL;
  a7 = v7 + 3;
  PWSTR = PnpAllocatePWSTR(v9, 0x7FFFFFFFuLL, 0x58706E50u, v7 + 3);
  if ( PWSTR >= 0 )
  {
    do
    {
      if ( v20 > (unsigned int)v14 )
      {
        v14 = v20;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x58706E50u);
        Pool2 = (void *)ExAllocatePool2(256LL, v14, 1483763280LL);
        if ( !Pool2 )
        {
          PWSTR = -1073741670;
          goto LABEL_18;
        }
      }
      v20 = 0;
      if ( a2 )
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           a1,
                           a2,
                           a3,
                           (__int64)v9,
                           a4,
                           (__int64)v18,
                           (__int64)Pool2,
                           v14,
                           (__int64)&v20,
                           0);
      else
        ObjectProperty = PnpGetGenericStoreProperty(*(_QWORD *)&PiPnpRtlCtx, a3, v9, a4, v18, Pool2, v14, &v20);
      PWSTR = ObjectProperty;
    }
    while ( ObjectProperty == -1073741789 );
    if ( ObjectProperty >= 0 )
    {
      *((_DWORD *)v7 + 8) = v18[0];
      *((_DWORD *)v7 + 9) = v20;
      v7[5] = Pool2;
      return (unsigned int)PWSTR;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x58706E50u);
  }
  if ( PWSTR == -1073741275 )
  {
    return 0;
  }
  else
  {
LABEL_18:
    if ( *a7 )
      ExFreePoolWithTag(*a7, 0x58706E50u);
  }
  return (unsigned int)PWSTR;
}
