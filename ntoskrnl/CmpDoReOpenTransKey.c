/*
 * XREFs of CmpDoReOpenTransKey @ 0x140A27F24
 * Callers:
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x14067DC08 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoCreateKey @ 0x140A27AE0 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140A27BD0 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x140A27C2C (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140A27D14 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140A27D70 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140A27DE0 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A27E50 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140A27EB0 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140336990 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpSplitParentKeyName @ 0x140AF2CC8 (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v4; // xmm1
  char v8; // r14
  int v9; // esi
  bool v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  HANDLE v13; // rbx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  void *v28; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v31; // [rsp+78h] [rbp-88h]
  __int128 *v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  _QWORD *v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v38[19]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a2;
  v36 = a4;
  v26 = a3;
  v30[1] = 0;
  v34 = 0;
  v29 = v4;
  v28 = 0LL;
  Handle = 0LL;
  v37 = 0LL;
  v8 = 0;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !(_WORD)v4 )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v38, 0, 0x128uLL);
    LODWORD(v38[6]) = -1;
    *((_QWORD *)&v38[9] + 1) = &v38[9];
    *(_QWORD *)&v38[9] = &v38[9];
    memset((char *)&v38[13] + 8, 0, 0x50uLL);
    v32 = &v29;
    DWORD2(v38[1]) = 8;
    v30[0] = 48;
    v31 = 0LL;
    v33 = 4928;
    v35 = 0LL;
    v11 = ObOpenObjectByName((__int64)v30, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v38, (__int64)&Handle);
    LOBYTE(v12) = v10;
    v9 = v11;
    CmpCleanupParseContext(v38, v12);
    if ( v9 >= 0 )
      break;
    CmpSplitParentKeyName(a2, &v29, &v37);
    if ( !(_WORD)v29 )
    {
      v13 = Handle;
      goto LABEL_14;
    }
  }
  v13 = Handle;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v19 = Object;
  v9 = v14;
  if ( v14 < 0 )
    goto LABEL_12;
  if ( !v10 )
  {
    CmpLockRegistry(v16, v15, v17, v18);
    v8 = 1;
  }
  v20 = *(_QWORD *)(v19[1] + 32LL);
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v20 + 4152) )
    goto LABEL_9;
  if ( v8 )
  {
    CmpUnlockRegistry(v20, v15, v17, v18);
    v8 = 0;
  }
  v19[8] = a1 + 88;
  ObfDereferenceObject(v19);
  v19 = 0LL;
  if ( (_WORD)v37 )
  {
    memset(v38, 0, 0x128uLL);
    LODWORD(v38[6]) = -1;
    *((_QWORD *)&v38[9] + 1) = &v38[9];
    *(_QWORD *)&v38[9] = &v38[9];
    memset((char *)&v38[13] + 8, 0, 0x50uLL);
    v32 = &v37;
    DWORD2(v38[1]) = 8;
    v30[0] = 48;
    v31 = v13;
    v33 = 4928;
    v35 = 0LL;
    v22 = ObOpenObjectByName((__int64)v30, (__int64)CmKeyObjectType, 0, 0LL, v26, (__int64)v38, (__int64)&v28);
    LOBYTE(v23) = v10;
    v9 = v22;
    CmpCleanupParseContext(v38, v23);
    if ( v9 < 0
      || (Handle = 0LL,
          v24 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL),
          v19 = Handle,
          v9 = v24,
          v24 < 0) )
    {
LABEL_10:
      if ( v8 )
        CmpUnlockRegistry(v20, v15, v17, v18);
LABEL_12:
      if ( v19 )
        ObfDereferenceObject(v19);
      goto LABEL_14;
    }
    if ( !v10 )
    {
      CmpLockRegistry(v20, v15, v17, v18);
      v8 = 1;
    }
    v20 = *(_QWORD *)(v19[1] + 32LL);
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v20 + 4152) )
    {
LABEL_9:
      v9 = -1073741762;
      goto LABEL_10;
    }
    if ( v8 )
      CmpUnlockRegistry(v20, v15, v17, v18);
    v19[8] = a1 + 88;
    ObfDereferenceObject(v19);
    ZwClose(v13);
    v13 = v28;
  }
  v9 = 0;
  *v36 = v13;
  v13 = 0LL;
LABEL_14:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v9;
}
