/*
 * XREFs of KeInitializeProcess @ 0x14070A0C8
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     KiInitializeIdleProcess @ 0x140B5F2B8 (KiInitializeIdleProcess.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     ExSaAllocate @ 0x1402962FC (ExSaAllocate.c)
 *     KiComputeGroupMask @ 0x1402967CC (KiComputeGroupMask.c)
 *     KeSetGroupMaskProcess @ 0x140296808 (KeSetGroupMaskProcess.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140296818 (KiSetIdealNodeProcessByGroup.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     KeSelectNodeForAffinity @ 0x1403B0188 (KeSelectNodeForAffinity.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VslCreateSecureProcess @ 0x14093EBE0 (VslCreateSecureProcess.c)
 */

__int64 __fastcall KeInitializeProcess(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rbp
  int SecureProcess; // r12d
  unsigned __int64 v11; // rsi
  unsigned __int16 *v12; // r14
  char v13; // r15
  int NextNode; // eax
  unsigned __int16 v15; // bx
  __int64 v16; // rbp
  int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // r14
  unsigned int v21; // ebp
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 640) = a2;
  v7 = a3;
  *(_BYTE *)a1 = 3;
  SecureProcess = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 368) = 2097184;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  memset((void *)(a1 + 376), 0, 0x100uLL);
  if ( (a7 & 1) != 0 )
    *(_DWORD *)(a1 + 632) |= 1u;
  *(_WORD *)(a1 + 1040) = v7;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 2097153;
  memset((void *)(a1 + 88), 0, 0x100uLL);
  KiCopyAffinityEx(a1 + 80, *(_WORD *)(a1 + 82), a4);
  LODWORD(v11) = KiComputeGroupMask(a4);
  KeSetGroupMaskProcess(a1, v11);
  *(_DWORD *)(a1 + 840) = 0;
  v12 = a5;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 352) = a1 + 344;
  *(_QWORD *)(a1 + 344) = a1 + 344;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_BYTE *)(a1 + 641) = 6;
  if ( !v12 )
  {
    v26 = 0LL;
    WORD4(v26) = v7;
    if ( (unsigned __int16)v7 >= *a4 )
      v25 = 0LL;
    else
      v25 = *(_QWORD *)&a4[4 * v7 + 4];
    *(_QWORD *)&v26 = v25;
    v12 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v26);
  }
  v13 = 0;
  *(_WORD *)(a1 + 836) = *v12;
LABEL_5:
  NextNode = *v12;
  v27 = 0;
  v15 = NextNode;
  while ( 1 )
  {
    v16 = KeNodeBlock[NextNode];
    v17 = *(_DWORD *)(v16 + 16);
    if ( (v17 & (unsigned int)v11) != 0 && ((*(_BYTE *)(v16 + 10) & 1) == v13 || (unsigned __int16 *)v16 == v12) )
    {
      do
      {
        _BitScanReverse(&v18, v11 & v17);
        KiSetIdealNodeProcessByGroup(a1, (_WORD *)v16, v18);
        v17 = *(_DWORD *)(v16 + 16);
        v11 = (unsigned int)v11 & (unsigned __int64)~(1LL << v18);
      }
      while ( (v17 & (unsigned int)v11) != 0 );
      v15 = *v12;
      if ( !(_DWORD)v11 )
        break;
    }
    NextNode = MmGetNextNode(v15, &v27);
    if ( NextNode == -1 )
    {
      if ( !(_DWORD)v11 )
        break;
      v13 = 1;
      goto LABEL_5;
    }
  }
  *(_QWORD *)(a1 + 880) = a6;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v19 = ExSaAllocate(0x10u, 0);
    if ( v19 == -1 )
    {
      v19 = 0LL;
    }
    else
    {
      v20 = 0LL;
      if ( KeQueryMaximumProcessorCountEx(0xFFFFu) )
      {
        v21 = ((unsigned int)v19 >> 13) & 0x3FFFF;
        do
        {
          v27 = 0;
          _BitScanReverse(&v22, v21);
          v23 = *(_QWORD *)(ExSaPageArrays + 8 * v20);
          v20 = (unsigned int)(v20 + 1);
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8LL * (v22 - 2))
                                + 8 * (v21 ^ (unsigned __int64)(unsigned int)(1 << v22))
                                + 8)
                    + 8LL * (((unsigned int)v19 >> 4) & 0x1FF)) = 0LL;
        }
        while ( (unsigned int)v20 < KeQueryMaximumProcessorCountEx(0xFFFFu) );
      }
    }
    *(_QWORD *)(a1 + 1024) = v19;
  }
  if ( (a7 & 2) != 0 )
  {
    SecureProcess = VslCreateSecureProcess(a1, 0LL, a1 + 992);
    if ( SecureProcess >= 0 )
      *(_QWORD *)(a1 + 992) |= 1uLL;
  }
  if ( _bittest64(&KeFeatureBits, 0x37u) )
    *(_QWORD *)(a1 + 1032) = MEMORY[0xFFFFF78000000710];
  *(_QWORD *)(a1 + 1064) = a1 + 1056;
  *(_QWORD *)(a1 + 1056) = a1 + 1056;
  return (unsigned int)SecureProcess;
}
