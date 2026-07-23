/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14091F5F8
 * Callers:
 *     NtOpenObjectAuditAlarm @ 0x140606BE0 (NtOpenObjectAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x14060FF18 (SeAuditHandleCreation.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406DC580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1407D28B0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921970 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140596F58 (SepCheckAndCopySelfRelativeSD.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14067B228 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepSDContainsAttributeACE @ 0x140924EE4 (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x140924F3C (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        unsigned __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        __int128 *a18,
        __int64 a19)
{
  __int16 *v19; // r12
  __int64 v21; // rbx
  void *v22; // rdi
  __int128 *v24; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // esi
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int8 v29; // r9
  int v30; // eax
  const int *v31; // rcx
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  void *v44; // rbx
  int v45; // ecx
  size_t v46; // r13
  size_t v47; // r15
  char *PoolWithTag; // rax
  char *v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // ecx
  __int64 v56; // rax
  unsigned __int16 v57; // r15
  _WORD *v58; // r8
  char *v59; // rax
  _OWORD *v60; // r9
  __int64 v61; // rdx
  unsigned int v62; // r8d
  _DWORD *v63; // r10
  char *v64; // r12
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  unsigned __int16 *v68; // rdx
  int v69; // ecx
  unsigned int v70; // ebx
  int v71; // ecx
  int v72; // eax
  __int16 *v73; // rcx
  int v74; // eax
  __int16 v75; // [rsp+28h] [rbp-E0h] BYREF
  char v76; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v77; // [rsp+2Ch] [rbp-DCh]
  void *Src; // [rsp+30h] [rbp-D8h] BYREF
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v80; // [rsp+40h] [rbp-C8h] BYREF
  const int *v81; // [rsp+48h] [rbp-C0h]
  _QWORD *v82; // [rsp+50h] [rbp-B8h]
  __int16 *v83; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v84; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h]
  __int64 v87; // [rsp+78h] [rbp-90h]
  unsigned __int64 *v88; // [rsp+80h] [rbp-88h]
  __int128 *v89; // [rsp+88h] [rbp-80h]
  __int16 *v90; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v91; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v92[132]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v93; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v77 = a1;
  v21 = 0LL;
  v86 = a19;
  v22 = 0LL;
  v88 = a3;
  v81 = a2;
  v82 = a8;
  v91.PrimaryToken = a8;
  v90 = a6;
  v83 = a6;
  v84 = 0LL;
  P = 0LL;
  *(_QWORD *)&v91.ImpersonationLevel = 0LL;
  v91.ProcessAuditId = 0LL;
  v93 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v80 = 0LL;
  v76 = 0;
  v75 = 0;
  v91.ClientToken = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v91) )
    return 1;
  v24 = &v93;
  if ( a18 )
    v24 = a18;
  v89 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v21 = a7[3];
      v27 = (__int64 *)a7[19];
    }
    else
    {
      v27 = (__int64 *)v82[19];
    }
    v28 = v82[3];
    v87 = *v27;
    memset(v92, 0, 0x418uLL);
    v29 = a12;
    v30 = 8;
    HIDWORD(v92[0]) = 4656;
    LOWORD(v92[2]) = v77;
    WORD1(v92[2]) = 8;
    if ( a14 == 2 )
      v30 = 3;
    LODWORD(v92[0]) = v30;
    if ( !a12 )
      WORD1(v92[2]) = 16;
    v31 = &SeSubsystemName;
    v32 = 4LL;
    v92[6] = v87;
    if ( v81 )
      v31 = v81;
    LODWORD(v92[3]) = 4;
    LODWORD(v92[7]) = 1;
    v33 = *(unsigned __int8 *)(v87 + 1);
    v92[10] = v31;
    v92[11] = 0x800000005LL;
    v92[12] = v21;
    HIDWORD(v92[3]) = 4 * v33 + 8;
    v34 = *(unsigned __int16 *)v31 + 16;
    HIDWORD(v92[7]) = v34;
    if ( !a7 )
      v92[12] = v28;
    LODWORD(v92[15]) = 1;
    HIDWORD(v92[15]) = v34;
    v92[18] = v31;
    if ( !a4 )
    {
      AllocatedFullProcessImageName = -1073741811;
LABEL_19:
      v22 = Src;
      goto LABEL_20;
    }
    v35 = *a4 + 16;
    v92[22] = a4;
    HIDWORD(v92[19]) = v35;
    LODWORD(v92[19]) = 1;
    if ( a5 )
    {
      if ( v77 == 117 || (LODWORD(v92[23]) = 1, v77 == 129) )
        LODWORD(v92[23]) = 2;
      v36 = *a5;
      v92[26] = a5;
      HIDWORD(v92[23]) = v36 + 16;
    }
    v92[27] = 0x80000000BLL;
    if ( v88 )
    {
      IsKernelHandle = ObpIsKernelHandle(*v88, 0);
      v40 = v39 ^ 0xFFFFFFFF80000000uLL;
      if ( !IsKernelHandle )
        v40 = v38;
      v92[28] = v40 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v92[28] = 0LL;
    }
    v92[34] = v89;
    v41 = a10;
    v92[31] = 0x100000000DLL;
    LODWORD(v92[35]) = 7;
    HIDWORD(v92[35]) = v32;
    v92[37] = v32;
    if ( !v29 )
      v41 = a9;
    v42 = v86;
    v92[36] = v41;
    if ( v86 && (v43 = *(_QWORD *)(v86 + 72)) != 0 )
    {
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v43 + 56),
                                        &Src,
                                        (ULONG *)&Size + 1,
                                        (_BYTE *)&v75 + 1);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_102;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(*(_QWORD *)(v42 + 72) + 64LL),
                                        &v80,
                                        (ULONG *)&Size,
                                        &v76);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_102;
      v44 = Src;
      if ( Src || v80 )
      {
        v45 = 8;
        goto LABEL_55;
      }
    }
    else
    {
      v44 = Src;
    }
    v45 = 0;
