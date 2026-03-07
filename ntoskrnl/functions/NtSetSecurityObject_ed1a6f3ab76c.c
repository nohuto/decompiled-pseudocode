NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  unsigned int v3; // r15d
  int v4; // r14d
  SECURITY_INFORMATION v5; // ebx
  SECURITY_INFORMATION v6; // edx
  int v7; // ecx
  int v8; // esi
  KPROCESSOR_MODE PreviousMode; // r12
  HANDLE v10; // r10
  int v11; // edx
  NTSTATUS v12; // edi
  int v13; // r9d
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // r14
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  PVOID v24; // r15
  PVOID v25; // r12
  int v27; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  bool v29; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID v31; // [rsp+78h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-9h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  PVOID v34; // [rsp+90h] [rbp+7h] BYREF
  PVOID v35; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+A0h] [rbp+17h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 DesiredAccess; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v40; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v4 = (int)SecurityDescriptor;
  v36 = 0LL;
  v5 = SecurityInformation;
  LODWORD(DesiredAccess) = 0;
  HandleInformation = 0LL;
  v31 = 0LL;
  P = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v6 = SecurityInformation & 0x80;
  v7 = v5 & 0x100;
  if ( (v5 & 0x10000) != 0 )
  {
    v27 = v5 | 0x1FF;
    v5 = v5 & 0xFFFFFE00 | 0x17F;
    if ( v6 )
      v5 = v27;
    if ( !v7 )
      v5 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v5, &DesiredAccess);
  v8 = DesiredAccess;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v40 = PreviousMode;
  v12 = ObReferenceObjectByHandle(v10, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v12 < 0 )
    return v12;
  LOBYTE(v13) = 1;
  LOBYTE(v11) = PreviousMode;
  v14 = SeCaptureSecurityDescriptor(v4, v11, 1, v13, (__int64)&v36);
  v17 = Object;
  v12 = v14;
  if ( v14 < 0 )
  {
LABEL_37:
    ObfDereferenceObject(v17);
    return v12;
  }
  v18 = v36;
  v19 = 4LL;
  if ( (*(_WORD *)(v36 + 2) & 0x10) == 0 && (v5 & 0x10000) != 0 )
    v5 &= 0xFFFFFE07;
  if ( ((v5 & 1) == 0 || *(_DWORD *)(v36 + 4)) && ((v5 & 2) == 0 || *(_DWORD *)(v36 + 8)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v8 &= 0xFFF3FFFF;
    if ( !v8 )
      goto LABEL_18;
    v12 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, 0LL, &P);
    if ( v12 < 0 )
      goto LABEL_46;
    if ( (v8 & 0xFEFFFFFF) != 0 )
    {
      LOBYTE(DesiredAccess) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 P,
                                 (PBOOLEAN)&DesiredAccess,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      v12 = SaclSecurityDescriptor;
      v29 = DesiredAccess;
      if ( !(_BYTE)DesiredAccess )
      {
        DesiredAccess = 0LL;
        LOBYTE(v22) = 1;
        v29 = (unsigned int)SepRmGlobalSaclFind(
                              &DesiredAccess,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v17 - 24) ^ ((unsigned __int16)((_WORD)v17 - 48) >> 8))]
                            + 16,
                              v22) != -1073741772;
      }
      if ( v12 < 0 )
        goto LABEL_46;
      if ( v29 )
      {
        if ( (v8 & 0x80000) != 0 )
          v3 = v5 & 0x13;
        v23 = v3 | 4;
        if ( (v8 & 0x40000) == 0 )
          v23 = v3;
        v12 = ObpAllocateAndQuerySecurityDescriptorInfo(v17, v23, 0LL, &v31);
        if ( v12 >= 0 )
          goto LABEL_18;
LABEL_46:
        v24 = v31;
LABEL_32:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v24 )
          ExFreePoolWithTag(v24, 0);
        LOBYTE(v21) = 1;
        LOBYTE(v20) = PreviousMode;
        SeReleaseSecurityDescriptor(v18, v20, v21, v22);
        goto LABEL_37;
      }
      v8 &= 0xFFF3FFFF;
    }
LABEL_18:
    v24 = v31;
    if ( ((v5 & 0x40) == 0
       || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v17 - 24) ^ ((unsigned __int16)((_WORD)v17 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
       && (*(_DWORD *)(v17[1] + 52LL) & 0x10) != 0
       || (v12 = ObpAllocateAndQuerySecurityDescriptorInfo(v17, 64LL, 0LL, &v34), v12 >= 0))
      && ((v5 & 0x20) == 0
       || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v17 - 24) ^ ((unsigned __int16)((_WORD)v17 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
       && (*(_DWORD *)(v17[1] + 52LL) & 0x10) != 0
       || (v12 = ObpAllocateAndQuerySecurityDescriptorInfo(v17, 32LL, 0LL, &v35), v12 >= 0))
      && (v12 = ObSetSecurityObjectByPointer((__int64)v17, v5, v18), v12 >= 0)
      && (v8 || (v5 & 0x20) != 0) )
    {
      v25 = v34;
      SeSecurityDescriptorChangedAuditAlarm(
        0,
        (_DWORD)v17,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8)]
      + 16,
        0,
        (__int64)Handle,
        0,
        v8,
        v5,
        (__int64)v24,
        (__int64)P,
        (__int64)v35,
        (__int64)v34,
        v18);
    }
    else
    {
      v25 = v34;
    }
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( v35 )
      ExFreePoolWithTag(v35, 0);
    PreviousMode = v40;
    goto LABEL_32;
  }
  LOBYTE(v15) = 1;
  LOBYTE(v19) = PreviousMode;
  SeReleaseSecurityDescriptor(v36, v19, v15, v16);
  ObfDereferenceObject(Object);
  return -1073741703;
}
