/*
 * XREFs of CmLoadDifferencingKey @ 0x1406BC49C
 * Callers:
 *     NtLoadKeyEx @ 0x1406BD790 (NtLoadKeyEx.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x1407375CC (VrpLoadDifferencingHive.c)
 *     NtLoadKey3 @ 0x140799D50 (NtLoadKey3.c)
 *     NtLoadKey2 @ 0x1408728A0 (NtLoadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140243978 (CmpAllocateTransientPoolWithQuota.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmCheckNoTxContext @ 0x1406BD098 (CmCheckNoTxContext.c)
 *     CmConvertHandleToKernelHandle @ 0x1406BD0E0 (CmConvertHandleToKernelHandle.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpNameFromAttributes @ 0x1406BD314 (CmpNameFromAttributes.c)
 *     CmpTraceHiveLoadStop @ 0x1406BD64C (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStart @ 0x1406BD708 (CmpTraceHiveLoadStart.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmLoadKey @ 0x140732FF8 (CmLoadKey.c)
 *     ObDeleteCapturedInsertInfo @ 0x140768AD0 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x14079329C (CmReleaseLoadKeyContext.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF2034 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF2058 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        __int64 a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  PVOID v15; // r15
  PVOID v16; // r12
  __int64 v17; // rdx
  int v18; // edi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int16 v22; // ax
  unsigned int Length; // edi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  wchar_t *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  PVOID v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v31; // rbx
  int v32; // r9d
  int v33; // eax
  int v34; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  PVOID v39; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-358h]
  int AccessMode; // [rsp+28h] [rbp-350h]
  KPROCESSOR_MODE AccessModea[8]; // [rsp+28h] [rbp-350h]
  int Handle; // [rsp+30h] [rbp-348h]
  PHANDLE Handlea; // [rsp+30h] [rbp-348h]
  char v50; // [rsp+60h] [rbp-318h]
  int v51; // [rsp+64h] [rbp-314h]
  char v52; // [rsp+68h] [rbp-310h]
  char v53; // [rsp+69h] [rbp-30Fh]
  PVOID v54; // [rsp+70h] [rbp-308h]
  char UnloadRundown; // [rsp+78h] [rbp-300h]
  PVOID Object; // [rsp+80h] [rbp-2F8h] BYREF
  int v57; // [rsp+88h] [rbp-2F0h]
  PVOID v58; // [rsp+90h] [rbp-2E8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-2E0h] BYREF
  void *v60[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-2C8h] BYREF
  HANDLE *v62; // [rsp+C0h] [rbp-2B8h]
  PVOID v63; // [rsp+C8h] [rbp-2B0h] BYREF
  int v64; // [rsp+D0h] [rbp-2A8h]
  unsigned int v65; // [rsp+D8h] [rbp-2A0h]
  PVOID v66; // [rsp+E0h] [rbp-298h]
  HANDLE v67; // [rsp+E8h] [rbp-290h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+F0h] [rbp-288h]
  HANDLE v69[2]; // [rsp+F8h] [rbp-280h] BYREF
  UNICODE_STRING v70; // [rsp+108h] [rbp-270h] BYREF
  HANDLE v71; // [rsp+118h] [rbp-260h] BYREF
  __m128i v72; // [rsp+120h] [rbp-258h]
  HANDLE v73[2]; // [rsp+130h] [rbp-248h] BYREF
  __int128 v74; // [rsp+140h] [rbp-238h]
  __int128 v75; // [rsp+150h] [rbp-228h]
  __int128 v76; // [rsp+160h] [rbp-218h] BYREF
  __int64 v77; // [rsp+170h] [rbp-208h]
  int v78; // [rsp+178h] [rbp-200h]
  __int64 v79; // [rsp+180h] [rbp-1F8h]
  __int64 v80; // [rsp+188h] [rbp-1F0h]
  __int128 v81; // [rsp+190h] [rbp-1E8h] BYREF
  _QWORD v82[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v83[19]; // [rsp+200h] [rbp-178h] BYREF

  v79 = a4;
  v72.m128i_i64[0] = a2;
  v62 = a7;
  v65 = a3;
  Object = a5;
  v80 = a9;
  v69[0] = a11;
  v81 = 0LL;
  *(_OWORD *)v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  DestinationString = 0LL;
  v70 = 0LL;
  v60[0] = 0LL;
  v71 = 0LL;
  v52 = 0;
  v78 = 0;
  v14 = 0;
  CmpInitializeThreadInfo((__int64)&v81);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v53 = 0;
  RtlInitUnicodeString(&v70, 0LL);
  v58 = 0LL;
  BugCheckParameter2 = 0LL;
  v63 = 0LL;
  v67 = 0LL;
  v15 = 0LL;
  v54 = 0LL;
  Privileges = 0LL;
  memset(v83, 0, 0x128uLL);
  LODWORD(v83[6]) = -1;
  *((_QWORD *)&v83[9] + 1) = &v83[9];
  *(_QWORD *)&v83[9] = &v83[9];
  memset((char *)&v83[13] + 8, 0, 0x50uLL);
  v16 = 0LL;
  v66 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v18 = -1073741431;
    goto LABEL_109;
  }
  v50 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_108;
  if ( a10 )
  {
    if ( !a9 )
    {
      v18 = -1073741576;
      goto LABEL_109;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_108;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
  {
LABEL_108:
    v18 = -1073741583;
LABEL_109:
    v51 = v18;
    goto LABEL_78;
  }
  v57 = a3 & 0x810;
  v18 = CmCheckNoTxContext();
  v51 = v18;
  if ( v18 < 0 )
    goto LABEL_78;
  v64 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v18 = -1073741727;
    goto LABEL_12;
  }
  if ( !v57 )
  {
    if ( !v62 )
    {
      if ( Object )
      {
        v18 = -1073741581;
        goto LABEL_12;
      }
      goto LABEL_16;
    }
LABEL_125:
    v18 = -1073741579;
    goto LABEL_12;
  }
  if ( !v62 )
    goto LABEL_125;
  if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
  {
    v18 = -1073741583;
LABEL_12:
    v51 = v18;
LABEL_13:
    v14 = 0;
    v15 = 0LL;
    goto LABEL_78;
  }
LABEL_16:
  LOBYTE(v17) = PreviousMode;
  v18 = CmpNameFromAttributes(v72.m128i_i64[0], v17, &v70);
  v51 = v18;
  if ( v18 < 0 )
    goto LABEL_13;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v57 )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v62 < 0x7FFFFFFF0000LL )
        v20 = (__int64)v62;
      *(_QWORD *)v20 = 0LL;
    }
  }
  *(_OWORD *)v73 = *(_OWORD *)a1;
  v74 = *(_OWORD *)(a1 + 16);
  v75 = *(_OWORD *)(a1 + 32);
  if ( (a3 & 0x10) != 0 && v73[1] )
  {
    v18 = -1073741585;
    v51 = -1073741585;
    v15 = 0LL;
    v14 = 0;
    goto LABEL_78;
  }
  if ( PreviousMode == 1 )
  {
    v72 = 0LL;
    v19 = v74;
    if ( (unsigned __int64)v74 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v72.m128i_i32[0] = *(_DWORD *)v19;
    v21 = *(_QWORD *)(v19 + 8);
    v72.m128i_i64[1] = v21;
    DestinationString = (UNICODE_STRING)v72;
    v22 = _mm_cvtsi128_si32(v72);
    if ( v22 )
    {
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v22 + v21;
      if ( v19 > 0x7FFFFFFF0000LL || v22 + v21 < v21 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(
                                                        v19,
                                                        DestinationString.Length,
                                                        1801604419LL);
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v18 = -1073741670;
      v51 = -1073741670;
      v15 = 0LL;
      v14 = 0;
      goto LABEL_78;
    }
    v25 = (wchar_t *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v25;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v74 = &DestinationString;
  *(_QWORD *)&v75 = 0LL;
  if ( !v79
    || (LOBYTE(v28) = PreviousMode,
        v18 = CmObReferenceObjectByHandle(v79, 0, v27, v28, (__int64)&v58, 0LL),
        v51 = v18,
        v18 >= 0) )
  {
    v29 = Object;
    if ( Object )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(v29, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v54 = Object;
      v51 = v18;
      if ( v18 < 0 )
      {
        v15 = Object;
        goto LABEL_77;
      }
    }
    if ( v80 )
    {
      LOBYTE(v28) = PreviousMode;
      v18 = CmObReferenceObjectByHandle(v80, 0, v27, v28, (__int64)&v63, 0LL);
      v51 = v18;
      if ( v18 < 0 )
      {
LABEL_76:
        v15 = v54;
LABEL_77:
        v14 = v50;
        goto LABEL_78;
      }
    }
    if ( v69[0] )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(v69[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
      v16 = Object;
      v66 = Object;
      v51 = v18;
      if ( v18 < 0 )
        goto LABEL_76;
      if ( *((_DWORD *)Object + 48) != 2 )
      {
        v18 = -1073741656;
        v51 = -1073741656;
        goto LABEL_76;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v53 = 1;
    LOBYTE(v27) = PreviousMode;
    v18 = CmConvertHandleToKernelHandle(v73[1], v26, v27, 131097LL, &v67);
    v51 = v18;
    if ( v18 >= 0 )
    {
      v73[1] = v67;
      v31 = 0LL;
      memset(v82, 0, sizeof(v82));
      v76 = 0LL;
      v77 = 0LL;
      v69[1] = v69;
      v69[0] = v69;
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        if ( v73[1] )
        {
          Object = 0LL;
          ObReferenceObjectByHandle(v73[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
          v31 = Object;
        }
        v82[10] = 2LL;
        v82[0] = v31;
        v82[1] = &DestinationString;
        v82[2] = &v70;
        LODWORD(v82[3]) = a3;
        v82[4] = v58;
        v82[5] = v54;
        LODWORD(v82[6]) = DesiredAccess;
        v82[7] = v62;
        v82[11] = v16;
        *(_QWORD *)&v76 = v82;
        *((_QWORD *)&v76 + 1) = v63;
        LOBYTE(v77) = a10;
        LOBYTE(v32) = 1;
        v18 = CmpCallCallBacksEx(32, (unsigned int)v82, (unsigned int)&v76, v32, 33, 0LL, (__int64)v69);
        v51 = v18;
      }
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
        {
          v18 = 0;
          v51 = 0;
          v52 = 1;
        }
      }
      else
      {
        CmpTraceHiveLoadStart(&v70, a3);
        v50 = 1;
        if ( (a3 & 0x10) != 0 )
        {
          LOBYTE(Handle) = PreviousMode;
          v33 = CmLoadAppKey(v73, &v70, a3, v58, v54, v16, Handle, v60, &BugCheckParameter2);
        }
        else
        {
          LOBYTE(AccessMode) = a10;
          v33 = CmLoadKey(v73, &v70, a3, v58, v63, AccessMode, v54, v16, PreviousMode, v60, &BugCheckParameter2);
        }
        v18 = CmPostCallbackNotificationEx(33, (_DWORD)v31, v33, (unsigned int)v82, (__int64)&v76, (__int64)v69);
        v51 = v18;
      }
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( v58 )
      {
        ObfDereferenceObject(v58);
        v58 = 0LL;
      }
      if ( v18 >= 0 && v57 && !v52 )
      {
        Object = 0LL;
        v34 = v83[0];
        if ( (a3 & 0x10) != 0 )
          v34 = 64;
        LODWORD(v83[0]) = v34;
        p_DestinationString = &DestinationString;
        if ( v60[0] )
          p_DestinationString = (UNICODE_STRING *)v60[0];
        v60[0] = p_DestinationString;
        v18 = ObReferenceObjectByName(
                (__int64)p_DestinationString,
                64,
                0LL,
                0,
                (__int64)CmKeyObjectType,
                0,
                (int)v83,
                (__int64 *)&Object);
        v51 = v18;
        if ( v18 >= 0 )
        {
          v39 = Object;
          ObDeleteCapturedInsertInfo(Object);
          v18 = ObOpenObjectByPointer(
                  v39,
                  PreviousMode != 0 ? 64 : 576,
                  0LL,
                  DesiredAccess,
                  (POBJECT_TYPE)CmKeyObjectType,
                  PreviousMode,
                  &v71);
          v51 = v18;
          ObfDereferenceObject(v39);
          if ( v18 >= 0 )
            *v62 = v71;
        }
        if ( BugCheckParameter2 )
        {
          if ( (a3 & 0x10) != 0 )
          {
            CmReleaseLoadKeyContext(BugCheckParameter2);
          }
          else
          {
            CmpLockRegistry(BugCheckParameter2, v36, v37, v38, ObjectType, *(_QWORD *)AccessModea, Handlea);
            CmpDereferenceKeyControlBlock(BugCheckParameter2);
            CmpUnlockRegistry(v42, v41, v43, v44);
          }
          BugCheckParameter2 = 0LL;
        }
        if ( v18 < 0 && (a3 & 0x800) != 0 )
        {
          v18 = 0;
          v51 = 0;
        }
      }
    }
    goto LABEL_76;
  }
  v15 = 0LL;
  v14 = 0;
LABEL_78:
  if ( BugCheckParameter2 )
    CmReleaseLoadKeyContext(BugCheckParameter2);
  if ( v60[0] && v60[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v60[0], 0x624E4D43u);
  if ( v67 )
    ZwClose(v67);
  if ( v53 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v18 = v51;
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( v63 )
    ObfDereferenceObject(v63);
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v58 )
    ObfDereferenceObject(v58);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v70.Buffer )
    ExFreePoolWithTag(v70.Buffer, 0);
  CmpCleanupParseContext(v83, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v18);
  CmCleanupThreadInfo((__int64 *)&v81);
  return (unsigned int)v18;
}
