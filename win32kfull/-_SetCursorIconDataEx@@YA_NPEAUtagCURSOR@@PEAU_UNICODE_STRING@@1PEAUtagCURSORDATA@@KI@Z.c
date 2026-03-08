/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8
 * Callers:
 *     NtUserSetCursorIconDataEx @ 0x1C0064850 (NtUserSetCursorIconDataEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C1D64 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00ADAA0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreReferenceObject @ 0x1C00D7C78 (GreReferenceObject.c)
 *     AllocateUnicodeString @ 0x1C00E9BB0 (AllocateUnicodeString.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size,
        unsigned int DpiDependentMetric)
{
  __int64 v10; // rcx
  int v11; // r12d
  struct _UNICODE_STRING *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  PWSTR Buffer; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  WCHAR *v20; // rax
  int v21; // r11d
  __int64 v22; // rcx
  WCHAR v23; // r10
  __int64 v24; // rax
  void *v25; // r9
  _DWORD *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  HBITMAP v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  int *v40; // r15
  void **v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r10
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // r8
  int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r12
  __int64 v57; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  int v65; // esi
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  _DWORD *v70; // [rsp+70h] [rbp-C8h]
  _QWORD v71[2]; // [rsp+80h] [rbp-B8h] BYREF
  PWSTR v72; // [rsp+90h] [rbp-A8h]
  __int64 v73; // [rsp+98h] [rbp-A0h]
  __int64 v74; // [rsp+A0h] [rbp-98h]
  char *v75; // [rsp+A8h] [rbp-90h]
  __int128 v76; // [rsp+B0h] [rbp-88h]
  __int128 v77; // [rsp+C0h] [rbp-78h]
  __int128 v78; // [rsp+D0h] [rbp-68h]
  __int128 v79; // [rsp+E0h] [rbp-58h]
  __int64 v80; // [rsp+140h] [rbp+8h]

  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !DpiDependentMetric )
  {
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
  }
  v70 = (_DWORD *)((char *)a1 + 80);
  v10 = *((unsigned int *)a1 + 20);
  LODWORD(v10) = v10 & 0xFFFFF7FF;
  *((_DWORD *)a1 + 20) = v10;
  v71[0] = (char *)a4 + 24;
  v11 = v10 | *((_DWORD *)a4 + 6);
  if ( (*((_DWORD *)a4 + 6) & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v12 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  v75 = (char *)a1 + 56;
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v11 & 8) == 0 )
      {
        v59 = *((_QWORD *)a4 + 4);
        if ( v59 )
          GreDeleteObject(v59);
        v60 = *((_QWORD *)a4 + 5);
        if ( v60 )
          GreDeleteObject(v60);
      }
LABEL_92:
      *((_QWORD *)a1 + 8) = 0LL;
      v12->Length = 0;
      *((_WORD *)a1 + 29) = 0;
      return 0;
    }
  }
  else
  {
    *v12 = *a3;
  }
  if ( a2->Buffer )
  {
    if ( !*(_QWORD *)(SGDGetUserSessionState(v10) + 8)
      || (v14 = SGDGetUserSessionState(v13), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 8))) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v15);
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    Buffer = a2->Buffer;
    v18 = 2147483646LL;
    v74 = 2147483646LL;
    v72 = Buffer;
    v19 = 256LL;
    v73 = 256LL;
    v20 = (WCHAR *)&gawchAtomScratch;
    v21 = 0;
    v22 = 0LL;
    while ( v19 )
    {
      if ( !v18 )
        goto LABEL_14;
      v23 = *Buffer;
      if ( !*Buffer )
        goto LABEL_14;
      v72 = ++Buffer;
      *v20++ = v23;
      v73 = --v19;
      v74 = --v18;
      ++v22;
    }
    --v20;
    --v22;
    v21 = -2147483643;
