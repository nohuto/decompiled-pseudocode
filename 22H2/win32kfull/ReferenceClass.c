/*
 * XREFs of ReferenceClass @ 0x1C0020000
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 * Callees:
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C001FEC8 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001FF28 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C001FFCC (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0020230 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1C002025C (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0020BD8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BE0C8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BE108 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  PVOID *v2; // rbx
  size_t v5; // r12
  __int64 i; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r14
  PVOID v12; // rax
  __int64 v13; // r8
  __int16 v14; // r9
  void **v15; // rdi
  __int64 v16; // rcx
  const void *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0LL;
  if ( *(PVOID **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)i )
    {
      if ( *(PVOID **)(i + 32) == v2 )
        goto LABEL_19;
    }
    v8 = ClassAlloc(*(PVOID **)(a2 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
    i = v8;
    if ( v8 )
    {
      v9 = *(void **)(v8 + 8);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(v8 + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(v8 + 80) = *(_OWORD *)(a1 + 80);
      *(_QWORD *)(v8 + 96) = *(_QWORD *)(a1 + 96);
      memmove(v9, *(const void **)(a1 + 8), *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 88LL);
      v10 = -1LL;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v11) );
      v12 = ClassAllocString(v2, (int)v11 + 1);
      if ( v12 )
      {
        v14 = 0;
        v15 = (void **)(i + 104);
        if ( v2 )
        {
          tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(i + 104, v12, v13, 0LL);
        }
        else
        {
          *v15 = v12;
          *(_QWORD *)(*(_QWORD *)(i + 8) + 48LL) = 0LL;
        }
        v16 = *(_QWORD *)(a1 + 96);
        if ( (v16 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_33;
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(v16 + 2 * v19) != v14 );
        v5 = 2 * v19 + 2;
        v20 = Win32AllocPoolWithQuotaZInit(v5, 2020897621LL);
        if ( (v20 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          v10 = v20;
        *(_QWORD *)(*(_QWORD *)(i + 8) + 40LL) = v10;
        *(_QWORD *)(i + 96) = v20;
        if ( v20 )
        {
LABEL_33:
          if ( InitLookAsideRef<tagCLS>(i) )
          {
            *(_QWORD *)(i + 32) = 0LL;
            LockObjectAssignment(i + 32, v2);
            *(_QWORD *)i = *(_QWORD *)(a1 + 64);
            *(_QWORD *)(i + 64) = 0LL;
            v17 = *(const void **)(a1 + 104);
            *(_QWORD *)(a1 + 64) = i;
            memmove(*v15, v17, v11 + 1);
            v18 = *(_QWORD *)(i + 96);
            if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              memmove((void *)v18, *(const void **)(a1 + 96), v5);
            *(_QWORD *)(i + 88) = 0LL;
            *(_QWORD *)(*(_QWORD *)(i + 8) + 56LL) = 0LL;
            *(_QWORD *)(i + 112) = 0LL;
            *(_QWORD *)(i + 80) = 0LL;
            *(_QWORD *)&v21 = i + 80;
            *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 80);
            HMAssignmentLock(&v21, 0LL);
            v21 = *(_OWORD *)LockPointer(v22, i + 112, *(_QWORD *)(a1 + 112));
            HMAssignmentLock(&v21, 0LL);
            *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 88);
            *(_QWORD *)&v21 = i + 88;
            HMAssignmentLock(&v21, 0LL);
            *(_QWORD *)(i + 48) = 0LL;
            *(_DWORD *)(i + 72) = 0;
LABEL_19:
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(i + 72);
            tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, i);
            return 1LL;
          }
          Win32FreePool(*(void **)(i + 96));
        }
        ClassFree((struct tagDESKTOP *)v2, (char *)*v15);
      }
      ClassFree((struct tagDESKTOP *)v2, (struct tagCLS *)i);
    }
    return 0LL;
  }
}