LABEL_55:
    v46 = HIDWORD(Size);
    LODWORD(v81) = HIDWORD(Size) + Size - v45 + 152;
    v47 = (unsigned int)v81;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v81, 0x70416553u);
    v49 = PoolWithTag;
    if ( !PoolWithTag )
    {
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_19;
    }
    memset(PoolWithTag, 0, v47);
    v50 = a10;
    *((_DWORD *)v49 + 34) = a12;
    if ( !a12 )
      v50 = a9;
    *((_DWORD *)v49 + 33) = 4;
    *(_DWORD *)v49 = v50 & 0xFDFFFFFF;
    if ( v86 )
    {
      v51 = *(_QWORD *)(v86 + 72);
      if ( v51 )
      {
        *(_OWORD *)(v49 + 4) = *(_OWORD *)(v51 + 88);
        *(_OWORD *)(v49 + 20) = *(_OWORD *)(v51 + 104);
        *(_OWORD *)(v49 + 36) = *(_OWORD *)(v51 + 120);
        *(_OWORD *)(v49 + 52) = *(_OWORD *)(v51 + 136);
        *(_OWORD *)(v49 + 68) = *(_OWORD *)(v51 + 152);
        *(_OWORD *)(v49 + 84) = *(_OWORD *)(v51 + 168);
        *(_OWORD *)(v49 + 100) = *(_OWORD *)(v51 + 184);
        *(_OWORD *)(v49 + 116) = *(_OWORD *)(v51 + 200);
      }
    }
    if ( v44 )
      memmove(v49 + 144, v44, v46);
    if ( v80 )
      memmove(&v49[v46 + 144], v80, (unsigned int)Size);
    HIDWORD(v92[39]) = (_DWORD)v81;
    v52 = a10;
    LODWORD(v92[39]) = 29;
    v92[42] = v49;
    v92[43] = 0x40000000ALL;
    if ( !a12 )
      v52 = a9;
    v92[44] = v52;
    if ( a11 )
    {
      v53 = *a11;
      if ( *a11 )
      {
        LODWORD(v92[47]) = 8;
        v92[50] = a11;
        HIDWORD(v92[47]) = 12 * v53 + 8;
      }
    }
    v54 = 12;
    LODWORD(v92[1]) = 12;
    if ( a16 )
    {
      v55 = 0;
      v56 = 0LL;
      v57 = 2 - (a12 != 0);
      v58 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v55 || (v57 & *v58) != 0 )
          v56 = (unsigned int)(v56 + 1);
        ++v55;
        v58 += 24;
      }
      while ( v55 < a16 );
      if ( (_DWORD)v56 )
      {
        v59 = (char *)ExAllocatePoolWithTag(PagedPool, 24 * v56, 0x70416553u);
        v84 = v59;
        if ( !v59 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_101:
          ExFreePoolWithTag(v49, 0);
LABEL_102:
          v22 = Src;
          goto LABEL_20;
        }
        v60 = (_OWORD *)(a15 + 4);
        v61 = 0LL;
        v62 = 0;
        v63 = a17;
        v64 = v59;
        do
        {
          if ( !v62 || (v57 & *((_WORD *)v60 - 1)) != 0 )
          {
            v65 = 3 * v61;
            *(_OWORD *)&v59[8 * v65] = *v60;
            *(_WORD *)&v59[8 * v65 + 18] = *((_WORD *)v60 - 2);
            if ( v62 )
            {
              *(_WORD *)&v59[24 * v61 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v59[24 * v61 + 20] = *v63;
            }
            else
            {
              *(_WORD *)&v59[24 * v61 + 16] = 1;
              *(_DWORD *)&v59[24 * v61 + 20] = 0;
            }
            v61 = (unsigned int)(v61 + 1);
          }
          ++v62;
          v60 += 3;
          ++v63;
        }
        while ( v62 < a16 );
        v66 = 3 * v61;
        v92[54] = v64;
        v19 = v90;
        v54 = 13;
        HIDWORD(v92[51]) = 8 * v66;
        LODWORD(v92[51]) = 9;
        v92[53] = 4LL;
        LODWORD(v92[1]) = 13;
        HIDWORD(v92[0]) = 4661;
      }
    }
    v67 = v54;
    v68 = (unsigned __int16 *)P;
    LODWORD(v92[4 * v67 + 3]) = 27;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 4;
    v92[4 * LODWORD(v92[1]) + 4] = *((unsigned int *)v82 + 32);
    ++LODWORD(v92[1]);
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 11;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 8;
    v92[4 * LODWORD(v92[1]) + 4] = a13;
    ++LODWORD(v92[1]);
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 2;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = *v68 + 16;
    v69 = v77;
    v92[4 * LODWORD(v92[1]) + 6] = v68;
    v70 = ++LODWORD(v92[1]);
    v71 = v69 - 117;
    if ( (!v71 || v71 == 12) && v19 && HIDWORD(v92[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v72 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v83, (ULONG *)&Size + 1, &v75);
      v19 = v83;
      AllocatedFullProcessImageName = v72;
      if ( v72 < 0 )
        goto LABEL_99;
      v73 = v83;
      LODWORD(v92[4 * v70 + 3]) = 31;
      v74 = SepSecurityDescriptorStrictLength(v73);
      HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = v74;
      v92[4 * LODWORD(v92[1]) + 6] = v19;
      v92[4 * LODWORD(v92[1]) + 4] = 32LL;
      v92[4 * LODWORD(v92[1]) + 5] = 0LL;
      v70 = v92[1];
    }
    LODWORD(v92[1]) = v70 + 1;
    SepAdtLogAuditRecord(v92);
LABEL_99:
    if ( v84 )
      ExFreePoolWithTag(v84, 0);
    goto LABEL_101;
  }
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v75 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v75) && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v76 && v80 )
    ExFreePoolWithTag(v80, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
