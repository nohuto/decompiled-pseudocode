/*
 * XREFs of CmpParseKey @ 0x140646330
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmpDoesParseEnterRegistryA @ 0x140646840 (CmpDoesParseEnterRegistryA.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x140660C90 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        PVOID a1,
        POBJECT_TYPE *a2,
        _DWORD *a3,
        struct _LOOKASIDE_LIST_EX *a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v11; // r15
  __int64 RegistryNamespaceRootForSilo; // rdi
  __int64 v13; // r14
  _DWORD *v14; // rbx
  __int128 v15; // xmm0
  PPRIVILEGE_SET v16; // r12
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  _WORD *v19; // rcx
  __int16 v20; // ax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // eax
  signed int v26; // ebx
  unsigned int i; // esi
  signed int v28; // eax
  __int64 v29; // r8
  _DWORD *v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  bool v34; // zf
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  _DWORD *v36; // rdi
  int v37; // eax
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  _SLIST_ENTRY v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-70h]
  _WORD v44[2]; // [rsp+98h] [rbp-68h] BYREF
  int v45; // [rsp+9Ch] [rbp-64h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-40h]
  __int128 v49; // [rsp+D0h] [rbp-30h]
  __int128 v50; // [rsp+E0h] [rbp-20h]
  __int128 v51; // [rsp+F0h] [rbp-10h]
  __int128 v52; // [rsp+100h] [rbp+0h]
  __int128 v53; // [rsp+110h] [rbp+10h]
  __int128 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int128 v56; // [rsp+140h] [rbp+40h] BYREF
  char v57; // [rsp+1A0h] [rbp+A0h]
  int v58; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v59; // [rsp+1B0h] [rbp+B0h]
  unsigned __int8 v60; // [rsp+1B8h] [rbp+B8h]

  v60 = (unsigned __int8)a4;
  v59 = a3;
  v11 = (__int64)a11;
  RegistryNamespaceRootForSilo = (__int64)a1;
  v13 = a8;
  v56 = 0LL;
  v14 = a3;
  v57 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v16 = 0LL;
  v55 = 0LL;
  v41 = 0LL;
  v42[1] = v42;
  v38 = v15;
  v42[0] = v42;
  v39 = 0LL;
  Privileges = 0LL;
  v47 = 0LL;
  LODWORD(a7) = 0;
  v48 = 0LL;
  v58 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v40 = 0LL;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  v17 = a10;
  if ( a1 == CmpRegistryRootObject )
    RegistryNamespaceRootForSilo = CmpGetRegistryNamespaceRootForSilo(*(_QWORD *)(a10 + 8));
  v18 = v38;
  if ( (_WORD)v38 )
  {
    v19 = (_WORD *)*((_QWORD *)&v38 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v38 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v34 = v18 == 2;
      v18 -= 2;
      LOWORD(v38) = v18;
      if ( v34 )
        goto LABEL_10;
    }
    if ( v18 )
    {
      v20 = WORD1(v38);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        *((_QWORD *)&v38 + 1) = v19;
        LOWORD(v38) = v18;
        WORD1(v38) = v20;
      }
      while ( v18 );
    }
  }
LABEL_10:
  if ( !v13 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      0x128uLL,
                                                      0x34364D43u,
                                                      a4);
    Privileges = TransientPoolWithTag;
    v16 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0x128uLL);
    v16[4].Privilege[0].Attributes = -1;
    *(_QWORD *)&v16[7].Privilege[0].Luid.HighPart = (char *)v16 + 144;
    *(_QWORD *)&v16[7].Control = (char *)v16 + 144;
    memset(&v16[10].Privilege[0].Attributes, 0, 0x50uLL);
    v13 = (__int64)v16;
  }
  v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
  *(_DWORD *)(v13 + 96) = v21;
  if ( (unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v38) && (*(_DWORD *)v13 & 0x40) == 0 )
  {
    v26 = -1073741790;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)v13 & 0x800) != 0 && !(unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v38) )
  {
    v26 = -1073741790;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(RegistryNamespaceRootForSilo + 48) & 0x10) != 0 )
    *(_DWORD *)(v13 + 24) |= 0x10u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = a6;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  *((_QWORD *)&v53 + 1) = 1LL;
  DWORD2(v54) = *(_DWORD *)(v13 + 28);
  HIDWORD(v54) = a5;
  *(_QWORD *)&v54 = &v38;
  LOBYTE(v55) = v60;
  DWORD2(v48) = *(_DWORD *)(v13 + 24);
  *(_QWORD *)&v48 = CmKeyObjectType;
  DWORD2(v50) = v14[4];
  *(_QWORD *)&v47 = v23;
  *((_QWORD *)&v47 + 1) = RegistryNamespaceRootForSilo;
  *((_QWORD *)&v51 + 1) = v11;
  v24 = *(_QWORD *)(v13 + 72);
  if ( (v24 & 1) != 0 )
    v24 = 0LL;
  *(_QWORD *)&v53 = v24;
  v40.Next = (_SLIST_ENTRY *)&v47;
  *((_DWORD *)&v40.Next + 2) = *(_DWORD *)(v13 + 96);
  v41 = v13 + 144;
  if ( (*(_DWORD *)v13 & 1) != 0 )
  {
    v44[0] = *(_WORD *)(v13 + 4);
    v44[1] = v44[0];
    v46 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)&v51 = v13 + 32;
    *(_QWORD *)&v49 = v44;
    *((_QWORD *)&v49 + 1) = *((_QWORD *)v14 + 8);
    *(_QWORD *)&v50 = a9;
    v45 = 0;
    v25 = CmpCallCallBacksEx(0x1Au, (__int64)&v47, &v40, 1, 0x1Bu, RegistryNamespaceRootForSilo, (__int64)v42);
  }
  else
  {
    v25 = CmpCallCallBacksEx(0x1Cu, (__int64)&v47, &v40, 1, 0x1Du, RegistryNamespaceRootForSilo, (__int64)v42);
  }
  v26 = v25;
  if ( v25 >= 0 )
  {
    RegistryNamespaceRootForSilo = *((_QWORD *)&v47 + 1);
    LODWORD(v14) = (_DWORD)v59;
    *(_DWORD *)(v13 + 96) = *((_DWORD *)&v40.Next + 2);
    v57 = 1;
LABEL_23:
    for ( i = (unsigned int)a7; ; ++i )
    {
      while ( 1 )
      {
        v56 = v38;
        v28 = CmpDoParseKey(
                RegistryNamespaceRootForSilo,
                (_DWORD)v14,
                v60,
                a5,
                v23,
                (__int64)&v56,
                v13,
                a9,
                (__int64)&v39);
        v26 = v28;
        if ( v28 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140C00F70 + 200 * *(unsigned int *)(v13 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v13 &= ~0x100u;
        LODWORD(v14) = (_DWORD)v59;
      }
      if ( v28 != -1073741267 )
        break;
      if ( i >= 0x40 )
      {
        v26 = -1073741772;
        break;
      }
      if ( (*(_DWORD *)(v13 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v13 + 120), *(_QWORD *)(v13 + 128), v29, &v58);
        *(_DWORD *)(v13 + 100) &= ~4u;
        *(_DWORD *)(v13 + 120) = 0;
        *(_QWORD *)(v13 + 128) = 0LL;
      }
      LODWORD(v14) = (_DWORD)v59;
    }
    v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
    if ( v26 >= 0 )
    {
      *(_QWORD *)v11 = v39;
      v39 = 0LL;
    }
    if ( v57 )
    {
      v30 = v59;
      v31 = *(_QWORD *)v11;
      HIDWORD(v50) = v59[5];
      v26 = CmPostCallbackNotificationEx(
              2 * (unsigned int)((*(_DWORD *)v13 & 1) == 0) + 27,
              v31,
              v26,
              (__int64)&v47,
              (__int64)&v40,
              v42);
      if ( v26 >= 0 )
      {
        v32 = HIDWORD(v50);
        if ( HIDWORD(v50) != v30[5] )
        {
          v30[5] = HIDWORD(v50);
          v30[4] = v30[6] & ~(v32 | 0x2000000);
        }
      }
      if ( *(_QWORD *)v11 )
        *(_DWORD *)(*(_QWORD *)v11 + 96LL) = *((_DWORD *)&v40.Next + 2);
    }
LABEL_34:
    if ( v26 != 872 )
    {
      if ( v26 == 260 )
      {
        *(_DWORD *)(v13 + 96) = v21;
        *(_QWORD *)(v17 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_37;
    }
    goto LABEL_50;
  }
  if ( v25 != -1073740541 )
    goto LABEL_34;
  v26 = *((_DWORD *)&v40.Next + 3);
  if ( *((_DWORD *)&v40.Next + 3) == 260 )
    goto LABEL_34;
  if ( *((_DWORD *)&v40.Next + 3) != 872 )
  {
    v36 = v59;
    v37 = HIDWORD(v50);
    v59[5] |= HIDWORD(v50);
    v36[4] &= ~(v37 | 0x2000000);
    v26 = 0;
    goto LABEL_37;
  }
LABEL_50:
  *(_QWORD *)(v13 + 64) = 0LL;
  *(_QWORD *)(v17 + 8) = 0LL;
LABEL_37:
  KeLeaveCriticalRegion();
  v16 = Privileges;
LABEL_38:
  if ( v16 )
  {
    CmpCleanupParseContext(v16, 0LL);
    CmSiFreeMemory(v16);
  }
  return (unsigned int)v26;
}
