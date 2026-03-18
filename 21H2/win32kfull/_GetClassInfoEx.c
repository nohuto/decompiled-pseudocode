/*
 * XREFs of _GetClassInfoEx @ 0x1C007F338
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C007EFD0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C0070980 (GetClassPtr.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C007F75C (MapClientNeuterToClientPfn.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GetCPD @ 0x1C00E3DB8 (GetCPD.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A258 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A278 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     MapServerToClientPfn @ 0x1C025AE20 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, char *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  int v10; // r15d
  __int64 *ClassPtr; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 CPD; // rax
  _BYTE v22[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v23; // [rsp+24h] [rbp-64h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  _QWORD v25[9]; // [rsp+40h] [rbp-48h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v25);
  v9 = 0;
  v10 = 0;
  v24 = gptiCurrent;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v22);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, a2) < 0 )
    {
      LOWORD(a2) = 0;
      v23 = 0;
    }
    else
    {
      LOWORD(a2) = UserFindAtom(gawchAtomScratch);
      v23 = (__int16)a2;
    }
  }
  else
  {
    v23 = (__int16)a2;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
  if ( !a1 )
    a1 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
  ClassPtr = (__int64 *)GetClassPtr((unsigned __int16)a2, *(_QWORD *)(gptiCurrent + 424LL), a1);
  if ( ClassPtr )
  {
    v13 = *ClassPtr;
    if ( *ClassPtr != *(_QWORD *)v25[0] )
    {
      if ( v25[0] != gSmartObjNullRef && !--*(_DWORD *)(v25[0] + 8LL) )
      {
        if ( *(_BYTE *)(v25[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v25[0]);
      }
      if ( v13 )
      {
        v25[0] = *(_QWORD *)(v13 + 128);
        ++*(_DWORD *)(v25[0] + 8LL);
      }
      else
      {
        v25[0] = gSmartObjNullRef;
      }
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 4LL) && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 84LL);
    if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 64LL) == *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 64LL);
      }
    }
    else
    {
      if ( a1 == *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
        a1 = 0LL;
      *(_QWORD *)(a3 + 24) = a1;
    }
    if ( *(_QWORD *)(*(_QWORD *)v25[0] + 80LL) )
      v14 = **(_QWORD **)(*(_QWORD *)v25[0] + 80LL);
    else
      v14 = 0LL;
    *(_QWORD *)(a3 + 32) = v14;
    if ( *(_QWORD *)(*(_QWORD *)v25[0] + 88LL) )
      v15 = **(_QWORD **)(*(_QWORD *)v25[0] + 88LL);
    else
      v15 = 0LL;
    *(_QWORD *)(a3 + 40) = v15;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 72LL);
    if ( (!*(_QWORD *)(*(_QWORD *)v25[0] + 112LL)
       || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 112LL) + 80LL) & 0x80u) == 0)
      && *(_QWORD *)(*(_QWORD *)v25[0] + 112LL) )
    {
      v16 = **(_QWORD **)(*(_QWORD *)v25[0] + 112LL);
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)(a3 + 72) = v16;
    v17 = *(_QWORD *)v25[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v17, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v10 = 2 - (a5 != 0);
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v25[0], v10 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v18 = *(_QWORD *)(*(_QWORD *)v25[0] + 8LL);
    if ( a5 )
      v19 = *(_QWORD *)(v18 + 16);
    else
      v19 = *(_QWORD *)(v18 + 24);
    *a4 = v19;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411LL, v12);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v25);
  return v9;
}
