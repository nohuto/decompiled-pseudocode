__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned __int64 v11; // r13
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rdi
  ULONG_PTR v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  BOOL v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // zf
  unsigned __int64 UsedPtesHandle; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  ULONG_PTR v24; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+A8h] [rbp+20h]
  unsigned __int8 v27; // [rsp+A8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    v9 = a3 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | *(_DWORD *)(a1 + 52) & 0x7FFFFFFF);
    v26 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
    *(_DWORD *)(a1 + 52) ^= (v9 ^ *(_DWORD *)(a1 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a1 + 34) = v9 >> 31;
    v10 = 0;
    v11 = a2;
    UsedPtesHandle = 0LL;
    v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    v13 = MiSwizzleInvalidPte(32LL);
    v14 = MiSwizzleInvalidPte(96LL);
    v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v23;
    v16 = v23 + 8 * (a3 - 1);
    v17 = v26;
    v24 = v16;
    v27 = MiLockWorkingSetShared(v26);
    if ( v23 <= v24 )
    {
      do
      {
        if ( v11 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v10 )
          {
            MiIncreaseUsedPtesCount(UsedPtesHandle, v10);
            v10 = 0;
          }
          if ( v8 )
            MiUnlockPageTableInternal(v17, v8);
          v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v15, 0LL, v12, v27, 0);
          UsedPtesHandle = MiGetUsedPtesHandle(v11);
        }
        v18 = MiPteInShadowRange(v15);
        v19 = 0LL;
        if ( (((_BYTE)v15 - (_BYTE)v23) & 8) != 0 )
        {
          v20 = v13;
          if ( v18 )
          {
            if ( MiPteHasShadow() )
            {
              v19 = 1LL;
              if ( !HIBYTE(word_140C6697C) )
              {
                v21 = (v13 & 1) == 0;
                goto LABEL_23;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v21 = (v13 & 1) == 0;
LABEL_23:
              if ( !v21 )
                v20 |= 0x8000000000000000uLL;
            }
          }
        }
        else
        {
          v20 = v14;
          if ( v18 )
          {
            if ( MiPteHasShadow() )
            {
              v19 = 1LL;
              if ( !HIBYTE(word_140C6697C) )
              {
                v21 = (v14 & 1) == 0;
                goto LABEL_23;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v21 = (v14 & 1) == 0;
              goto LABEL_23;
            }
          }
        }
        *(_QWORD *)v15 = v20;
        if ( (_DWORD)v19 )
          MiWritePteShadow(v15, v20, v19);
        ++v10;
        v15 += 8LL;
        v11 += 4096LL;
      }
      while ( v15 <= v24 );
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v10);
    MiUnlockPageTableInternal(v17, v8);
    MiUnlockWorkingSetShared(v17, v27);
    return 0LL;
  }
  return result;
}