LABEL_14:
    *v20 = 0;
    *((_WORD *)a1 + 36) = v21 < 0 ? 0 : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    v24 = PsGetCurrentThreadWin32Thread(v22);
    --*(_DWORD *)(v24 + 48);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v11 & 8) == 0 )
      {
        v61 = *((_QWORD *)a4 + 4);
        if ( v61 )
          GreDeleteObject(v61);
        v62 = *((_QWORD *)a4 + 5);
        if ( v62 )
          GreDeleteObject(v62);
      }
      if ( !v12->Length )
        return 0;
      Win32FreePool(*((void **)a1 + 8));
      goto LABEL_92;
    }
  }
  if ( (v11 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v25 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)Size, 1969451861LL);
    else
      v25 = 0LL;
    if ( !v25 )
    {
      if ( v12->Length )
      {
        Win32FreePool(*((void **)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        v12->Length = 0;
        *((_WORD *)a1 + 29) = 0;
      }
      v63 = *((unsigned __int16 *)a1 + 36);
      if ( (_WORD)v63 )
      {
        UserDeleteAtom(v63, a2, a3, v25);
        *((_WORD *)a1 + 36) = 0;
      }
      return 0;
    }
  }
  else
  {
    v25 = 0LL;
  }
  v26 = (_DWORD *)((char *)a1 + 80);
  v27 = (unsigned int)(*(_DWORD *)v71[0] | *v70);
  *v70 = v27;
  *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
  *((_DWORD *)a1 + 19) = DpiDependentMetric;
  if ( (v27 & 8) != 0 )
  {
    v40 = (int *)((char *)a1 + 88);
    *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
    *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
    *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
    v41 = (void **)((char *)a1 + 96);
    *((_QWORD *)a1 + 12) = v25;
    memmove(v25, *((const void **)a4 + 13), (unsigned int)Size);
    v42 = *((_QWORD *)a1 + 12);
    v43 = v42 + *((_QWORD *)a4 + 14);
    *((_QWORD *)a1 + 13) = v43;
    v44 = v42 + *((_QWORD *)a4 + 15);
    *((_QWORD *)a1 + 14) = v44;
    v45 = 0;
    v46 = *((_DWORD *)a1 + 23);
    if ( v46 <= 0 )
    {
LABEL_56:
      v49 = 0;
      if ( v46 > 0 )
      {
        v50 = 0LL;
        do
        {
          if ( (unsigned int)(100 * *(_DWORD *)(v50 + v44)) >= 6 )
            break;
          ++v49;
          v50 += 4LL;
        }
        while ( v49 < v46 );
      }
      if ( v49 != v46 )
      {
        v51 = 0;
        if ( *v40 <= 0 )
          goto LABEL_44;
        v52 = 0LL;
        v80 = 0LL;
        while ( 1 )
        {
          v53 = HMValidateHandle(*(_QWORD *)((char *)*v41 + v52), 3u);
          v56 = v53;
          if ( !v53 )
            break;
          v57 = *(unsigned int *)(v53 + 80);
          LOBYTE(v57) = v57 & 0x48;
          if ( (_BYTE)v57 != 64 || PsGetCurrentProcess(v57, v54, v55) != gpepCSRSS && !*(_QWORD *)(v56 + 24) )
            break;
          *(_QWORD *)((char *)*v41 + v80) = 0LL;
          v71[0] = (char *)*v41 + 8 * v51;
          v71[1] = v56;
          HMAssignmentLock(v71, 0LL);
          ++v51;
          v52 = v80 + 8;
          v80 += 8LL;
          if ( v51 >= *v40 )
          {
            v26 = (_DWORD *)((char *)a1 + 80);
            goto LABEL_44;
          }
        }
        v65 = v51 - 1;
        if ( v65 >= 0 )
        {
          v66 = 8LL * v65;
          do
          {
            HMAssignmentUnlock((char *)*v41 + v66);
            v66 -= 8LL;
            --v65;
          }
          while ( v65 >= 0 );
        }
        v64 = 1402;
        goto LABEL_101;
      }
    }
    else
    {
      v47 = 0LL;
      while ( 1 )
      {
        v48 = *(_DWORD *)(v47 + v43);
        if ( v48 < 0 || v48 >= *v40 )
          break;
        ++v45;
        v47 += 4LL;
        if ( v45 >= v46 )
          goto LABEL_56;
      }
    }
    v64 = 87;
LABEL_101:
    UserSetLastError(v64);
    Win32FreePool(*v41);
    *v41 = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 14) = 0LL;
    *v40 = 0;
    *((_DWORD *)a1 + 23) = 0;
    *((_DWORD *)a1 + 30) = 0;
    return 0;
  }
  v28 = SGDGetUserSessionState(v27);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v28 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v29 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v29 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v29 + 1272) & 0x8000000) != 0 )
    v29 = *(_QWORD *)(v29 + 1520);
  v31 = *(_QWORD *)(v29 + 424);
  *((_QWORD *)a4 + 6) = 0LL;
  *(_OWORD *)((char *)a4 + 56) = 0LL;
  *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
  *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
  *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
  *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
  *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  v32 = *((_QWORD *)a4 + 4);
  if ( v32 && (int)GreReferenceObject(v32) < 0 )
  {
    GreDeleteObject(*((_QWORD *)a4 + 4));
    v67 = *((_QWORD *)a4 + 5);
    if ( v67 )
      GreDeleteObject(v67);
  }
  else
  {
    v33 = *((_QWORD *)a4 + 5);
    if ( v33 && (int)GreReferenceObject(v33) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v68 = *((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v34 = *((_QWORD *)a4 + 4);
          if ( v34 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v34)
              && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
              && (DWORD2(v78) == SDWORD2(v76) >> 1 || DWORD2(v78) == DWORD2(v76))
              && SDWORD1(v78) >= SDWORD1(v76) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v35 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v35;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v35);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v31);
              v36 = *((_QWORD *)a1 + 12);
              if ( v36 )
              {
                GreSetBitmapOwner(v36, 0LL);
                GreIncQuotaCount(v31);
              }
              v37 = *((_QWORD *)a1 + 16);
              if ( v37 )
              {
                GreSetBitmapOwner(v37, 0LL);
                GreIncQuotaCount(v31);
              }
LABEL_44:
              *((_QWORD *)a1 + 6) = a1;
              if ( (*v26 & 0x40) == 0 )
              {
                v38 = *((_QWORD *)a1 + 3);
                if ( v38 )
                {
                  if ( (*v26 & 4) == 0 )
                    return 1;
                  *((_QWORD *)a1 + 4) = *(_QWORD *)(v38 + 728);
                  *(_QWORD *)(v38 + 728) = a1;
                }
                else
                {
                  *((_QWORD *)a1 + 4) = gpcurFirst;
                  gpcurFirst = (__int64)a1;
                }
                *v26 |= 0x100u;
              }
              return 1;
            }
          }
        }
      }
      UserSetLastError(87);
      v69 = *((_QWORD *)a4 + 4);
      if ( v69 )
        GreDereferenceObject(v69, 0LL);
      v68 = *((_QWORD *)a4 + 5);
    }
    if ( v68 )
      GreDereferenceObject(v68, 0LL);
  }
  return 0;
}
