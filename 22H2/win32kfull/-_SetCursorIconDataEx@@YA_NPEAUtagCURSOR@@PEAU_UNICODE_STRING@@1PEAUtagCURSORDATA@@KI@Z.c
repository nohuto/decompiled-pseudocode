/*
 * XREFs of ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC
 * Callers:
 *     NtUserSetCursorIconDataEx @ 0x1C002CD90 (NtUserSetCursorIconDataEx.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0030EF0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreReferenceObject @ 0x1C0079EC8 (GreReferenceObject.c)
 *     AllocateUnicodeString @ 0x1C00B1008 (AllocateUnicodeString.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

char __fastcall _SetCursorIconDataEx(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size,
        unsigned int DpiDependentMetric)
{
  unsigned int DpiForSystem; // eax
  AtomicExecutionCheck *v11; // rcx
  unsigned int v12; // r12d
  struct _UNICODE_STRING *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  PWSTR Buffer; // r10
  __int64 v18; // r9
  __int64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  WCHAR v23; // r11
  int v24; // r11d
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  int *v31; // r12
  void **v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r10
  int v36; // edx
  int v37; // ecx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r14
  int v50; // eax
  int v51; // ebx
  __int64 v52; // rsi
  PERESOURCE *v53; // rax
  __int64 v54; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v56; // rbx
  HSURF v57; // rcx
  __int64 v58; // rcx
  HSURF v59; // rcx
  HSURF v60; // rcx
  __int64 v61; // rcx
  HBITMAP v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  HSURF v67; // rcx
  char v68; // [rsp+20h] [rbp-F8h]
  _DWORD *v69; // [rsp+50h] [rbp-C8h]
  _QWORD v70[2]; // [rsp+60h] [rbp-B8h] BYREF
  PWSTR v71; // [rsp+70h] [rbp-A8h]
  __int64 v72; // [rsp+78h] [rbp-A0h]
  __int64 v73; // [rsp+80h] [rbp-98h]
  char *v74; // [rsp+88h] [rbp-90h]
  __int128 v75; // [rsp+90h] [rbp-88h]
  __int128 v76; // [rsp+A0h] [rbp-78h]
  __int128 v77; // [rsp+B0h] [rbp-68h]
  __int128 v78; // [rsp+C0h] [rbp-58h]
  __int64 v79; // [rsp+120h] [rbp+8h]

  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( !DpiDependentMetric )
  {
    DpiForSystem = GetDpiForSystem(a1, a2);
    DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
  }
  v69 = (_DWORD *)((char *)a1 + 80);
  v11 = (AtomicExecutionCheck *)*((unsigned int *)a1 + 20);
  LODWORD(v11) = (unsigned int)v11 & 0xFFFFF7FF;
  *((_DWORD *)a1 + 20) = (_DWORD)v11;
  v70[0] = (char *)a4 + 24;
  v12 = (unsigned int)v11 | *((_DWORD *)a4 + 6);
  if ( (*((_DWORD *)a4 + 6) & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v13 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  v74 = (char *)a1 + 56;
  if ( !a3->Length )
  {
    *v13 = *a3;
    goto LABEL_13;
  }
  if ( (unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
  {
LABEL_13:
    if ( a2->Buffer )
    {
      AtomicExecutionCheck::EnforceConsistency(v11);
      v16 = ((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
      ++*(_DWORD *)(v16 + 48);
      v68 = 1;
      Buffer = a2->Buffer;
      v18 = 2147483646LL;
      v73 = 2147483646LL;
      v71 = Buffer;
      v19 = 256LL;
      v72 = 256LL;
      v20 = (WCHAR *)&gawchAtomScratch;
      v21 = 0LL;
      v22 = 2LL;
      while ( v19 )
      {
        if ( !v18 || (v23 = *Buffer) == 0 )
        {
          v24 = 0;
          goto LABEL_21;
        }
        v71 = ++Buffer;
        *v20++ = v23;
        v72 = --v19;
        v73 = --v18;
        ++v21;
      }
      --v20;
      --v21;
      v24 = -2147483643;
LABEL_21:
      *v20 = 0;
      *((_WORD *)a1 + 36) = v24 < 0 ? 0 : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v21, v19, v22);
      --*(_DWORD *)(CurrentThreadWin32Thread + 48);
      if ( !*((_WORD *)a1 + 36) )
      {
        if ( (v12 & 8) == 0 )
        {
          v26 = *((_QWORD *)a4 + 4);
          if ( v26 )
            GreDeleteObject(v26);
          v27 = *((_QWORD *)a4 + 5);
          if ( v27 )
            GreDeleteObject(v27);
        }
        if ( !v13->Length )
          return 0;
        Win32FreePool(*((void **)a1 + 8));
        goto LABEL_32;
      }
    }
    if ( (v12 & 8) != 0 )
    {
      if ( (_DWORD)Size )
        v28 = (void *)Win32AllocPoolWithQuotaZInit((unsigned int)Size, 1969451861LL);
      else
        v28 = 0LL;
      if ( !v28 )
      {
        if ( v13->Length )
        {
          Win32FreePool(*((void **)a1 + 8));
          *((_QWORD *)a1 + 8) = 0LL;
          v13->Length = 0;
          *((_WORD *)a1 + 29) = 0;
        }
        v29 = *((unsigned __int16 *)a1 + 36);
        if ( (_WORD)v29 )
        {
          UserDeleteAtom(v29, a2);
          *((_WORD *)a1 + 36) = 0;
        }
        return 0;
      }
    }
    else
    {
      v28 = 0LL;
    }
    v30 = (unsigned int)(*(_DWORD *)v70[0] | *v69);
    *v69 = v30;
    *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
    *((_DWORD *)a1 + 19) = DpiDependentMetric;
    if ( (v30 & 8) != 0 )
    {
      v31 = (int *)((char *)a1 + 88);
      *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
      *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
      *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
      v32 = (void **)((char *)a1 + 96);
      *((_QWORD *)a1 + 12) = v28;
      memmove(v28, *((const void **)a4 + 13), (unsigned int)Size);
      v33 = *((_QWORD *)a1 + 12);
      v34 = v33 + *((_QWORD *)a4 + 14);
      *((_QWORD *)a1 + 13) = v34;
      v35 = v33 + *((_QWORD *)a4 + 15);
      *((_QWORD *)a1 + 14) = v35;
      v36 = 0;
      v37 = *((_DWORD *)a1 + 23);
      if ( v37 > 0 )
      {
        v38 = 0LL;
        do
        {
          v39 = *(_DWORD *)(v38 + v34);
          if ( v39 < 0 || v39 >= *v31 )
            goto LABEL_54;
          ++v36;
          v38 += 4LL;
        }
        while ( v36 < v37 );
      }
      v40 = 0;
      if ( v37 > 0 )
      {
        v41 = 0LL;
        do
        {
          if ( (unsigned int)(100 * *(_DWORD *)(v41 + v35)) >= 6 )
            break;
          ++v40;
          v41 += 4LL;
        }
        while ( v40 < v37 );
      }
      if ( v40 == v37 )
      {
LABEL_54:
        v42 = 87LL;
LABEL_55:
        UserSetLastError(v42);
        Win32FreePool(*v32);
        *v32 = 0LL;
        *((_QWORD *)a1 + 13) = 0LL;
        *((_QWORD *)a1 + 14) = 0LL;
        *v31 = 0;
        *((_DWORD *)a1 + 23) = 0;
        *((_DWORD *)a1 + 30) = 0;
        return 0;
      }
      v43 = 0;
      if ( *v31 > 0 )
      {
        v44 = 0LL;
        v79 = 0LL;
        while ( 1 )
        {
          v45 = HMValidateHandle(*(_QWORD *)((char *)*v32 + v44), 3u);
          v49 = v45;
          if ( !v45 )
            break;
          v50 = *(_DWORD *)(v45 + 80);
          if ( (v50 & 8) != 0
            || (v50 & 0x40) == 0
            || PsGetCurrentProcess(v47, v46, v48) != gpepCSRSS && !*(_QWORD *)(v49 + 24) )
          {
            break;
          }
          *(_QWORD *)((char *)*v32 + v79) = 0LL;
          v70[0] = (char *)*v32 + 8 * v43;
          v70[1] = v49;
          HMAssignmentLock(v70, 0LL);
          ++v43;
          v44 = v79 + 8;
          v79 += 8LL;
          if ( v43 >= *v31 )
            goto LABEL_95;
        }
        v51 = v43 - 1;
        if ( v51 >= 0 )
        {
          v52 = 8LL * v51;
          do
          {
            HMAssignmentUnlock((char *)*v32 + v52);
            v52 -= 8LL;
            --v51;
          }
          while ( v51 >= 0 );
        }
        v42 = 1402LL;
        goto LABEL_55;
      }
LABEL_95:
      *((_QWORD *)a1 + 6) = a1;
      if ( (*v69 & 0x40) == 0 )
      {
        v65 = *((_QWORD *)a1 + 3);
        if ( !v65 )
        {
          *((_QWORD *)a1 + 4) = gpcurFirst;
          gpcurFirst = (__int64)a1;
LABEL_100:
          *v69 |= 0x100u;
          return 1;
        }
        if ( (*v69 & 4) != 0 )
        {
          *((_QWORD *)a1 + 4) = *(_QWORD *)(v65 + 728);
          *(_QWORD *)(v65 + 728) = a1;
          goto LABEL_100;
        }
      }
      return 1;
    }
    v53 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v30, v69, a3, v28, v68, v12);
    if ( !ExIsResourceAcquiredSharedLite(*v53) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v54 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v54 = *ThreadWin32Thread;
    if ( (*(_DWORD *)(v54 + 1272) & 0x8000000) != 0 )
      v54 = *(_QWORD *)(v54 + 1520);
    v56 = *(_QWORD *)(v54 + 424);
    *((_QWORD *)a4 + 6) = 0LL;
    *(_OWORD *)((char *)a4 + 56) = 0LL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v57 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v57 && (int)GreReferenceObject(v57) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v58 = *((_QWORD *)a4 + 5);
      if ( v58 )
        GreDeleteObject(v58);
      return 0;
    }
    v59 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v59 && (int)GreReferenceObject(v59) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v60 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v61 = *((_QWORD *)a4 + 4);
          if ( v61 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v61)
              && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
              && (DWORD2(v77) == SDWORD2(v75) >> 1 || DWORD2(v77) == DWORD2(v75))
              && SDWORD1(v77) >= SDWORD1(v75) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v62 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v62;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v62);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v56);
              v63 = *((_QWORD *)a1 + 12);
              if ( v63 )
              {
                GreSetBitmapOwner(v63, 0LL);
                GreIncQuotaCount(v56);
              }
              v64 = *((_QWORD *)a1 + 16);
              if ( v64 )
              {
                GreSetBitmapOwner(v64, 0LL);
                GreIncQuotaCount(v56);
              }
              goto LABEL_95;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v67 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v67 )
        GreDereferenceObject(v67, 0);
      v60 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v60 )
      GreDereferenceObject(v60, 0);
    return 0;
  }
  if ( (v12 & 8) == 0 )
  {
    v14 = *((_QWORD *)a4 + 4);
    if ( v14 )
      GreDeleteObject(v14);
    v15 = *((_QWORD *)a4 + 5);
    if ( v15 )
      GreDeleteObject(v15);
  }
LABEL_32:
  *((_QWORD *)a1 + 8) = 0LL;
  v13->Length = 0;
  *((_WORD *)a1 + 29) = 0;
  return 0;
}
