/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1406DB6F0
 * Callers:
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402526B0 (RtlGetDaclSecurityDescriptor.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObpReferenceNamedObject @ 0x14031A044 (ObpReferenceNamedObject.c)
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     ObpReleaseLookupContext @ 0x140347AE0 (ObpReleaseLookupContext.c)
 *     ObpDereferenceNamedObject @ 0x14034C1A8 (ObpDereferenceNamedObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpGrantAccess @ 0x1405D97B4 (ObpGrantAccess.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1406D81D0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1406D85C0 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x1406DBD9C (ObpAssignSecurity.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406F00C0 (RtlGetControlSecurityDescriptor.c)
 *     ObpDecrementHandleCount @ 0x1406F6CE4 (ObpDecrementHandleCount.c)
 *     ObpDeleteDirectoryEntry @ 0x1406F82C0 (ObpDeleteDirectoryEntry.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        struct _KPROCESS *BugCheckParameter1,
        char *a2,
        ACCESS_MASK *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        PADAPTER_OBJECT *a7)
{
  char *v11; // r14
  char *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // r8d
  char v16; // cl
  __m128i *v17; // rdx
  struct _DMA_ADAPTER *v18; // rdi
  int ObjectSecurity; // ebx
  bool v20; // zf
  PADAPTER_OBJECT v21; // rdi
  __int64 *v22; // rax
  BOOLEAN v23; // r12
  __int64 v24; // rcx
  char v25; // bl
  _OWORD *v26; // rcx
  __int64 v28; // r9
  int v29; // eax
  PADAPTER_OBJECT v30; // rdx
  void *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  WORD Control; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG Revision[2]; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+80h] [rbp-80h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-78h] BYREF
  struct _DMA_ADAPTER *v48; // [rsp+90h] [rbp-70h] BYREF
  PACL Dacl; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  __int64 v51[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v54; // [rsp+D0h] [rbp-30h]
  PADAPTER_OBJECT *v55; // [rsp+D8h] [rbp-28h]
  _OWORD v56[10]; // [rsp+E0h] [rbp-20h] BYREF

  Object = a2;
  v55 = a7;
  Control = 0;
  DaclPresent[0] = 0;
  DmaAdapter = 0LL;
  v53 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  memset(v56, 0, sizeof(v56));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  *(_QWORD *)Revision = v12;
  CurrentSilo = PsGetCurrentSilo();
  v15 = *(_DWORD *)a6;
  v16 = BYTE1(v11) ^ v11[24];
  v54 = (unsigned __int64)v11 >> 8;
  v17 = (__m128i *)(v12 + 8);
  v18 = (struct _DMA_ADAPTER *)Object;
  ObjectSecurity = ObpLookupObjectName(
                     *(_QWORD *)(a6 + 8),
                     v17,
                     v15,
                     (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v16)],
                     (v13 & 2) == 0,
                     0LL,
                     *(_QWORD *)(a6 + 40),
                     (char *)Object,
                     (__int64)CurrentSilo,
                     a4,
                     (__int64)v51,
                     0LL,
                     &DmaAdapter);
  if ( ObjectSecurity < 0 )
    goto LABEL_45;
  v20 = DmaAdapter == v18;
  v21 = 0LL;
  if ( !v20 )
  {
    if ( BYTE14(v52) )
    {
      v21 = DmaAdapter - 3;
      ObpReferenceNamedObject((__int64)&DmaAdapter[-3]);
    }
    ObpReleaseLookupContext((__int64)v51);
    ObpDecrementHandleCount((ULONG_PTR)BugCheckParameter1);
    if ( (*(_DWORD *)a6 & 0x80u) == 0 )
    {
      if ( v21 )
        ObpDereferenceNamedObject((__int64)v21);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v29 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v30 = DmaAdapter;
      LOBYTE(v28) = a5;
      *(_DWORD *)(a4 + 16) = v29;
      LODWORD(v40) = *(_DWORD *)a6;
      ObjectSecurity = ObpGrantAccess(1, v30, (struct _ACCESS_STATE *)a4, v28, v40, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v21 )
          ObpDereferenceNamedObject((__int64)v21);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(
                           1u,
                           (__int64)a3,
                           BugCheckParameter1,
                           (__int64)DmaAdapter,
                           a5,
                           *(_DWORD *)a6,
                           0LL);
        if ( v21 )
          ObpDereferenceNamedObject((__int64)v21);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    HalPutDmaAdapter(DmaAdapter);
    return (unsigned int)ObjectSecurity;
  }
  v22 = *(__int64 **)Revision;
  v23 = 0;
  v48 = 0LL;
  DaclDefaulted = 0;
  v46 = 0;
  v24 = **(_QWORD **)Revision;
  if ( **(_QWORD **)Revision )
  {
    if ( (*(_DWORD *)(v24 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v46 = 3;
    ObjectSecurity = ObpGetObjectSecurity(v24, (PVOID *)&v48, &DaclDefaulted, a5);
    if ( ObjectSecurity < 0 )
      goto LABEL_52;
    v21 = v48;
    v23 = DaclDefaulted;
    v22 = *(__int64 **)Revision;
  }
  v25 = 0;
  if ( !*v22 || (*(_DWORD *)(*v22 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v31 = *(void **)(a4 + 64);
  if ( !v31 )
    goto LABEL_13;
  Revision[0] = RtlGetDaclSecurityDescriptor(v31, DaclPresent, &Dacl, &DaclDefaulted);
  if ( (Revision[0] & 0x80000000) == 0 )
  {
    Revision[0] = RtlGetControlSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64), &Control, Revision);
    if ( (Revision[0] & 0x80000000) == 0 )
    {
      if ( !Dacl && (Control & 0x1000) == 0 )
      {
        v32 = *(_OWORD *)(a4 + 16);
        v56[0] = *(_OWORD *)a4;
        v33 = *(_OWORD *)(a4 + 32);
        v56[1] = v32;
        v34 = *(_OWORD *)(a4 + 48);
        v56[2] = v33;
        v35 = *(_OWORD *)(a4 + 64);
        v56[3] = v34;
        v36 = *(_OWORD *)(a4 + 80);
        v56[4] = v35;
        v37 = *(_OWORD *)(a4 + 96);
        v56[5] = v36;
        v38 = *(_OWORD *)(a4 + 128);
        v56[6] = v37;
        v56[7] = *(_OWORD *)(a4 + 112);
        v39 = *(_OWORD *)(a4 + 144);
        v56[8] = v38;
        v56[9] = v39;
        *(_QWORD *)&v56[4] = 0LL;
        v26 = v56;
        goto LABEL_14;
      }
LABEL_13:
      v26 = (_OWORD *)a4;
LABEL_14:
      if ( !*((_QWORD *)v26 + 8) )
      {
        if ( v46 )
          v25 = 1;
      }
      LOBYTE(v41) = v25;
      ObjectSecurity = ObpAssignSecurity(
                         v26,
                         v21,
                         Object,
                         ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v54 ^ *((char *)Object - 24))],
                         v46,
                         v41);
      if ( v21 )
      {
        ObReleaseObjectSecurity(v21, v23);
        goto LABEL_17;
      }
      if ( ObjectSecurity >= 0 )
      {
        SeReleaseSecurityDescriptor(*(void **)(a6 + 32), *(_BYTE *)(a6 + 16), 1);
        *(_QWORD *)(a6 + 32) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( ObjectSecurity >= 0 )
        {
          ObpReleaseLookupContext((__int64)v51);
LABEL_19:
          *v55 = DmaAdapter;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_52:
      ObpDeleteDirectoryEntry(v51);
      ObpReleaseLookupContext((__int64)v51);
LABEL_45:
      ObpDecrementHandleCount((ULONG_PTR)BugCheckParameter1);
      return (unsigned int)ObjectSecurity;
    }
  }
  if ( v21 )
    ObReleaseObjectSecurity(v21, v23);
  ObpDeleteDirectoryEntry(v51);
  ObpReleaseLookupContext((__int64)v51);
  ObpDecrementHandleCount((ULONG_PTR)BugCheckParameter1);
  return Revision[0];
}
