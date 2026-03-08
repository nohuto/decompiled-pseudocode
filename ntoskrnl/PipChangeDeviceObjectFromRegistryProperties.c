/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x1406DB6C0 (ObSetSecurityObjectByPointer.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14071C1D0 (RtlGetSaclSecurityDescriptor.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14074D0CC (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14074D604 (PipGetRegistryDwordWithFallback.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140750BE0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140750C20 (RtlGetGroupSecurityDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407F092C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, __int64 a2, ACL *a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int v7; // esi
  __int64 v8; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r14d
  int v14; // r14d
  char RegistryDwordWithFallback; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  int v21; // esi
  __int64 v22; // rdx
  unsigned int v23; // r15d
  void *RegistrySecurityWithFallback; // rax
  __int64 v25; // r8
  void *v26; // r14
  int OwnerSecurityDescriptor; // edi
  int v28; // r13d
  __int64 i; // rax
  char v30; // r13
  BOOLEAN SaclPresent; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-60h] BYREF
  char v34; // [rsp+42h] [rbp-5Fh]
  char v35; // [rsp+43h] [rbp-5Eh]
  char v36; // [rsp+44h] [rbp-5Dh]
  int v37; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-55h] BYREF
  int v39; // [rsp+50h] [rbp-51h] BYREF
  PACL Sacl; // [rsp+58h] [rbp-49h] BYREF
  PSID Owner; // [rsp+60h] [rbp-41h] BYREF
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  PVOID v43; // [rsp+70h] [rbp-31h] BYREF
  __int64 v44; // [rsp+78h] [rbp-29h]
  _OWORD v45[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-1h]

  v5 = a1;
  v44 = a4;
  Sacl = a3;
  SaclPresent = 0;
  Owner = 0LL;
  v7 = (int)a3;
  v8 = a1 + 312;
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
  else
    v10 = 0LL;
  v11 = *(_QWORD *)v8;
  v12 = *(_QWORD *)(v10 + 48);
  v34 = 0;
  P = 0LL;
  v13 = *(_DWORD *)(v11 + 32);
  v43 = 0LL;
  v14 = v13 & 0x800;
  v38 = 0;
  v39 = 0;
  v37 = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v12, a2, (_DWORD)a3, a4, (__int64)&v38);
  v16 = *(_QWORD *)(v10 + 48);
  v35 = RegistryDwordWithFallback;
  v17 = PipGetRegistryDwordWithFallback(27, v16, a2, v7, a4, (__int64)&v39);
  v18 = *(_QWORD *)(v10 + 48);
  v36 = v17;
  PipGetRegistryDwordWithFallback(28, v18, a2, v7, a4, (__int64)&v37);
  if ( a5 || (v19 = *(_QWORD *)(v5 + 24)) == 0 )
  {
    v20 = 0;
    v19 = v5;
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v20 = 0;
  }
  do
  {
    v20 |= *(_DWORD *)(v19 + 52);
    v19 = *(_QWORD *)(v19 + 24);
  }
  while ( v19 );
LABEL_8:
  v21 = 0;
  v22 = *(_QWORD *)(v10 + 48);
  v23 = (v37 | v20) & 0x5010F;
  v37 = 0;
  RegistrySecurityWithFallback = (void *)PipGetRegistrySecurityWithFallback(
                                           v44 & -(__int64)(v14 != 0),
                                           v22,
                                           a2,
                                           v14 != 0 ? (unsigned int)Sacl : 0,
                                           v44 & -(__int64)(v14 != 0));
  v26 = RegistrySecurityWithFallback;
  if ( RegistrySecurityWithFallback )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(RegistrySecurityWithFallback, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_37;
    v28 = 0;
    if ( Owner )
    {
      v21 = 1;
      v28 = 1;
    }
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v26, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_37;
    if ( Owner )
      v21 = v28 | 2;
    OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_37;
    if ( SaclPresent )
      v21 |= 8u;
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v26, &SaclPresent, &Sacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_37;
    if ( SaclPresent )
      v21 |= 4u;
    if ( !v35 )
      goto LABEL_24;
  }
  else
  {
    if ( !v35 )
      goto LABEL_24;
    v46 = 0LL;
    memset(v45, 0, sizeof(v45));
    v26 = (void *)IopCreateDefaultDeviceSecurityDescriptor(v38, v23, v25, v45, &P, &v43, &v37);
    if ( !v26 )
    {
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_38;
    }
    v21 = v37;
    v34 = 1;
  }
  *(_DWORD *)(v5 + 72) = v38;
LABEL_24:
  if ( v36 && v39 )
    *(_DWORD *)(v5 + 48) |= 8u;
  *(_DWORD *)(v5 + 52) = v23 | *(_DWORD *)(v5 + 52) & 0xFFFAFEF0;
  for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)(i + 52) |= v23;
  OwnerSecurityDescriptor = 0;
  if ( v26 )
    OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(v5, v21, (__int64)v26);
  v30 = v34;
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 16LL) & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 40LL) + 396LL) |= 0xC00000u;
    if ( v30 && *(_QWORD *)(v5 + 272) )
      *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 0x800u;
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
  if ( v26 && !v34 )
LABEL_37:
    ExFreePoolWithTag(v26, 0);
LABEL_38:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
