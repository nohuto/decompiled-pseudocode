__int64 __fastcall ObpInsertOrLocateNamedObject(
        PRKPROCESS PROCESS,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int *a6,
        PVOID *a7)
{
  struct _KPROCESS *v9; // r12
  char *v11; // r13
  char *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS ObjectSecurity; // ebx
  __int64 v19; // rcx
  __int64 v20; // r14
  char v21; // r12
  _OWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  char *v26; // rdi
  __int64 v27; // r9
  int v28; // eax
  PVOID v29; // rdx
  void *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  _QWORD *v39; // r8
  _QWORD *v40; // rcx
  char v41; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v43; // [rsp+74h] [rbp-8Ch] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  PVOID v48; // [rsp+90h] [rbp-70h]
  PRKPROCESS v49; // [rsp+98h] [rbp-68h]
  __int64 v50[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  PACL Dacl; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+C0h] [rbp-40h]
  PVOID *v54; // [rsp+C8h] [rbp-38h]
  _OWORD v55[10]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v48 = a2;
  v9 = PROCESS;
  v49 = PROCESS;
  v54 = a7;
  v43 = 0;
  DaclPresent[0] = 0;
  Object = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  memset(v55, 0, sizeof(v55));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  CurrentSilo = PsGetCurrentSilo();
  v15 = *a6;
  v53 = (unsigned __int64)v11 >> 8;
  v16 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          (int)v12 + 8,
          v15,
          ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v11[24] ^ BYTE1(v11))],
          (v13 & 2) == 0,
          0,
          *((_QWORD *)a6 + 5),
          v48,
          (__int64)CurrentSilo,
          a4,
          (__int64)v50,
          0LL,
          (__int64)&Object);
  v17 = 0LL;
  ObjectSecurity = v16;
  if ( v16 < 0 )
  {
LABEL_46:
    ObpDecrementHandleCount(v9);
    return (unsigned int)ObjectSecurity;
  }
  if ( Object != v48 )
  {
    v26 = 0LL;
    if ( v50[0] )
    {
      v26 = (char *)Object - 48;
      ObpReferenceNamedObject((__int64)Object - 48);
      if ( v50[0] )
        ObpUnlockDirectory(v50);
    }
    ObpDecrementHandleCount(v9);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v26 )
        ObpDereferenceNamedObject((__int64)v26);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v29 = Object;
      *(_DWORD *)(a4 + 16) = v28;
      LOBYTE(v27) = a5;
      ObjectSecurity = ObpGrantAccess(1LL, v29, a4, v27, *a6, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v26 )
          ObpDereferenceNamedObject((__int64)v26);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1, v47, (_DWORD)v9, (_DWORD)Object, a5, *a6, 0LL);
        if ( v26 )
          ObpDereferenceNamedObject((__int64)v26);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)ObjectSecurity;
  }
  v19 = *(_QWORD *)v12;
  v20 = 0LL;
  v47 = 0LL;
  v41 = 0;
  v45 = 0;
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v45 = 3;
    LOBYTE(v17) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v19, &v47, &v41, v17);
    if ( ObjectSecurity < 0 )
      goto LABEL_53;
    v20 = v47;
  }
  v21 = 0;
  if ( !*(_QWORD *)v12 || (*(_DWORD *)(*(_QWORD *)v12 + 336LL) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v30 = *(void **)(a4 + 64);
  if ( !v30 )
    goto LABEL_13;
  ObjectSecurity = RtlGetDaclSecurityDescriptor(v30, DaclPresent, &Dacl, DaclDefaulted);
  if ( ObjectSecurity < 0
    || (ObjectSecurity = RtlGetControlSecurityDescriptor(*(_QWORD *)(a4 + 64), &v43, &v47), ObjectSecurity < 0) )
  {
    if ( v20 )
      goto LABEL_16;
    goto LABEL_49;
  }
  if ( !Dacl && (v43 & 0x1000) == 0 )
  {
    v31 = *(_OWORD *)(a4 + 16);
    v55[0] = *(_OWORD *)a4;
    v32 = *(_OWORD *)(a4 + 32);
    v55[1] = v31;
    v33 = *(_OWORD *)(a4 + 48);
    v55[2] = v32;
    v34 = *(_OWORD *)(a4 + 64);
    v55[3] = v33;
    v35 = *(_OWORD *)(a4 + 80);
    v55[4] = v34;
    v36 = *(_OWORD *)(a4 + 96);
    v55[5] = v35;
    v37 = *(_OWORD *)(a4 + 128);
    v55[6] = v36;
    v55[7] = *(_OWORD *)(a4 + 112);
    v38 = *(_OWORD *)(a4 + 144);
    v55[8] = v37;
    v55[9] = v38;
    *(_QWORD *)&v55[4] = 0LL;
    v22 = v55;
  }
  else
  {
LABEL_13:
    v22 = (_OWORD *)a4;
  }
  if ( !*((_QWORD *)v22 + 8) && v45 )
    v21 = 1;
  v23 = ObpAssignSecurity(
          (_DWORD)v22,
          v20,
          (_DWORD)v48,
          ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v11[24] ^ v53)],
          v45,
          v21);
  ObjectSecurity = v23;
  if ( v20 )
  {
LABEL_16:
    LOBYTE(v24) = v41;
    ObReleaseObjectSecurityEx(v20, v24, *(_QWORD *)v12, 0LL);
    if ( ObjectSecurity >= 0 )
      goto LABEL_17;
    goto LABEL_49;
  }
  if ( v23 < 0 )
  {
LABEL_49:
    v9 = v49;
LABEL_53:
    v39 = (_QWORD *)v50[1];
    v40 = *(_QWORD **)v50[1];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL)
              - 48LL
              - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
    *v39 = *v40;
    *v40 = 0LL;
    ObpDeleteDirectoryEntry(v40);
    if ( v50[0] )
      ObpUnlockDirectory(v50);
    goto LABEL_46;
  }
  LOBYTE(v24) = *((_BYTE *)a6 + 16);
  SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v24, 1LL, 0LL);
  *((_QWORD *)a6 + 4) = 0LL;
  *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
  if ( v50[0] )
    ObpUnlockDirectory(v50);
LABEL_19:
  *v54 = Object;
  return (unsigned int)ObjectSecurity;
}
