/*
 * XREFs of ReferenceClass @ 0x1C00F8130
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C00610E8 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0061130 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C0061158 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00611B8 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1C006128C (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00633FC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00634AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F8378 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  PVOID *v2; // rbx
  size_t v5; // r12
  char *i; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // r14
  PVOID v11; // rax
  __int64 v12; // rdx
  void **v13; // rdi
  __int64 v14; // rcx
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0LL;
  if ( *(PVOID **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  else
  {
    for ( i = *(char **)(a1 + 64); i; i = *(char **)i )
    {
      if ( *((PVOID **)i + 4) == v2 )
        goto LABEL_19;
    }
    v8 = ClassAlloc(
           v2,
           (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 6LL) & 8u) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
    i = (char *)v8;
    if ( v8 )
    {
      v9 = *(void **)(v8 + 8);
      *(_OWORD *)(v8 + 30) = *(_OWORD *)(a1 + 30);
      *(_OWORD *)(v8 + 46) = *(_OWORD *)(a1 + 46);
      *(_OWORD *)(v8 + 62) = *(_OWORD *)(a1 + 62);
      *(_OWORD *)(v8 + 78) = *(_OWORD *)(a1 + 78);
      *(_QWORD *)(v8 + 94) = *(_QWORD *)(a1 + 94);
      *(_WORD *)(v8 + 102) = *(_WORD *)(a1 + 102);
      memmove(
        v9,
        *(const void **)(a1 + 8),
        *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + ((*(_BYTE *)(*(_QWORD *)(a1 + 8) + 6LL) & 8) != 0 ? 96LL : 88LL));
      v10 = -1LL;
      do
        ++v10;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v10) );
      v11 = ClassAllocString(v2, (int)v10 + 1);
      v12 = (__int64)v11;
      if ( v11 )
      {
        v13 = (void **)(i + 104);
        if ( v2 )
        {
          tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=((_QWORD *)i + 13, (__int64)v11);
        }
        else
        {
          *v13 = v11;
          *(_QWORD *)(*((_QWORD *)i + 1) + 48LL) = 0LL;
        }
        v14 = *(_QWORD *)(a1 + 96);
        if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_33;
        v17 = -1LL;
        do
          ++v17;
        while ( *(_WORD *)(v14 + 2 * v17) );
        v5 = 2 * v17 + 2;
        v18 = Win32AllocPoolWithQuotaZInit(v5, 2020897621LL);
        v12 = -1LL;
        v19 = v18;
        if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v19 = -1LL;
        *(_QWORD *)(*((_QWORD *)i + 1) + 40LL) = v19;
        *((_QWORD *)i + 12) = v18;
        if ( v18 )
        {
LABEL_33:
          if ( InitLookAsideRef<tagCLS>((__int64)i, v12) )
          {
            *((_QWORD *)i + 4) = 0LL;
            LockObjectAssignment(i + 32, v2);
            *(_QWORD *)i = *(_QWORD *)(a1 + 64);
            *((_QWORD *)i + 8) = 0LL;
            v15 = *(const void **)(a1 + 104);
            *(_QWORD *)(a1 + 64) = i;
            memmove(*v13, v15, v10 + 1);
            v16 = *((_QWORD *)i + 12);
            if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              memmove((void *)v16, *(const void **)(a1 + 96), v5);
            *((_QWORD *)i + 11) = 0LL;
            *(_QWORD *)(*((_QWORD *)i + 1) + 56LL) = 0LL;
            *((_QWORD *)i + 14) = 0LL;
            *((_QWORD *)i + 10) = 0LL;
            *(_QWORD *)&v20 = i + 80;
            *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 80);
            HMAssignmentLock(&v20, 0LL);
            v20 = *(_OWORD *)LockPointer(&v21, (__int64)(i + 112), *(_QWORD **)(a1 + 112));
            HMAssignmentLock(&v20, 0LL);
            *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 88);
            *(_QWORD *)&v20 = i + 88;
            HMAssignmentLock(&v20, 0LL);
            *((_QWORD *)i + 6) = 0LL;
            *((_DWORD *)i + 18) = 0;
LABEL_19:
            ++*(_DWORD *)(a1 + 72);
            ++*((_DWORD *)i + 18);
            tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, i);
            return 1LL;
          }
          Win32FreePool(*((_QWORD *)i + 12));
        }
        ClassFree(v2, (char *)*v13);
      }
      ClassFree(v2, (PVOID *)i);
    }
    return 0LL;
  }
}
