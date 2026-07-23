/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x14073AEAC
 * Callers:
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402526B0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1406111D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14065D3B0 (RtlGetOwnerSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x1406D9220 (ObSetSecurityObjectByPointer.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407195A0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140738C50 (RtlGetGroupSecurityDescriptor.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14073AB68 (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14073B19C (PipGetRegistryDwordWithFallback.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, __int64 a2, ACL *a3, __int64 a4, char a5)
{
  int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r14d
  PVOID v12; // r13
  __int64 v13; // rdx
  int v14; // r14d
  char RegistryDwordWithFallback; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  int v21; // ebx
  __int64 v22; // rdx
  int v23; // r15d
  void *RegistrySecurityWithFallback; // rax
  char v25; // r8
  void *v26; // r14
  char v27; // r12
  __int64 i; // rax
  int OwnerSecurityDescriptor; // esi
  char v30; // r13
  _QWORD *v31; // rdx
  int v33; // r12d
  unsigned int v34; // esi
  BOOLEAN SaclPresent; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-60h] BYREF
  char v37; // [rsp+42h] [rbp-5Fh]
  char v38; // [rsp+43h] [rbp-5Eh]
  char v39; // [rsp+44h] [rbp-5Dh]
  int v40; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-55h] BYREF
  int v42; // [rsp+50h] [rbp-51h] BYREF
  PSID Owner; // [rsp+58h] [rbp-49h] BYREF
  PVOID v44; // [rsp+60h] [rbp-41h] BYREF
  PACL Sacl; // [rsp+68h] [rbp-39h] BYREF
  PVOID P; // [rsp+70h] [rbp-31h] BYREF
  __int64 v47; // [rsp+78h] [rbp-29h]
  _OWORD v48[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-1h]

  v47 = a4;
  v6 = (int)a3;
  Sacl = a3;
  SaclPresent = 0;
  v9 = *(_QWORD *)(a1 + 312);
  Owner = 0LL;
  if ( a1 )
    v10 = *(_QWORD *)(v9 + 40);
  else
    v10 = 0LL;
  v11 = *(_DWORD *)(v9 + 32);
  v12 = 0LL;
  v13 = *(_QWORD *)(v10 + 48);
  v38 = 0;
  P = 0LL;
  v44 = 0LL;
  v14 = v11 & 0x800;
  v41 = 0;
  v42 = 0;
  v40 = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v13, a2, (_DWORD)a3, a4, (__int64)&v41);
  v16 = *(_QWORD *)(v10 + 48);
  v37 = RegistryDwordWithFallback;
  v17 = PipGetRegistryDwordWithFallback(27, v16, a2, v6, a4, (__int64)&v42);
  v18 = *(_QWORD *)(v10 + 48);
  v39 = v17;
  PipGetRegistryDwordWithFallback(28, v18, a2, v6, a4, (__int64)&v40);
  if ( a5 || (v19 = *(_QWORD *)(a1 + 24)) == 0 )
    v19 = a1;
  v20 = 0;
  while ( v19 )
  {
    v20 |= *(_DWORD *)(v19 + 52);
    v19 = *(_QWORD *)(v19 + 24);
  }
  v21 = 0;
  v22 = *(_QWORD *)(v10 + 48);
  v23 = (v40 | v20) & 0x5010F;
  v40 = 0;
  RegistrySecurityWithFallback = (void *)PipGetRegistrySecurityWithFallback(
                                           v47 & -(__int64)(v14 != 0),
                                           v22,
                                           a2,
                                           v14 != 0 ? (unsigned int)Sacl : 0,
                                           v47 & -(__int64)(v14 != 0));
  v26 = RegistrySecurityWithFallback;
  if ( RegistrySecurityWithFallback )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(RegistrySecurityWithFallback, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    v33 = 0;
    if ( Owner )
    {
      v21 = 1;
      v33 = 1;
    }
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v26, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    if ( Owner )
    {
      v21 = v33 | 2;
      v33 |= 2u;
    }
    OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    if ( SaclPresent )
    {
      v21 = v33 | 8;
      v33 |= 8u;
    }
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_22;
    v34 = v41;
    if ( SaclPresent )
      v21 = v33 | 4;
    v27 = v37;
    goto LABEL_41;
  }
  v27 = v37;
  if ( v37 )
  {
    v34 = v41;
    v49 = 0LL;
    memset(v48, 0, sizeof(v48));
    v26 = IopCreateDefaultDeviceSecurityDescriptor(v41, v23, v25, v48, (ACL **)&P, (__int64)&v44, &v40);
    if ( !v26 )
    {
      v12 = v44;
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_23;
    }
    v21 = v40;
    v38 = 1;
LABEL_41:
    if ( v27 )
      *(_DWORD *)(a1 + 72) = v34;
  }
  if ( v39 && v42 )
    *(_DWORD *)(a1 + 48) |= 8u;
  *(_DWORD *)(a1 + 52) = v23 | *(_DWORD *)(a1 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v23;
  OwnerSecurityDescriptor = 0;
  if ( v26 )
    OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v21, (__int64)v26);
  v30 = v38;
  v31 = (_QWORD *)a1;
  do
  {
    if ( (*(_DWORD *)(v31[1] + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) + 396LL) |= 0xC00000u;
    if ( v30 && v31[34] )
      *(_DWORD *)(v31[39] + 32LL) |= 0x800u;
    v31 = (_QWORD *)v31[3];
  }
  while ( v31 );
  v12 = v44;
LABEL_22:
  if ( v26 && !v38 )
    ExFreePoolWithTag(v26, 0);
LABEL_23:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
