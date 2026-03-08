/*
 * XREFs of _GetClassInfoEx @ 0x1C00314C8
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C002F120 (NtUserGetClassInfoEx.c)
 * Callees:
 *     GetCPD @ 0x1C000DFB4 (GetCPD.c)
 *     MapClientNeuterToClientPfn @ 0x1C002FFC4 (MapClientNeuterToClientPfn.c)
 *     _InnerGetClassPtr @ 0x1C0031A40 (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC6C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C012DC8C (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MapServerToClientPfn @ 0x1C024F514 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  _WORD *v18; // rax
  int v19; // r10d
  __int16 v20; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v22; // r13
  __int64 *ClassPtr; // rax
  _QWORD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v33; // cf
  __int64 CPD; // rax
  _QWORD v35[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+64h] [rbp-A4h]
  int v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  unsigned int v40; // [rsp+7Ch] [rbp-8Ch]
  _QWORD *v41; // [rsp+80h] [rbp-88h]
  _QWORD *v42; // [rsp+88h] [rbp-80h]
  _WORD *v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-70h]
  _WORD *v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  __int64 v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  __int64 v49; // [rsp+120h] [rbp+18h]

  v37 = a5;
  v40 = a5;
  v41 = (_QWORD *)a3;
  v42 = a4;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v35);
  v9 = 0;
  v10 = 0;
  v39 = gptiCurrent;
  v48 = gptiCurrent;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v11) + 8)
    || (v13 = SGDGetUserSessionState(v12), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 8))) )
  {
    v38 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  v14 = ((__int64 (*)(void))PsGetCurrentThreadWin32Thread)();
  ++*(_DWORD *)(v14 + 48);
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v16 = 2147483646LL;
    v47 = 2147483646LL;
    v45 = (_WORD *)a2;
    v17 = 256LL;
    v46 = 256LL;
    v18 = &gawchAtomScratch;
    v43 = &gawchAtomScratch;
    v19 = 0;
    v15 = 0LL;
    v44 = 0LL;
    while ( v17 )
    {
      if ( !v16 )
        goto LABEL_9;
      v20 = *(_WORD *)a2;
      if ( !*(_WORD *)a2 )
        goto LABEL_9;
      a2 += 2LL;
      v45 = (_WORD *)a2;
      *v18++ = v20;
      v43 = v18;
      v46 = --v17;
      v47 = --v16;
      v44 = ++v15;
    }
    v43 = --v18;
    v44 = --v15;
    v19 = -2147483643;
LABEL_9:
    *v18 = 0;
    if ( v19 < 0 )
    {
      LOWORD(a2) = 0;
      v36 = 0;
    }
    else
    {
      LOWORD(a2) = UserFindAtom(&gawchAtomScratch);
      v36 = a2;
    }
  }
  else
  {
    v36 = a2;
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v15);
  --*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v22 = hModClient;
  if ( !a1 )
    a1 = hModClient;
  v49 = a1;
  v42 = *(_QWORD **)(v39 + 424);
  v41 = v42 + 43;
  ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v42 + 43, a1);
  if ( ClassPtr )
    goto LABEL_22;
  v24 = v42;
  ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v42 + 44, 0LL);
  if ( !ClassPtr )
  {
    ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v41, v22);
    if ( !ClassPtr )
      ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v24 + 44, v22);
  }
  a1 = v49;
  if ( ClassPtr )
  {
LABEL_22:
    v25 = *ClassPtr;
    if ( *ClassPtr != *(_QWORD *)v35[0] )
    {
      if ( v35[0] != gSmartObjNullRef && !--*(_DWORD *)(v35[0] + 8LL) )
      {
        if ( *(_BYTE *)(v35[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v35[0]);
      }
      if ( v25 )
      {
        v35[0] = *(_QWORD *)(v25 + 128);
        ++*(_DWORD *)(v35[0] + 8LL);
      }
      else
      {
        v35[0] = gSmartObjNullRef;
      }
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 4LL) && *(_WORD *)(v39 + 632) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 84LL);
    if ( *(_WORD *)(v39 + 632) < 0x400u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 64LL) == hModClient )
      {
        *(_QWORD *)(a3 + 24) = hModClient;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 64LL);
      }
    }
    else
    {
      if ( a1 == hModClient )
        a1 = 0LL;
      *(_QWORD *)(a3 + 24) = a1;
    }
    if ( *(_QWORD *)(*(_QWORD *)v35[0] + 80LL) )
      v26 = **(_QWORD **)(*(_QWORD *)v35[0] + 80LL);
    else
      v26 = 0LL;
    *(_QWORD *)(a3 + 32) = v26;
    if ( *(_QWORD *)(*(_QWORD *)v35[0] + 88LL) )
      v27 = **(_QWORD **)(*(_QWORD *)v35[0] + 88LL);
    else
      v27 = 0LL;
    *(_QWORD *)(a3 + 40) = v27;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 72LL);
    if ( (!*(_QWORD *)(*(_QWORD *)v35[0] + 112LL)
       || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 112LL) + 80LL) & 0x80u) == 0)
      && *(_QWORD *)(*(_QWORD *)v35[0] + 112LL) )
    {
      v28 = **(_QWORD **)(*(_QWORD *)v35[0] + 112LL);
    }
    else
    {
      v28 = 0LL;
    }
    *(_QWORD *)(a3 + 72) = v28;
    v29 = *(_QWORD *)v35[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v29, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v33 = v37 != 0;
        v37 = -v37;
        v10 = 2 - v33;
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v35[0], v10 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v30 = *(_QWORD *)(*(_QWORD *)v35[0] + 8LL);
    if ( a5 )
      v31 = *(_QWORD *)(v30 + 16);
    else
      v31 = *(_QWORD *)(v30 + 24);
    *a4 = v31;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v35[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411LL);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v35);
  return v9;
}
