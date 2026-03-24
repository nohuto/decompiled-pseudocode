/*
 * XREFs of MmChangeImageProtection @ 0x1406FE6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiSetImageProtection @ 0x140357D28 (MiSetImageProtection.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 *     MiSessionReferenceImage @ 0x1403A7274 (MiSessionReferenceImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 Lock; // rbp
  __int64 v10; // rax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // r12d
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  ULONG_PTR v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi

  v5 = a2;
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v7 = *(_DWORD *)(a1 + 40);
  if ( (v7 & 0xFFF) != 0 )
    return 3221225485LL;
  v8 = v7 >> 12;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v10 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = a3 + v5;
    v14 = v12 + *(unsigned int *)(v10 + 64);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v14
      || v5 < v12
      || v13 > v14
      || v13 - 1 < v5 )
    {
      v16 = -1073741800;
    }
    else
    {
      v15 = *(_DWORD *)(v11 + 104);
      if ( (v15 & 0x80000) != 0 )
      {
        v16 = -1073741757;
      }
      else
      {
        v16 = 0;
        *(_DWORD *)(v11 + 104) = v15 | 0x80000;
        if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
          MiSessionReferenceImage(v12);
        else
          ++*(_WORD *)(v11 + 108);
      }
    }
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  MmReleaseLoadLock(Lock);
  if ( v16 >= 0 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
    {
      v16 = -1073741800;
    }
    else
    {
      v17 = 0;
      v18 = (_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v19 = (_QWORD *)(a1 + 48);
        while ( !MI_PFN_IS_PROTO(48LL * *v19 - 0x58000000000LL) )
        {
          if ( (MiGetPagePrivilege(v20, 0, 0LL) & 0x40) != 0 )
          {
            v16 = -1073741755;
            goto LABEL_41;
          }
          ++v17;
          ++v19;
          if ( v17 >= v8 )
          {
            v5 = a2;
            goto LABEL_26;
          }
        }
        v16 = -1073741800;
      }
      else
      {
LABEL_26:
        MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
        if ( a4 == 1 )
        {
          v23 = *(_QWORD *)(v11 + 112);
          if ( v23
            && (v24 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v23) + 96) + 40LL), (v24 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v25 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v25 = 0LL;
          }
          if ( qword_140C1DB70 )
          {
            v16 = qword_140C1DB70(v25, a1, v5, a3, v5 - *(_QWORD *)(v11 + 48));
            if ( v16 >= 0 )
            {
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741822;
          }
        }
        else if ( (MiFlags & 0x10000) != 0 && v8 )
        {
          v26 = v8;
          do
          {
            MiClearPfnImageVerified(48LL * *v18++ - 0x58000000000LL, 24LL, v21, v22);
            --v26;
          }
          while ( v26 );
        }
      }
    }
LABEL_41:
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v11 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock);
    MiUnloadSystemImage(v11);
    MmReleaseLoadLock(Lock);
  }
  KeLeaveCriticalRegionThread(Lock);
  return (unsigned int)v16;
}
