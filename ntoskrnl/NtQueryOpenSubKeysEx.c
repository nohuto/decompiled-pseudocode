/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140A0B000
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140243978 (CmpAllocateTransientPoolWithQuota.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     CmpSearchForOpenSubKeys @ 0x140872764 (CmpSearchForOpenSubKeys.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtQueryOpenSubKeysEx(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v17; // rcx
  size_t v18; // r14
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v24; // r10
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v30; // [rsp+40h] [rbp-1F8h]
  char v31; // [rsp+41h] [rbp-1F7h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-1D8h]
  __int128 v35; // [rsp+70h] [rbp-1C8h]
  int v36; // [rsp+80h] [rbp-1B8h]
  __int128 v37; // [rsp+88h] [rbp-1B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-1A0h] BYREF
  _OWORD v39[19]; // [rsp+D0h] [rbp-168h] BYREF

  v6 = a2;
  v37 = 0LL;
  v36 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  memset(v39, 0, 0x128uLL);
  LODWORD(v39[6]) = -1;
  *((_QWORD *)&v39[9] + 1) = &v39[9];
  *(_QWORD *)&v39[9] = &v39[9];
  memset((char *)&v39[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Src = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v30 = 0;
  CmpInitializeThreadInfo((__int64)&v37);
  v31 = CmpAcquireShutdownRundown(v9, v8, v10);
  if ( !v31 )
  {
    v15 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v15 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v15 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a4;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    ProbeForWrite(a3, v6, 4u);
  }
  v15 = ObReferenceObjectByNameEx(
          a1,
          0LL,
          131097,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v39,
          (__int64 *)&Object);
  if ( v15 >= 0 )
  {
    LODWORD(Src[0]) = v6;
    v18 = v6;
    Src[1] = (void *)CmpAllocateTransientPoolWithQuota(v12, v6, 825773379LL);
    if ( Src[1] )
    {
      CmpLockRegistryExclusive();
      v30 = 1;
      v19 = Object;
      v15 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v15 >= 0 )
      {
        if ( (*(_DWORD *)(v19[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v15 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Src[1] = 0;
        LODWORD(v34) = 8;
        *((_QWORD *)&v35 + 1) = (char *)Src[1] + v18;
        *(_QWORD *)&v35 = v19;
        *(_QWORD *)((char *)&v34 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess(&ApcState);
        CmpSearchForOpenSubKeys(v19[1], 0, (__int64)Src);
        CmpDetachFromRegistryProcess(&ApcState);
        v15 = DWORD1(v34);
        CmpUnlockRegistry(v21, v20, v22, v23);
        v30 = 0;
        *a4 = v34;
        v11 = (char *)Src[1];
        *a3 = *(_DWORD *)Src[1];
        if ( v15 >= 0 )
        {
          v24 = v11 - (char *)a3;
          v25 = 0;
          if ( *(_DWORD *)v11 )
          {
            do
            {
              *(_QWORD *)&v11[24 * ++v25] -= v24;
              v11 = (char *)Src[1];
            }
            while ( v25 < *(_DWORD *)Src[1] );
          }
          memmove(a3, v11, v18);
          v15 = 0;
        }
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_22:
  if ( v30 )
    CmpUnlockRegistry(v12, v11, v13, v14);
  CmpCleanupParseContext(v39, 0LL);
  if ( v31 )
    CmpReleaseShutdownRundown(v27, v26, v28);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Src[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  CmCleanupThreadInfo((__int64 *)&v37);
  return (unsigned int)v15;
}
