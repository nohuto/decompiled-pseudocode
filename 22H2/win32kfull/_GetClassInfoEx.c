/*
 * XREFs of _GetClassInfoEx @ 0x1C00BC208
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C00BBEB0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     GetCPD @ 0x1C0078AC0 (GetCPD.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD198 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C00BF150 (GetClassPtr.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BFAAC (MapClientNeuterToClientPfn.c)
 *     MapServerToClientPfn @ 0x1C0160CD8 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01679E0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, char *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  int v10; // r15d
  __int64 *ClassPtr; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 CPD; // rax
  _BYTE v23[16]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v24[10]; // [rsp+48h] [rbp-50h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v24);
  v9 = 0;
  v10 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, a2) < 0 )
      LOWORD(a2) = 0;
    else
      LOWORD(a2) = UserFindAtom(gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  if ( !a1 )
    a1 = hModClient;
  ClassPtr = (__int64 *)GetClassPtr((unsigned __int16)a2, *(_QWORD *)(gptiCurrent + 424LL), a1);
  if ( ClassPtr )
  {
    v14 = *ClassPtr;
    if ( *ClassPtr != *(_QWORD *)v24[0] )
    {
      if ( v24[0] != gSmartObjNullRef && !--*(_DWORD *)(v24[0] + 8LL) )
      {
        if ( *(_BYTE *)(v24[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v24[0]);
      }
      if ( v14 )
      {
        v24[0] = *(_QWORD *)(v14 + 128);
        ++*(_DWORD *)(v24[0] + 8LL);
      }
      else
      {
        v24[0] = gSmartObjNullRef;
      }
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 4LL) && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 84LL);
    if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 64LL) == hModClient )
      {
        *(_QWORD *)(a3 + 24) = hModClient;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 64LL);
      }
    }
    else
    {
      if ( a1 == hModClient )
        a1 = 0LL;
      *(_QWORD *)(a3 + 24) = a1;
    }
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 80LL) )
      v15 = **(_QWORD **)(*(_QWORD *)v24[0] + 80LL);
    else
      v15 = 0LL;
    *(_QWORD *)(a3 + 32) = v15;
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) )
      v16 = **(_QWORD **)(*(_QWORD *)v24[0] + 88LL);
    else
      v16 = 0LL;
    *(_QWORD *)(a3 + 40) = v16;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 72LL);
    if ( (!*(_QWORD *)(*(_QWORD *)v24[0] + 112LL)
       || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 112LL) + 80LL) & 0x80u) == 0)
      && *(_QWORD *)(*(_QWORD *)v24[0] + 112LL) )
    {
      v17 = **(_QWORD **)(*(_QWORD *)v24[0] + 112LL);
    }
    else
    {
      v17 = 0LL;
    }
    *(_QWORD *)(a3 + 72) = v17;
    v18 = *(_QWORD *)v24[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v18, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v10 = 2 - (a5 != 0);
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v24[0], v10 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v19 = *(_QWORD *)(*(_QWORD *)v24[0] + 8LL);
    if ( a5 )
      v20 = *(_QWORD *)(v19 + 16);
    else
      v20 = *(_QWORD *)(v19 + 24);
    *a4 = v20;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411LL, v12, v13);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v24);
  return v9;
}
