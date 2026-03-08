/*
 * XREFs of MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryNodeActiveAffinity @ 0x1402AE860 (KeQueryNodeActiveAffinity.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140300670 (KeQueryNodeActiveAffinity2.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     MiGetEngineType @ 0x14039580C (MiGetEngineType.c)
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140B971D4 (MiReassignProcessorsToMemoryOnlyNodes.c)
 */

void MiComputeMemoryNodeProcessorAssignments()
{
  unsigned int v0; // ebx
  int v1; // r13d
  __int64 v2; // r14
  unsigned __int64 *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int16 v6; // si
  __int128 *PoolMm; // rdi
  __int64 v8; // rax
  __int128 *v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  int FirstSetRightGroupAffinity; // eax
  __int64 EngineType; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int Count; // [rsp+80h] [rbp+8h] BYREF
  int v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v0 = 0;
  v25 = 0;
  v1 = 0;
  v24 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      LOWORD(Count) = 0;
      v2 = *(_QWORD *)(376LL * v0 + qword_140C65720 + 368);
      KeQueryNodeActiveAffinity2(v0, 0LL, 0, &Count);
      v6 = Count;
      PoolMm = (__int128 *)(v2 + 32);
      if ( (_WORD)Count )
      {
        if ( (_WORD)Count != 1 )
          PoolMm = (__int128 *)ExAllocatePoolMm(64, 16LL * (unsigned __int16)Count, 0x6147694Du, v0 | 0x80000000);
        if ( PoolMm )
        {
          KeQueryNodeActiveAffinity2(v0, (__int64)PoolMm, v6, &Count);
        }
        else
        {
          PoolMm = (__int128 *)(v2 + 32);
          v6 = 1;
          KeQueryNodeActiveAffinity(v0, (PGROUP_AFFINITY)(v2 + 32), (PUSHORT)&Count);
        }
      }
      else
      {
        v6 = 1;
      }
      Count = v6;
      if ( v6 )
      {
        v8 = v6;
        v9 = PoolMm;
        v26 = v6;
        do
        {
          v10 = 0LL;
          v22 = *v9;
          v11 = v22;
          if ( (_QWORD)v22 )
          {
            do
            {
              FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v22);
              EngineType = (int)MiGetEngineType(KiProcessorBlock[FirstSetRightGroupAffinity]);
              ++*(_WORD *)(v2 + 2 * EngineType + 10);
              v15 = *(_QWORD *)(v14 + 200);
              v16 = v11 & ~v15;
              *(_QWORD *)&v22 = v16;
              v11 = v16;
              if ( (v15 & v10) == 0 )
              {
                ++*(_WORD *)(v2 + 2 * EngineType + 16);
                v10 |= *(_QWORD *)(v14 + 34912);
              }
            }
            while ( v16 );
            v8 = v26;
          }
          ++v9;
          v26 = --v8;
        }
        while ( v8 );
        v0 = v25;
        v1 = v24;
        LOWORD(v5) = 0;
        v4 = Count;
        v3 = (unsigned __int64 *)PoolMm;
        do
        {
          v17 = *v3;
          v18 = *v3;
          v3 += 2;
          v19 = ((v17 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v17 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
          v20 = (0x101010101010101LL * ((v19 + (v19 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          LOWORD(v20) = v5 + v20;
          v5 = (unsigned __int16)v20;
          --v4;
        }
        while ( v4 );
      }
      else
      {
        v20 = 0LL;
      }
      *(_DWORD *)(v2 + 24) = v0;
      v21 = v1 + 1;
      *(_QWORD *)v2 = PoolMm;
      if ( (_WORD)v20 )
        v21 = v1;
      *(_WORD *)(v2 + 8) = v6;
      ++v0;
      v24 = v21;
      v1 = v21;
      v25 = v0;
    }
    while ( v0 < (unsigned __int16)KeNumberNodes );
    if ( v21 )
      MiReassignProcessorsToMemoryOnlyNodes(v20, v3, v4, v5, v22, *((_QWORD *)&v22 + 1));
  }
}
