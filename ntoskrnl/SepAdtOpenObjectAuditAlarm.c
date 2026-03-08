/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x1409C930C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x14078D9F8 (SeAuditHandleCreation.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14085ED00 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x1403521C8 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1405B6898 (SepCheckAndCopySelfRelativeSD.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepSecurityDescriptorStrictLength @ 0x1407A5314 (SepSecurityDescriptorStrictLength.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepSDContainsAttributeACE @ 0x1409CE498 (SepSDContainsAttributeACE.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        __int16 a1,
        const int *a2,
        __int64 *a3,
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
        char *a18,
        __int64 a19)
{
  __int16 *v19; // r15
  __int64 v22; // rbx
  char *v24; // rax
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int8 v31; // r9
  const int *v32; // rdx
  __int64 v33; // r11
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  PVOID v44; // r13
  int v45; // ecx
  PVOID v46; // rbx
  void *v47; // r14
  size_t v48; // r12
  char *Pool2; // rax
  char *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // rax
  int v53; // r14d
  unsigned __int8 v54; // r8
  __int64 v55; // rcx
  unsigned int v56; // ecx
  int v57; // r8d
  unsigned int v58; // ecx
  unsigned int v59; // edx
  __int64 v60; // rax
  unsigned __int16 v61; // r12
  _WORD *v62; // r8
  char *v63; // rax
  _OWORD *v64; // r9
  unsigned int v65; // r8d
  unsigned int v66; // edx
  _DWORD *v67; // r10
  __int64 v68; // rcx
  unsigned __int16 *v69; // rdx
  int v70; // ecx
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int16 v75; // [rsp+28h] [rbp-E0h] BYREF
  char v76; // [rsp+2Ah] [rbp-DEh] BYREF
  int v77; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  PVOID v79; // [rsp+38h] [rbp-D0h]
  void *v80; // [rsp+40h] [rbp-C8h]
  PVOID Src; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v82; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v83; // [rsp+58h] [rbp-B0h]
  __int16 *v84; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v85; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  char *v87; // [rsp+78h] [rbp-90h]
  __int64 v88; // [rsp+80h] [rbp-88h]
  __int64 *v89; // [rsp+88h] [rbp-80h]
  __int16 *v90; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v91; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v92[132]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v93; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v89 = a3;
  LOWORD(v77) = a1;
  v90 = a6;
  v84 = a6;
  v83 = a8;
  v88 = a19;
  memset(v92, 0, 0x418uLL);
  v91.ClientToken = a7;
  v22 = 0LL;
  v85 = 0LL;
  P = 0LL;
  *(_QWORD *)&v91.ImpersonationLevel = 0LL;
  v91.ProcessAuditId = 0LL;
  Size = 0LL;
  v79 = 0LL;
  Src = 0LL;
  v80 = 0LL;
  v82 = 0LL;
  v76 = 0;
  v75 = 0;
  v93 = 0LL;
  v91.PrimaryToken = a8;
  if ( !SepAdtAuditThisEventWithContext(123LL, a12, a12 == 0, &v91) )
    return 1;
  v24 = (char *)&v93;
  if ( a18 )
    v24 = a18;
  v87 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_44;
  if ( a7 )
  {
    v22 = a7[3];
    v27 = (__int64 *)a7[19];
  }
  else
  {
    v27 = (__int64 *)v83[19];
  }
  v28 = *v27;
  v29 = v83[3];
  v30 = 8;
  HIDWORD(v92[0]) = 4656;
  LOWORD(v92[2]) = v77;
  v31 = a12;
  if ( a14 == 2 )
    v30 = 3;
  WORD1(v92[2]) = 8;
  LODWORD(v92[0]) = v30;
  if ( !a12 )
    WORD1(v92[2]) = 16;
  v32 = &SeSubsystemName;
  v33 = 4LL;
  if ( a2 )
    v32 = a2;
  LODWORD(v92[3]) = 4;
  v34 = *(unsigned __int8 *)(v28 + 1);
  v92[6] = v28;
  LODWORD(v92[7]) = 1;
  v92[10] = v32;
  v92[11] = 0x800000005LL;
  HIDWORD(v92[3]) = 4 * v34 + 8;
  v35 = *(unsigned __int16 *)v32 + 16;
  v92[12] = v22;
  HIDWORD(v92[7]) = v35;
  if ( !a7 )
    v92[12] = v29;
  LODWORD(v92[15]) = 1;
  HIDWORD(v92[15]) = v35;
  v92[18] = v32;
  LODWORD(v92[1]) = 4;
  if ( !a4 )
  {
    AllocatedFullProcessImageName = -1073741811;
LABEL_44:
    v46 = v79;
    goto LABEL_45;
  }
  HIDWORD(v92[19]) = *a4 + 16;
  LODWORD(v92[19]) = 1;
  v92[22] = a4;
  if ( a5 )
  {
    if ( (_WORD)v77 == 116 || (LODWORD(v92[23]) = 1, (_WORD)v77 == 128) )
      LODWORD(v92[23]) = 2;
    v36 = *a5;
    v92[26] = a5;
    HIDWORD(v92[23]) = v36 + 16;
  }
  v92[27] = 0x80000000BLL;
  if ( v89 )
  {
    IsKernelHandle = ObpIsKernelHandle(*v89, 0);
    v40 = v39 ^ 0xFFFFFFFF80000000uLL;
    if ( !IsKernelHandle )
      v40 = v38;
    v92[28] = v40 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    v92[28] = 0LL;
  }
  v92[34] = v87;
  v41 = a10;
  v92[31] = 0x100000000DLL;
  LODWORD(v92[35]) = 7;
  HIDWORD(v92[35]) = v33;
  v92[37] = v33;
  if ( !v31 )
    v41 = a9;
  v42 = v88;
  v92[36] = v41;
  LODWORD(v92[1]) = 9;
  if ( !v88 || (v43 = *(_QWORD *)(v88 + 72)) == 0 )
  {
    v44 = v79;
    goto LABEL_41;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(v43 + 56),
                                    &Src,
                                    (ULONG *)&Size,
                                    (_BYTE *)&v75 + 1);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v46 = Src;
LABEL_45:
    v47 = v80;
    goto LABEL_46;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(*(_QWORD *)(v42 + 72) + 64LL),
                                    &v82,
                                    (ULONG *)&Size + 1,
                                    &v76);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    v44 = Src;
    v80 = v82;
    v79 = Src;
    if ( Src || v82 )
    {
      v45 = 8;
      goto LABEL_42;
    }
LABEL_41:
    v45 = 0;
LABEL_42:
    v48 = (unsigned int)(HIDWORD(Size) - v45 + Size + 152);
    Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v48, 1883333971LL);
    v87 = Pool2;
    v50 = Pool2;
    if ( !Pool2 )
    {
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_44;
    }
    memset(Pool2, 0, v48);
    v51 = a10;
    *((_DWORD *)v50 + 34) = a12;
    if ( !a12 )
      v51 = a9;
    *((_DWORD *)v50 + 33) = 4;
    *(_DWORD *)v50 = v51 & 0xFDFFFFFF;
    if ( v88 )
    {
      v52 = *(_QWORD *)(v88 + 72);
      if ( v52 )
      {
        *(_OWORD *)(v50 + 4) = *(_OWORD *)(v52 + 88);
        *(_OWORD *)(v50 + 20) = *(_OWORD *)(v52 + 104);
        *(_OWORD *)(v50 + 36) = *(_OWORD *)(v52 + 120);
        *(_OWORD *)(v50 + 52) = *(_OWORD *)(v52 + 136);
        *(_OWORD *)(v50 + 68) = *(_OWORD *)(v52 + 152);
        *(_OWORD *)(v50 + 84) = *(_OWORD *)(v52 + 168);
        *(_OWORD *)(v50 + 100) = *(_OWORD *)(v52 + 184);
        *(_OWORD *)(v50 + 116) = *(_OWORD *)(v52 + 200);
      }
    }
    v53 = Size;
    if ( v44 )
      memmove(v50 + 144, v44, (unsigned int)Size);
    if ( v80 )
      memmove(&v50[v53 + 144], v80, HIDWORD(Size));
    v54 = a12;
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 29;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = v48;
    v92[4 * LODWORD(v92[1]) + 6] = v50;
    ++LODWORD(v92[1]);
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 10;
    v55 = a10;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 4;
    if ( !a12 )
      v55 = a9;
    v92[4 * LODWORD(v92[1]) + 4] = v55;
    v56 = ++LODWORD(v92[1]);
    if ( a11 )
    {
      v57 = *a11;
      if ( *a11 )
      {
        LODWORD(v92[4 * v56 + 3]) = 8;
        HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 12 * v57 + 8;
        v92[4 * LODWORD(v92[1]) + 6] = a11;
        v56 = v92[1];
      }
      v54 = a12;
    }
    v58 = v56 + 1;
    LODWORD(v92[1]) = v58;
    if ( a16 )
    {
      v59 = 0;
      v60 = 0LL;
      v61 = 2 - (v54 != 0);
      v62 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v59 || (v61 & *v62) != 0 )
          v60 = (unsigned int)(v60 + 1);
        ++v59;
        v62 += 24;
      }
      while ( v59 < a16 );
      if ( (_DWORD)v60 )
      {
        v63 = (char *)ExAllocatePool2(256LL, 24 * v60, 1883333971LL);
        v85 = v63;
        if ( !v63 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_104:
          ExFreePoolWithTag(v50, 0);
          goto LABEL_44;
        }
        v64 = (_OWORD *)(a15 + 4);
        v65 = 0;
        v66 = 0;
        v67 = a17;
        do
        {
          if ( !v66 || (v61 & *((_WORD *)v64 - 1)) != 0 )
          {
            v68 = 3LL * v65;
            *(_OWORD *)&v63[8 * v68] = *v64;
            *(_WORD *)&v63[8 * v68 + 18] = *((_WORD *)v64 - 2);
            if ( v66 )
            {
              *(_WORD *)&v63[24 * v65 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v63[24 * v65 + 20] = *v67;
            }
            else
            {
              *(_WORD *)&v63[24 * v65 + 16] = 1;
              *(_DWORD *)&v63[24 * v65 + 20] = 0;
            }
            ++v65;
          }
          ++v66;
          v64 += 3;
          ++v67;
        }
        while ( v66 < a16 );
        v50 = v87;
        LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 9;
        HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 24 * v65;
        v92[4 * LODWORD(v92[1]) + 6] = v63;
        v19 = v90;
        v92[4 * LODWORD(v92[1]) + 5] = 4LL;
        v58 = LODWORD(v92[1]) + 1;
        HIDWORD(v92[0]) = 4661;
        ++LODWORD(v92[1]);
      }
    }
    v69 = (unsigned __int16 *)P;
    LODWORD(v92[4 * v58 + 3]) = 27;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 4;
    v92[4 * LODWORD(v92[1]) + 4] = *((unsigned int *)v83 + 32);
    ++LODWORD(v92[1]);
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 11;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = 8;
    v92[4 * LODWORD(v92[1]) + 4] = a13;
    ++LODWORD(v92[1]);
    LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 2;
    HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = *v69 + 16;
    v70 = (unsigned __int16)v77;
    v92[4 * LODWORD(v92[1]) + 6] = v69;
    ++LODWORD(v92[1]);
    v71 = v70 - 116;
    if ( (!v71 || v71 == 12) && v19 && HIDWORD(v92[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v72 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v84, (ULONG *)&Size, &v75);
      v19 = v84;
      AllocatedFullProcessImageName = v72;
      if ( v72 < 0 )
        goto LABEL_102;
      v73 = (__int64)v84;
      LODWORD(v92[4 * LODWORD(v92[1]) + 3]) = 31;
      v74 = SepSecurityDescriptorStrictLength(v73);
      HIDWORD(v92[4 * LODWORD(v92[1]) + 3]) = v74;
      v92[4 * LODWORD(v92[1]) + 6] = v19;
      v92[4 * LODWORD(v92[1]) + 4] = 32LL;
      v92[4 * LODWORD(v92[1]) + 5] = 0LL;
    }
    ++LODWORD(v92[1]);
    SepAdtLogAuditRecord(v92);
LABEL_102:
    if ( v85 )
      ExFreePoolWithTag(v85, 0);
    goto LABEL_104;
  }
  v46 = Src;
  v47 = v82;
LABEL_46:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v75 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v75) && v46 )
    ExFreePoolWithTag(v46, 0);
  if ( v76 && v47 )
    ExFreePoolWithTag(v47, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
