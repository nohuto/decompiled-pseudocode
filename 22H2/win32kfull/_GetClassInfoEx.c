/*
 * XREFs of _GetClassInfoEx @ 0x1C00CC438
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C00C9820 (NtUserGetClassInfoEx.c)
 * Callees:
 *     GetCPD @ 0x1C000ECF4 (GetCPD.c)
 *     MapClientNeuterToClientPfn @ 0x1C00CAF2C (MapClientNeuterToClientPfn.c)
 *     _InnerGetClassPtr @ 0x1C00CC96C (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A654 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A674 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     MapServerToClientPfn @ 0x1C024C854 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  int v9; // r15d
  AtomicExecutionCheck *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _WORD *v19; // rax
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 *ClassPtr; // rax
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int16 v36; // bx
  bool v37; // cf
  __int64 CPD; // rax
  _QWORD v39[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int16 v40; // [rsp+38h] [rbp-A0h]
  int v41; // [rsp+3Ch] [rbp-9Ch]
  __int64 v42; // [rsp+40h] [rbp-98h]
  unsigned int v43; // [rsp+4Ch] [rbp-8Ch]
  _QWORD *v44; // [rsp+50h] [rbp-88h]
  _WORD *v45; // [rsp+58h] [rbp-80h]
  __int64 v46; // [rsp+60h] [rbp-78h]
  unsigned __int16 *v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  __int64 v49; // [rsp+80h] [rbp-58h]
  __int64 v50; // [rsp+88h] [rbp-50h]
  __int64 v51; // [rsp+90h] [rbp-48h]
  __int64 v52; // [rsp+F0h] [rbp+18h]

  v41 = a5;
  v43 = a5;
  v51 = a3;
  v44 = a4;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v39);
  v9 = 0;
  v42 = gptiCurrent;
  v50 = gptiCurrent;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  AtomicExecutionCheck::EnforceConsistency(v10);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11, v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = 2147483646LL;
    v49 = 2147483646LL;
    v47 = (unsigned __int16 *)a2;
    v15 = 256LL;
    v48 = 256LL;
    v19 = &gawchAtomScratch;
    v45 = &gawchAtomScratch;
    v20 = 0;
    v16 = 0LL;
    v46 = 0LL;
    while ( v15 )
    {
      if ( !v17 )
        goto LABEL_7;
      v18 = *(unsigned __int16 *)a2;
      if ( !(_WORD)v18 )
        goto LABEL_7;
      a2 += 2LL;
      v47 = (unsigned __int16 *)a2;
      *v19++ = v18;
      v45 = v19;
      v48 = --v15;
      v49 = --v17;
      v46 = ++v16;
    }
    v45 = --v19;
    v46 = --v16;
    v20 = -2147483643;
LABEL_7:
    *v19 = 0;
    if ( v20 < 0 )
    {
      LOWORD(a2) = 0;
      v40 = 0;
    }
    else
    {
      LOWORD(a2) = UserFindAtom(&gawchAtomScratch, v15, v17, v18);
      v40 = a2;
    }
  }
  else
  {
    v40 = a2;
  }
  v21 = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  --*(_DWORD *)(v21 + 48);
  v23 = hModClient;
  if ( !a1 )
    a1 = hModClient;
  v52 = *(_QWORD *)(v42 + 424);
  v44 = (_QWORD *)(v52 + 344);
  ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v52 + 344, a1, v22);
  if ( ClassPtr
    || (ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v52 + 352, 0LL, v25)) != 0LL
    || (ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v44, v23, v26)) != 0LL
    || (ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)a2, v52 + 352, v23, v27)) != 0LL )
  {
    v29 = *ClassPtr;
    if ( *ClassPtr != *(_QWORD *)v39[0] )
    {
      if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
      {
        if ( *(_BYTE *)(v39[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
      }
      if ( v29 )
      {
        v39[0] = *(_QWORD *)(v29 + 128);
        ++*(_DWORD *)(v39[0] + 8LL);
      }
      else
      {
        v39[0] = gSmartObjNullRef;
      }
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 4LL) && *(_WORD *)(v42 + 632) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 84LL);
    if ( *(_WORD *)(v42 + 632) < 0x400u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 64LL) == hModClient )
      {
        *(_QWORD *)(a3 + 24) = hModClient;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 64LL);
      }
    }
    else
    {
      if ( a1 == hModClient )
        a1 = 0LL;
      *(_QWORD *)(a3 + 24) = a1;
    }
    if ( *(_QWORD *)(*(_QWORD *)v39[0] + 80LL) )
      v30 = **(_QWORD **)(*(_QWORD *)v39[0] + 80LL);
    else
      v30 = 0LL;
    *(_QWORD *)(a3 + 32) = v30;
    if ( *(_QWORD *)(*(_QWORD *)v39[0] + 88LL) )
      v31 = **(_QWORD **)(*(_QWORD *)v39[0] + 88LL);
    else
      v31 = 0LL;
    *(_QWORD *)(a3 + 40) = v31;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 72LL);
    if ( (!*(_QWORD *)(*(_QWORD *)v39[0] + 112LL)
       || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 112LL) + 80LL) & 0x80u) == 0)
      && *(_QWORD *)(*(_QWORD *)v39[0] + 112LL) )
    {
      v32 = **(_QWORD **)(*(_QWORD *)v39[0] + 112LL);
    }
    else
    {
      v32 = 0LL;
    }
    *(_QWORD *)(a3 + 72) = v32;
    v33 = *(_QWORD *)v39[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v33, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v37 = v41 != 0;
        v41 = -v41;
        v9 = 2 - v37;
      }
    }
    if ( v9 )
    {
      CPD = GetCPD(*(_QWORD *)v39[0], v9 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v34 = *(_QWORD *)(*(_QWORD *)v39[0] + 8LL);
    if ( a5 )
      v35 = *(_QWORD *)(v34 + 16);
    else
      v35 = *(_QWORD *)(v34 + 24);
    *a4 = v35;
    v36 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 8LL) + 2LL);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v39);
    return v36;
  }
  else
  {
    UserSetLastError(1411LL);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v39);
    return 0LL;
  }
}
