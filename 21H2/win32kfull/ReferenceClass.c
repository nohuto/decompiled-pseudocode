/*
 * XREFs of ReferenceClass @ 0x1C0025580
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C00237B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00257D4 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C00257FC (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C007A6B8 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C007A718 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010BFBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E8DEC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2, unsigned int a3)
{
  struct tagDESKTOP *v3; // rbx
  size_t v6; // r15
  char *v8; // rsi
  char *v9; // rax
  void *v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdi
  char *v13; // rdx
  __int64 v14; // rcx
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(struct tagDESKTOP **)(a2 + 24);
  v6 = 0LL;
  if ( *(struct tagDESKTOP **)(a1 + 32) == v3 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  v8 = *(char **)(a1 + 64);
  if ( v8 )
  {
    do
    {
      if ( *((struct tagDESKTOP **)v8 + 4) == v3 )
        break;
      v8 = *(char **)v8;
    }
    while ( v8 );
    if ( v8 )
      goto LABEL_19;
  }
  v9 = (char *)ClassAlloc(
                 v3,
                 (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 6LL) & 8u) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88,
                 a3);
  v8 = v9;
  if ( v9 )
  {
    v10 = (void *)*((_QWORD *)v9 + 1);
    *(_OWORD *)(v9 + 30) = *(_OWORD *)(a1 + 30);
    *(_OWORD *)(v9 + 46) = *(_OWORD *)(a1 + 46);
    *(_OWORD *)(v9 + 62) = *(_OWORD *)(a1 + 62);
    *(_OWORD *)(v9 + 78) = *(_OWORD *)(a1 + 78);
    *(_QWORD *)(v9 + 94) = *(_QWORD *)(a1 + 94);
    *((_WORD *)v9 + 51) = *(_WORD *)(a1 + 102);
    memmove(
      v10,
      *(const void **)(a1 + 8),
      *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + ((*(_BYTE *)(*(_QWORD *)(a1 + 8) + 6LL) & 8) != 0 ? 96LL : 88LL));
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v12) );
    v13 = (char *)ClassAllocString(v3, (int)v12 + 1, v11);
    if ( !v13 )
      goto LABEL_22;
    if ( v3 )
    {
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 48LL) = &v13[*((_QWORD *)v8 + 2) - *((_QWORD *)v8 + 1)];
      *((_QWORD *)v8 + 13) = v13;
    }
    else
    {
      v17 = *((_QWORD *)v8 + 1);
      *((_QWORD *)v8 + 13) = v13;
      *(_QWORD *)(v17 + 48) = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 96);
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v14 + 2 * v18) );
      v6 = 2 * v18 + 2;
      v19 = Win32AllocPoolWithQuota(v6, 2020897621LL);
      v20 = v19;
      if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v20 = -1LL;
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 40LL) = v20;
      *((_QWORD *)v8 + 12) = v19;
      if ( !v19 )
      {
LABEL_21:
        ClassFree(v3, *((char **)v8 + 13));
LABEL_22:
        ClassFree(v3, (struct tagCLS *)v8);
        return 0LL;
      }
    }
    if ( !(unsigned __int8)InitLookAsideRef<tagCLS>(v8) )
    {
      Win32FreePool(*((void **)v8 + 12));
      goto LABEL_21;
    }
    *((_QWORD *)v8 + 4) = 0LL;
    LockObjectAssignment(v8 + 32, v3);
    *(_QWORD *)v8 = *(_QWORD *)(a1 + 64);
    *((_QWORD *)v8 + 8) = 0LL;
    v15 = *(const void **)(a1 + 104);
    *(_QWORD *)(a1 + 64) = v8;
    memmove(*((void **)v8 + 13), v15, v12 + 1);
    v16 = *((_QWORD *)v8 + 12);
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      memmove((void *)v16, *(const void **)(a1 + 96), v6);
    *((_QWORD *)v8 + 11) = 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 1) + 56LL) = 0LL;
    *((_QWORD *)v8 + 14) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *(_QWORD *)&v21 = v8 + 80;
    *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 80);
    HMAssignmentLock(&v21);
    v21 = *(_OWORD *)LockPointer(&v22, (__int64)(v8 + 112), *(__int64 **)(a1 + 112));
    HMAssignmentLock(&v21);
    *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)&v21 = v8 + 88;
    HMAssignmentLock(&v21);
    *((_QWORD *)v8 + 6) = 0LL;
    *((_DWORD *)v8 + 18) = 0;
LABEL_19:
    ++*(_DWORD *)(a1 + 72);
    ++*((_DWORD *)v8 + 18);
    tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, v8);
    return 1LL;
  }
  return 0LL;
}
