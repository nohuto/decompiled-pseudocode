/*
 * XREFs of ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0065454
 * Callers:
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C0007F90 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserSetCursorIconData @ 0x1C00659A0 (NtUserSetCursorIconData.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004B674 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreDereferenceObject @ 0x1C004B8AC (GreDereferenceObject.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     GreReferenceObject @ 0x1C0065940 (GreReferenceObject.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A9B10 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C01243E4 (AllocateUnicodeString.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

char __fastcall _SetCursorIconData(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size)
{
  void *v8; // r12
  __int64 v9; // rcx
  int v10; // r14d
  struct _UNICODE_STRING *v11; // r15
  unsigned int DpiForSystem; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  HSURF v15; // rcx
  HSURF v16; // rcx
  HSURF v17; // rcx
  HBITMAP v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // esi
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // r14
  __int64 v48; // rcx
  HSURF v49; // rcx
  HSURF v50; // rcx
  _QWORD v51[3]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v52; // [rsp+48h] [rbp-80h]
  __int128 v53; // [rsp+58h] [rbp-70h]
  __int128 v54; // [rsp+68h] [rbp-60h]
  __int128 v55; // [rsp+78h] [rbp-50h]

  v8 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  *((_DWORD *)a1 + 20) &= ~0x800u;
  v9 = *((unsigned int *)a4 + 6);
  v10 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  if ( (v9 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v11 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v10 & 8) == 0 )
      {
        v40 = *((_QWORD *)a4 + 4);
        if ( v40 )
          GreDeleteObject(v40);
        v41 = *((_QWORD *)a4 + 5);
        if ( v41 )
          GreDeleteObject(v41);
      }
      *((_QWORD *)a1 + 8) = 0LL;
      v11->Length = 0;
      *((_WORD *)a1 + 29) = 0;
      return 0;
    }
  }
  else
  {
    *v11 = *a3;
  }
  if ( a2->Buffer )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v51);
    *((_WORD *)a1 + 36) = (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, (char *)a2->Buffer) < 0
                        ? 0
                        : UserAddAtomEx(gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v51);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v10 & 8) == 0 )
      {
        v42 = *((_QWORD *)a4 + 4);
        if ( v42 )
          GreDeleteObject(v42);
        v43 = *((_QWORD *)a4 + 5);
        if ( v43 )
          GreDeleteObject(v43);
      }
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((void **)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      return 0;
    }
  }
  if ( (v10 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v8 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v8 )
    {
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((void **)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      v44 = *((unsigned __int16 *)a1 + 36);
      if ( (_WORD)v44 )
      {
        UserDeleteAtom(v44);
        *((_WORD *)a1 + 36) = 0;
      }
      return 0;
    }
  }
  *((_DWORD *)a1 + 20) |= *((_DWORD *)a4 + 6);
  *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
  DpiForSystem = GetDpiForSystem(v9);
  *((_DWORD *)a1 + 19) = GetDpiDependentMetric(7LL, DpiForSystem);
  if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    v14 = *((_QWORD *)_GetCurrentLogicalCursorThread(v13) + 53);
    *((_QWORD *)a4 + 6) = 0LL;
    *(_OWORD *)((char *)a4 + 56) = 0LL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v15 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v15 && (int)GreReferenceObject(v15) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v48 = *((_QWORD *)a4 + 5);
      if ( v48 )
        GreDeleteObject(v48);
      return 0;
    }
    v16 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v16 && (int)GreReferenceObject(v16) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v49 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v17 = (HSURF)*((_QWORD *)a4 + 4);
          if ( v17 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v17)
              && (unsigned int)GreExtGetObjectW(*((HSURF *)a4 + 5))
              && (DWORD2(v54) == SDWORD2(v52) >> 1 || DWORD2(v54) == DWORD2(v52))
              && SDWORD1(v54) >= SDWORD1(v52) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v18 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v18;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v18);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v14);
              v19 = *((_QWORD *)a1 + 12);
              if ( v19 )
              {
                GreSetBitmapOwner(v19, 0LL);
                GreIncQuotaCount(v14);
              }
              v20 = *((_QWORD *)a1 + 16);
              if ( v20 )
              {
                GreSetBitmapOwner(v20, 0LL);
                GreIncQuotaCount(v14);
              }
LABEL_23:
              *((_QWORD *)a1 + 6) = a1;
              v21 = *((_DWORD *)a1 + 20);
              if ( (v21 & 0x40) == 0 )
              {
                v22 = *((_QWORD *)a1 + 3);
                if ( v22 )
                {
                  if ( (v21 & 4) == 0 )
                    return 1;
                  *((_QWORD *)a1 + 4) = *(_QWORD *)(v22 + 736);
                  *(_QWORD *)(v22 + 736) = a1;
                }
                else
                {
                  *((_QWORD *)a1 + 4) = gpcurFirst;
                  gpcurFirst = a1;
                }
                *((_DWORD *)a1 + 20) |= 0x100u;
              }
              return 1;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v50 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v50 )
        GreDereferenceObject(v50, 0);
      v49 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v49 )
      GreDereferenceObject(v49, 0);
    return 0;
  }
  *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
  *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
  *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
  *((_QWORD *)a1 + 12) = v8;
  memmove(v8, *((const void **)a4 + 13), (unsigned int)Size);
  v24 = *((_QWORD *)a1 + 12);
  v25 = v24 + *((_QWORD *)a4 + 14);
  *((_QWORD *)a1 + 13) = v25;
  v26 = v24 + *((_QWORD *)a4 + 15);
  *((_QWORD *)a1 + 14) = v26;
  v27 = 0;
  v28 = *((_DWORD *)a1 + 23);
  if ( v28 > 0 )
  {
    v29 = 0LL;
    do
    {
      v30 = *(_DWORD *)(v29 + v25);
      if ( v30 < 0 || v30 >= *((_DWORD *)a1 + 22) )
        goto LABEL_81;
      ++v27;
      v29 += 4LL;
    }
    while ( v27 < v28 );
  }
  v31 = 0LL;
  if ( v28 > 0 )
  {
    v32 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v32 + v26)) >= 6 )
        break;
      v31 = (unsigned int)(v31 + 1);
      v32 += 4LL;
    }
    while ( (int)v31 < v28 );
  }
  if ( (_DWORD)v31 == v28 )
  {
LABEL_81:
    v45 = 87LL;
    goto LABEL_83;
  }
  v33 = 0;
  if ( *((int *)a1 + 22) <= 0 )
    goto LABEL_23;
  v34 = 0LL;
  while ( 1 )
  {
    LOBYTE(v31) = 3;
    v35 = HMValidateHandle(*(_QWORD *)(v34 + *((_QWORD *)a1 + 12)), v31);
    v38 = v35;
    if ( !v35 )
      break;
    v39 = *(unsigned int *)(v35 + 80);
    LOBYTE(v39) = v39 & 0x48;
    if ( (_BYTE)v39 != 64 || PsGetCurrentProcess(v39, v36, v37) != gpepCSRSS && !*(_QWORD *)(v38 + 24) )
      break;
    *(_QWORD *)(v34 + *((_QWORD *)a1 + 12)) = 0LL;
    v51[0] = *((_QWORD *)a1 + 12) + 8LL * v33;
    v51[1] = v38;
    HMAssignmentLock(v51);
    ++v33;
    v34 += 8LL;
    if ( v33 >= *((_DWORD *)a1 + 22) )
      goto LABEL_23;
  }
  v46 = v33 - 1;
  if ( v46 >= 0 )
  {
    v47 = 8LL * v46;
    do
    {
      HMAssignmentUnlock(v47 + *((_QWORD *)a1 + 12));
      v47 -= 8LL;
      --v46;
    }
    while ( v46 >= 0 );
  }
  v45 = 1402LL;
LABEL_83:
  UserSetLastError(v45);
  Win32FreePool(*((void **)a1 + 12));
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 30) = 0;
  return 0;
}
