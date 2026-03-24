/*
 * XREFs of MiMapNewSession @ 0x140786F8C
 * Callers:
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     MiFillPteHierarchy @ 0x14028CAF0 (MiFillPteHierarchy.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x14029880C (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1403253D8 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x14032C1B0 (MiGetPfnLink.c)
 *     MiGetSystemPage @ 0x140339EE8 (MiGetSystemPage.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403570E4 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x140357168 (MiGetNextPageColor.c)
 *     MiWriteTopLevelPxe @ 0x14039D80C (MiWriteTopLevelPxe.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *SystemPage; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 PfnLink; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _DWORD *v16; // r9
  __int64 v17; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // r9
  unsigned __int64 v24; // rdi
  unsigned int v25; // r14d
  __int64 *v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // r15
  int v33; // r13d
  __int64 v34; // r8
  bool v35; // zf
  unsigned __int64 v36; // rbx
  __int64 v37; // r8
  __int128 v39; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v40[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 PteAddress; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v43; // [rsp+A0h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v39 = 0LL;
  memset(v40, 0, 32);
  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(v2);
  MiInitializePageColorBase(0LL, 0, (__int64)&v39);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)&v39);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_140C4DDE0, v40);
  v9 = 4LL;
  v10 = (v8 + 0x58000000000LL) / 48;
  do
  {
    v11 = (__int64 *)v40[--v9];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v15 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_140C4DDE0);
      MiSetPageTablePfnBuddy(v12, v2, 0LL, v16);
    }
    v17 = (v12 + 0x58000000000LL) / 48;
    ValidPte = MiMakeValidPte(0LL, v17, 2415919110LL, v14);
    v19 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v9 == 3 )
    {
      MiWriteTopLevelPxe(v11, ValidPte & 0xFFFFFFFFFFFFFEFFuLL);
      goto LABEL_19;
    }
    v20 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v22 = (v19 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v22 = (v19 & 1) == 0;
LABEL_14:
        if ( !v22 )
          v19 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v19;
    if ( v20 )
      MiWritePteShadow((__int64)v11, v19, v21);
    v2 = a1;
LABEL_19:
    MiInitializePfnForOtherProcess(v17, (__int64)v11, v10, 512LL);
    v10 = v17;
  }
  while ( v9 != 1 );
  v24 = MiMakeValidPte(PteAddress, 0LL, 2684354564LL, v23);
  v25 = 0;
  v26 = (__int64 *)MiGetPteAddress(qword_140C4DDE0);
  v43 = PteAddress - (_QWORD)v26;
  while ( 2 )
  {
    v44 = v4;
    v4 = MiGetPfnLink(v4);
    v28 = (v27 + 0x58000000000LL) / 48;
    if ( v25 )
      goto LABEL_32;
    v24 ^= (v24 ^ (v28 << 12)) & 0xFFFFFFFFF000LL;
    v29 = MiGetPteAddress(qword_140C4DDE0);
    *(_QWORD *)(v30 + 8) = v29;
    MiSetPageTablePfnBuddy(v30, v2, 0LL, (_DWORD *)v30);
    v31 = v24;
    v32 = (unsigned __int64 *)((char *)v26 + v43);
    v33 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v26 + v43) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v33 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v35 = (v24 & 1) == 0;
LABEL_28:
          if ( !v35 )
            v31 = v24 | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v35 = (v24 & 1) == 0;
        goto LABEL_28;
      }
    }
    *v32 = v31;
    if ( v33 )
      MiWritePteShadow((__int64)v32, v31, v34);
LABEL_32:
    v36 = MiMakeValidPte(0LL, v28, 2147483652LL, v27) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v44, v26, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v26) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v36 & 1) != 0 )
      {
        v36 |= 0x8000000000000000uLL;
      }
LABEL_41:
      *v26 = v36;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C4E008) && (v36 & 1) != 0 )
      v36 |= 0x8000000000000000uLL;
    *v26 = v36;
    MiWritePteShadow((__int64)v26, v36, v37);
LABEL_42:
    v2 = a1;
    ++v25;
    ++v26;
    if ( v25 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v39);
  }
}
