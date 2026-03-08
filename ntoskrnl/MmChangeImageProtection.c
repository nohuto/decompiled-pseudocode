/*
 * XREFs of MmChangeImageProtection @ 0x1407D1E10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     MiSetImageProtection @ 0x1402E3BB8 (MiSetImageProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_PFN_IS_PROTO @ 0x140344B30 (MI_PFN_IS_PROTO.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiSessionReferenceImage @ 0x14036C5C4 (MiSessionReferenceImage.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     VslValidateDynamicCodePages @ 0x14087A498 (VslValidateDynamicCodePages.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 Lock; // rbp
  _QWORD *v10; // rax
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r12d
  _QWORD *v21; // r15
  _QWORD *v22; // r13
  __int64 v24; // rdi
  __int64 BugCheckParameter2; // [rsp+20h] [rbp-48h]
  unsigned int v26; // [rsp+28h] [rbp-40h]

  v5 = a2;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v26 = a3;
    if ( a3 == (unsigned int)a3 && (*(_BYTE *)(a1 + 10) & 7) == 2 && !*(_DWORD *)(a1 + 44) )
    {
      v7 = *(_DWORD *)(a1 + 40);
      if ( (v7 & 0xFFF) == 0 )
      {
        v8 = v7 >> 12;
        Lock = MmAcquireLoadLock(a1, a2, a3);
        --*(_WORD *)(Lock + 484);
        --*(_WORD *)(Lock + 484);
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        v10 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0);
        v11 = (ULONG_PTR)v10;
        if ( v10 )
        {
          v12 = v10[6];
          v13 = a3 + v5;
          v14 = v12 + *((unsigned int *)v10 + 16);
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
        if ( v16 < 0 )
          goto LABEL_25;
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
        {
          v20 = 0;
          v21 = (_QWORD *)(a1 + 48);
          if ( !v8 )
          {
LABEL_22:
            MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
            if ( a4 == 1 )
            {
              if ( (MiFlags & 0x4000) == 0 || (v16 = VslValidateDynamicCodePages(a1, v5, v26), v16 >= 0) )
              {
                MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
                v16 = 0;
              }
            }
            else if ( (MiFlags & 0x8000) != 0 && v8 )
            {
              v24 = v8;
              do
              {
                MiClearPfnImageVerified(48LL * *v21++ - 0x220000000000LL, 24);
                --v24;
              }
              while ( v24 );
            }
            goto LABEL_24;
          }
          v22 = (_QWORD *)(a1 + 48);
          while ( 1 )
          {
            BugCheckParameter2 = 48LL * *v22 - 0x220000000000LL;
            if ( MI_PFN_IS_PROTO(BugCheckParameter2) )
              break;
            if ( (MiGetPagePrivilege(BugCheckParameter2, 0, 0LL) & 0x40) != 0 )
            {
              v16 = -1073741755;
              goto LABEL_24;
            }
            ++v20;
            ++v22;
            if ( v20 >= v8 )
            {
              v5 = a2;
              goto LABEL_22;
            }
          }
        }
        v16 = -1073741800;
LABEL_24:
        MmAcquireLoadLock(v18, v17, v19);
        --*(_WORD *)(Lock + 484);
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        *(_DWORD *)(v11 + 104) &= ~0x80000u;
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread(Lock);
        MiUnloadSystemImage(v11);
        MmReleaseLoadLock(Lock);
LABEL_25:
        KeLeaveCriticalRegionThread(Lock);
        return (unsigned int)v16;
      }
    }
  }
  return 3221225485LL;
}
