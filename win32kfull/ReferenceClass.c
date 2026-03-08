/*
 * XREFs of ReferenceClass @ 0x1C0109410
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0107C3C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0109640 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1C010966C (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C0109698 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C01096CC (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C0109770 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BF268 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BF2A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2, unsigned int a3)
{
  struct tagDESKTOP *v3; // rbx
  size_t v6; // r12
  _QWORD *i; // rsi
  _QWORD *v9; // rax
  void *v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // r15
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // r8
  __int16 v16; // r9
  void **v17; // rdi
  __int64 v18; // rcx
  const void *v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(struct tagDESKTOP **)(a2 + 24);
  v6 = 0LL;
  if ( *(struct tagDESKTOP **)(a1 + 32) == v3 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 64); i; i = (_QWORD *)*i )
    {
      if ( (struct tagDESKTOP *)i[4] == v3 )
        goto LABEL_19;
    }
    v9 = ClassAlloc(*(struct tagDESKTOP **)(a2 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88, a3);
    i = v9;
    if ( v9 )
    {
      v10 = (void *)v9[1];
      *((_OWORD *)v9 + 2) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)v9 + 3) = *(_OWORD *)(a1 + 48);
      *((_OWORD *)v9 + 4) = *(_OWORD *)(a1 + 64);
      *((_OWORD *)v9 + 5) = *(_OWORD *)(a1 + 80);
      v9[12] = *(_QWORD *)(a1 + 96);
      memmove(v10, *(const void **)(a1 + 8), *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 88LL);
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v13) );
      v14 = ClassAllocString(v3, (int)v13 + 1, v11);
      if ( v14 )
      {
        v16 = 0;
        v17 = (void **)(i + 13);
        if ( v3 )
        {
          tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(i + 13, v14, v15, 0LL);
        }
        else
        {
          *v17 = v14;
          *(_QWORD *)(i[1] + 48LL) = 0LL;
        }
        v18 = *(_QWORD *)(a1 + 96);
        if ( (v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_33;
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v18 + 2 * v21) != v16 );
        v6 = 2 * v21 + 2;
        v22 = Win32AllocPoolWithQuotaZInit(v6, 2020897621LL);
        if ( (v22 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          v12 = v22;
        *(_QWORD *)(i[1] + 40LL) = v12;
        i[12] = v22;
        if ( v22 )
        {
LABEL_33:
          if ( (unsigned __int8)InitLookAsideRef<tagCLS>(i) )
          {
            i[4] = 0LL;
            LockObjectAssignment(i + 4, v3);
            *i = *(_QWORD *)(a1 + 64);
            i[8] = 0LL;
            v19 = *(const void **)(a1 + 104);
            *(_QWORD *)(a1 + 64) = i;
            memmove(*v17, v19, v13 + 1);
            v20 = i[12];
            if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              memmove((void *)v20, *(const void **)(a1 + 96), v6);
            i[11] = 0LL;
            *(_QWORD *)(i[1] + 56LL) = 0LL;
            i[14] = 0LL;
            i[10] = 0LL;
            *(_QWORD *)&v23 = i + 10;
            *((_QWORD *)&v23 + 1) = *(_QWORD *)(a1 + 80);
            HMAssignmentLock(&v23, 0LL);
            v23 = *(_OWORD *)LockPointer(&v24, (__int64)(i + 14), *(_QWORD **)(a1 + 112));
            HMAssignmentLock(&v23, 0LL);
            *((_QWORD *)&v23 + 1) = *(_QWORD *)(a1 + 88);
            *(_QWORD *)&v23 = i + 11;
            HMAssignmentLock(&v23, 0LL);
            i[6] = 0LL;
            *((_DWORD *)i + 18) = 0;
LABEL_19:
            ++*(_DWORD *)(a1 + 72);
            ++*((_DWORD *)i + 18);
            tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, i);
            return 1LL;
          }
          Win32FreePool((void *)i[12]);
        }
        ClassFree(v3, (char *)*v17);
      }
      ClassFree(v3, (struct tagCLS *)i);
    }
    return 0LL;
  }
}
