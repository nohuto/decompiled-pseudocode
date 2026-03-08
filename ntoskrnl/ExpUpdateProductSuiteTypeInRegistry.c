/*
 * XREFs of ExpUpdateProductSuiteTypeInRegistry @ 0x140B6505C
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExVerifySuite @ 0x1403A1420 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 */

__int64 ExpUpdateProductSuiteTypeInRegistry()
{
  HANDLE v0; // r12
  unsigned int v1; // edi
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  struct _PRIVILEGE_SET *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // r15d
  const WCHAR *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rax
  unsigned int v36; // r15d
  unsigned int v37; // ebx
  size_t v38; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING v39; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  struct _PRIVILEGE_SET v41[38]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = ExpProductTypeKey;
  v1 = 758;
  DestinationString_8 = 0LL;
  v39 = 0LL;
  result = (__int64)memset(v41, 0, 0x2F6uLL);
  if ( ExpSetupModeDetected )
    return result;
  RtlInitUnicodeString(&DestinationString_8, L"ProductType");
  v3 = -1LL;
  if ( MEMORY[0xFFFFF78000000264] == 2 )
  {
    v10 = L"LanmanNT";
  }
  else
  {
    if ( MEMORY[0xFFFFF78000000264] != 3 )
    {
      RtlInitUnicodeString(&v39, L"WinNT");
      v4 = -1LL;
      do
        ++v4;
      while ( aWinnt_0[v4] );
      v5 = 2 * v4 + 2;
      goto LABEL_7;
    }
    v10 = L"ServerNT";
  }
  RtlInitUnicodeString(&v39, v10);
  v5 = 18;
LABEL_7:
  LODWORD(v38) = v5;
  v6 = NtSetValueKey((__int64)v0, &DestinationString_8, 0, 1u, (struct _PRIVILEGE_SET *)v39.Buffer, v38);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v6, 1uLL, 0LL);
  RtlInitUnicodeString(&DestinationString_8, L"ProductSuite");
  v7 = v41;
  if ( ExVerifySuite(SmallBusiness) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( aSmallBusiness[v11] );
    v12 = 2 * v11 + 2;
    if ( v12 < 0x2F6 )
    {
      memmove(v41, L"Small Business", v12);
      v7 = (struct _PRIVILEGE_SET *)((char *)v41 + v12);
      v1 = 758 - v12;
    }
  }
  if ( ExVerifySuite(Enterprise) )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( aEnterprise[v13] );
    v14 = 2 * v13 + 2;
    if ( v1 > v14 )
    {
      memmove(v7, L"Enterprise", v14);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v14);
      v1 -= v14;
    }
  }
  if ( ExVerifySuite(BackOffice) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( aBackoffice[v15] );
    v16 = 2 * v15 + 2;
    if ( v1 > v16 )
    {
      memmove(v7, L"BackOffice", v16);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v16);
      v1 -= v16;
    }
  }
  if ( ExVerifySuite(CommunicationServer) )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( aCommunications[v17] );
    v18 = 2 * v17 + 2;
    if ( v1 > v18 )
    {
      memmove(v7, L"CommunicationServer", v18);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v18);
      v1 -= v18;
    }
  }
  if ( ExVerifySuite(TerminalServer) )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( aTerminalServer_0[v8] );
    v9 = 2 * v8 + 2;
    if ( v1 > v9 )
    {
      memmove(v7, L"Terminal Server", v9);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v9);
      v1 -= v9;
    }
  }
  if ( ExVerifySuite(SmallBusinessRestricted) )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( aSmallBusinessR[v19] );
    v20 = 2 * v19 + 2;
    if ( v1 > v20 )
    {
      memmove(v7, L"Small Business(Restricted)", v20);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v20);
      v1 -= v20;
    }
  }
  if ( ExVerifySuite(EmbeddedNT) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( aEmbeddednt[v21] );
    v22 = 2 * v21 + 2;
    if ( v1 > v22 )
    {
      memmove(v7, L"EmbeddedNT", v22);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v22);
      v1 -= v22;
    }
  }
  if ( ExVerifySuite(DataCenter) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( aDatacenter[v23] );
    v24 = 2 * v23 + 2;
    if ( v1 > v24 )
    {
      memmove(v7, L"DataCenter", v24);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v24);
      v1 -= v24;
    }
  }
  if ( ExVerifySuite(Personal) )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( aPersonal[v25] );
    v26 = 2 * v25 + 2;
    if ( v1 > v26 )
    {
      memmove(v7, L"Personal", v26);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v26);
      v1 -= v26;
    }
  }
  if ( ExVerifySuite(Blade) )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( aBlade[v27] );
    v28 = 2 * v27 + 2;
    if ( v1 > v28 )
    {
      memmove(v7, L"Blade", v28);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v28);
      v1 -= v28;
    }
  }
  if ( ExVerifySuite(EmbeddedRestricted) )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( aEmbeddedRestri[v29] );
    v30 = 2 * v29 + 2;
    if ( v1 > v30 )
    {
      memmove(v7, L"Embedded(Restricted)", v30);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v30);
      v1 -= v30;
    }
  }
  if ( ExVerifySuite(SecurityAppliance) )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( aSecurityApplia[v31] );
    v32 = 2 * v31 + 2;
    if ( v1 > v32 )
    {
      memmove(v7, L"Security Appliance", v32);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v32);
      v1 -= v32;
    }
  }
  if ( ExVerifySuite(StorageServer) )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( aStorageServer[v33] );
    v34 = 2 * v33 + 2;
    if ( v1 > v34 )
    {
      memmove(v7, L"Storage Server", v34);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v34);
      v1 -= v34;
    }
  }
  if ( ExVerifySuite(ComputeServer) )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( aComputeServer[v35] );
    v36 = 2 * v35 + 2;
    if ( v1 > v36 )
    {
      memmove(v7, L"Compute Server", v36);
      v7 = (struct _PRIVILEGE_SET *)((char *)v7 + v36);
      v1 -= v36;
    }
  }
  if ( ExVerifySuite(PhoneNT) )
  {
    do
      ++v3;
    while ( aPhonent[v3] );
    v37 = 2 * v3 + 2;
    if ( v1 > v37 )
    {
      memmove(v7, L"PhoneNT", v37);
      v1 -= v37;
    }
  }
  LODWORD(v38) = 760 - v1;
  result = NtSetValueKey((__int64)v0, &DestinationString_8, 0, 7u, v41, v38);
  if ( (int)result < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)result, 2uLL, 0LL);
  return result;
}
