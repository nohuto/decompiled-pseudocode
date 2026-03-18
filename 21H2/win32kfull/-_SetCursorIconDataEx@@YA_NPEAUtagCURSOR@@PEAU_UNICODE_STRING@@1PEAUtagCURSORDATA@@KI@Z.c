/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768
 * Callers:
 *     NtUserSetCursorIconDataEx @ 0x1C0025EE0 (NtUserSetCursorIconDataEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0023D00 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0026D68 (GreReferenceObject.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     AllocateUnicodeString @ 0x1C01105E4 (AllocateUnicodeString.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size,
        unsigned int a6)
{
  void *v8; // r15
  unsigned int DpiDependentMetric; // r13d
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // r14d
  struct _UNICODE_STRING *v13; // r12
  int v14; // ecx
  __int64 v15; // r14
  HSURF v16; // rcx
  HSURF v17; // rcx
  __int64 v18; // rcx
  HBITMAP v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // edx
  __int64 v33; // r8
  int v34; // esi
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int DpiForSystem; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // esi
  __int64 v45; // r14
  __int64 v46; // rcx
  HSURF v47; // rcx
  HSURF v48; // rcx
  _BYTE v49[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v50; // [rsp+24h] [rbp-A4h]
  _QWORD v51[2]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v52; // [rsp+40h] [rbp-88h]
  __int128 v53; // [rsp+50h] [rbp-78h]
  __int128 v54; // [rsp+60h] [rbp-68h]
  __int128 v55; // [rsp+70h] [rbp-58h]
  struct _UNICODE_STRING *v57; // [rsp+E0h] [rbp+18h]

  v57 = a3;
  v8 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  DpiDependentMetric = a6;
  if ( !a6 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
    a3 = v57;
  }
  v10 = *((_DWORD *)a1 + 20) & 0xFFFFF7FF;
  *((_DWORD *)a1 + 20) = v10;
  v11 = *((_DWORD *)a4 + 6);
  v12 = v11 | v10;
  v50 = v12;
  if ( (v11 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v13 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v12 & 8) == 0 )
      {
        v39 = *((_QWORD *)a4 + 4);
        if ( v39 )
          GreDeleteObject(v39);
        v40 = *((_QWORD *)a4 + 5);
        if ( v40 )
          GreDeleteObject(v40);
      }
      *((_QWORD *)a1 + 8) = 0LL;
      v13->Length = 0;
      *((_WORD *)a1 + 29) = 0;
      return 0;
    }
  }
  else
  {
    *v13 = *a3;
  }
  if ( a2->Buffer )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v49);
    *((_WORD *)a1 + 36) = (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, (char *)a2->Buffer) < 0
                        ? 0
                        : UserAddAtomEx(gawchAtomScratch, 0LL, 2LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v49);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v12 & 8) == 0 )
      {
        v41 = *((_QWORD *)a4 + 4);
        if ( v41 )
          GreDeleteObject(v41);
        v42 = *((_QWORD *)a4 + 5);
        if ( v42 )
          GreDeleteObject(v42);
      }
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((_QWORD *)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      return 0;
    }
  }
  if ( (v12 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v8 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)Size, 1969451861LL);
    if ( !v8 )
    {
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((_QWORD *)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      if ( *((_WORD *)a1 + 36) )
      {
        UserDeleteAtom();
        *((_WORD *)a1 + 36) = 0;
      }
      return 0;
    }
  }
  v14 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  *((_DWORD *)a1 + 20) = v14;
  *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
  *((_DWORD *)a1 + 19) = DpiDependentMetric;
  if ( (v14 & 8) != 0 )
  {
    *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
    *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
    *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
    *((_QWORD *)a1 + 12) = v8;
    memmove(v8, *((const void **)a4 + 13), (unsigned int)Size);
    v25 = *((_QWORD *)a1 + 12);
    v26 = v25 + *((_QWORD *)a4 + 14);
    *((_QWORD *)a1 + 13) = v26;
    v27 = v25 + *((_QWORD *)a4 + 15);
    *((_QWORD *)a1 + 14) = v27;
    v28 = 0;
    v29 = *((_DWORD *)a1 + 23);
    if ( v29 <= 0 )
    {
LABEL_44:
      v32 = 0;
      if ( v29 > 0 )
      {
        v33 = 0LL;
        do
        {
          if ( (unsigned int)(100 * *(_DWORD *)(v33 + v27)) >= 6 )
            break;
          ++v32;
          v33 += 4LL;
        }
        while ( v32 < v29 );
      }
      if ( v32 != v29 )
      {
        v34 = 0;
        if ( *((int *)a1 + 22) <= 0 )
          goto LABEL_25;
        v35 = 0LL;
        while ( 1 )
        {
          v36 = HMValidateHandle(*(_QWORD *)(*((_QWORD *)a1 + 12) + v35), 3u);
          v37 = v36;
          if ( !v36
            || (*(_DWORD *)(v36 + 80) & 0x48) != 0x40
            || PsGetCurrentProcess() != gpepCSRSS && !*(_QWORD *)(v37 + 24) )
          {
            break;
          }
          *(_QWORD *)(v35 + *((_QWORD *)a1 + 12)) = 0LL;
          v51[0] = *((_QWORD *)a1 + 12) + 8LL * v34;
          v51[1] = v37;
          HMAssignmentLock(v51, 0LL);
          ++v34;
          v35 += 8LL;
          if ( v34 >= *((_DWORD *)a1 + 22) )
            goto LABEL_25;
        }
        v44 = v34 - 1;
        if ( v44 >= 0 )
        {
          v45 = 8LL * v44;
          do
          {
            HMAssignmentUnlock(v45 + *((_QWORD *)a1 + 12));
            v45 -= 8LL;
            --v44;
          }
          while ( v44 >= 0 );
        }
        v43 = 1402LL;
        goto LABEL_85;
      }
    }
    else
    {
      v30 = 0LL;
      while ( 1 )
      {
        v31 = *(_DWORD *)(v30 + v26);
        if ( v31 < 0 || v31 >= *((_DWORD *)a1 + 22) )
          break;
        ++v28;
        v30 += 4LL;
        if ( v28 >= v29 )
          goto LABEL_44;
      }
    }
    v43 = 87LL;
LABEL_85:
    UserSetLastError(v43);
    Win32FreePool(*((_QWORD *)a1 + 12));
    *((_QWORD *)a1 + 12) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 14) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_DWORD *)a1 + 30) = 0;
    return 0;
  }
  v15 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 53);
  *((_QWORD *)a4 + 6) = 0LL;
  *(_OWORD *)((char *)a4 + 56) = 0LL;
  *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
  *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
  *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
  *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
  *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  v16 = (HSURF)*((_QWORD *)a4 + 4);
  if ( v16 && (int)GreReferenceObject(v16) < 0 )
  {
    GreDeleteObject(*((_QWORD *)a4 + 4));
    v46 = *((_QWORD *)a4 + 5);
    if ( v46 )
      GreDeleteObject(v46);
    return 0;
  }
  v17 = (HSURF)*((_QWORD *)a4 + 5);
  if ( v17 && (int)GreReferenceObject(v17) < 0 )
  {
    GreDeleteObject(*((_QWORD *)a4 + 5));
    v47 = (HSURF)*((_QWORD *)a4 + 4);
  }
  else
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      if ( *((_DWORD *)a1 + 36) )
      {
        v18 = *((_QWORD *)a4 + 4);
        if ( v18 )
        {
          if ( !*((_QWORD *)a4 + 5)
            || (unsigned int)GreExtGetObjectW(v18)
            && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
            && (DWORD2(v54) == SDWORD2(v52) >> 1 || DWORD2(v54) == DWORD2(v52))
            && SDWORD1(v54) >= SDWORD1(v52) )
          {
            *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
            v19 = (HBITMAP)*((_QWORD *)a4 + 5);
            *((_QWORD *)a1 + 12) = v19;
            *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v19);
            GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
            GreIncQuotaCount(v15);
            v20 = *((_QWORD *)a1 + 12);
            if ( v20 )
            {
              GreSetBitmapOwner(v20, 0LL);
              GreIncQuotaCount(v15);
            }
            v21 = *((_QWORD *)a1 + 16);
            if ( v21 )
            {
              GreSetBitmapOwner(v21, 0LL);
              GreIncQuotaCount(v15);
            }
LABEL_25:
            *((_QWORD *)a1 + 6) = a1;
            v22 = *((_DWORD *)a1 + 20);
            if ( (v22 & 0x40) == 0 )
            {
              v23 = *((_QWORD *)a1 + 3);
              if ( v23 )
              {
                if ( (v22 & 4) == 0 )
                  return 1;
                *((_QWORD *)a1 + 4) = *(_QWORD *)(v23 + 736);
                *(_QWORD *)(v23 + 736) = a1;
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
    v48 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v48 )
      GreDereferenceObject(v48, 0);
    v47 = (HSURF)*((_QWORD *)a4 + 5);
  }
  if ( v47 )
    GreDereferenceObject(v47, 0);
  return 0;
}
