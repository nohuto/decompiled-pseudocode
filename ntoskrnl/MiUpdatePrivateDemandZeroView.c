__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 ProtoPteAddress; // rsi
  unsigned __int64 v10; // r9
  __int64 v11; // r13
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebp
  __int16 v17; // ax
  __int16 v18; // bx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int64 v25; // rbp
  unsigned __int64 UsedPtesHandle; // rdi
  __int64 v27; // rbx
  unsigned __int8 v28; // r12
  __int64 v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned __int64 v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h]
  unsigned __int8 v37; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v40; // [rsp+C8h] [rbp+20h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v32 = 0LL;
  v31 = a1 + 1664;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  ProtoPteAddress = MiGetProtoPteAddress(a2, v7, 6, &v32);
  v40 = ProtoPteAddress;
  v10 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v7);
  v33 = v10;
  v11 = v32;
  v12 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v34 = v32;
  if ( v32 )
  {
    while ( 1 )
    {
      v13 = v10;
      v14 = *(_QWORD *)(v11 + 8);
      v15 = v6;
      if ( v14 + 8 * (*(unsigned int *)(v11 + 44) - 1LL) <= v10 )
        v13 = v14 + 8 * (*(unsigned int *)(v11 + 44) - 1LL);
      v35 = v13;
      if ( (*(_BYTE *)(v11 + 34) & 2) == 0 )
      {
        v16 = *(unsigned __int16 *)(v11 + 32);
        v17 = (unsigned __int16)v16 >> 1;
        v18 = ((unsigned __int16)v16 >> 1) & 5;
        if ( ((v18 != 5) & _bittest16(&v17, 2u)) == 0 )
        {
          v19 = *(_DWORD *)(v11 + 40);
          if ( v19 )
            v14 += 8 * ((unsigned __int64)(unsigned int)((v19 << 9) - 1) >> 12) + 8;
          if ( v14 <= v13 )
            break;
        }
      }
LABEL_39:
      v29 = 8LL * (unsigned int)((__int64)(v13 - ProtoPteAddress + 8) >> 3);
      ProtoPteAddress += v29;
      v12 += v29;
      v40 = ProtoPteAddress;
      if ( ProtoPteAddress <= v10 )
      {
        v34 = *(_QWORD *)(v11 + 16);
        v11 = v34;
        v32 = v34;
        if ( v34 )
          continue;
      }
      return v6;
    }
    if ( ProtoPteAddress < v14 )
    {
      v40 = v14;
      v20 = v14 - ProtoPteAddress;
      ProtoPteAddress = v14;
      v12 += 8 * (v20 >> 3);
    }
    if ( ProtoPteAddress <= v10 )
    {
      v21 = 0LL;
      if ( ProtoPteAddress <= v13 )
      {
        do
        {
          v22 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
          if ( (v22 & 1) != 0 )
          {
            LODWORD(v23) = v16 >> 1;
          }
          else
          {
            if ( !v22 )
              break;
            v23 = v22 >> 5;
          }
          if ( (v23 & 0x1F) == 0x18 )
            break;
          v21 = (unsigned int)(v21 + 1);
          ProtoPteAddress += 8LL;
        }
        while ( ProtoPteAddress <= v13 );
        v10 = v33;
        v15 = v6;
        v40 = ProtoPteAddress;
      }
      v6 = v21 + v15;
      if ( v18 == 5 )
        v6 = v15;
      v36 = v6;
      if ( !a3 || !(_DWORD)v21 )
      {
        v12 += 8 * v21;
        goto LABEL_39;
      }
      v24 = v16 >> 1;
      if ( (v16 & 8) != 0 )
        LOBYTE(v24) = v24 & 2 | 4;
      v25 = 0LL;
      UsedPtesHandle = 0LL;
      v27 = MiSwizzleInvalidPte(32LL * (v24 & 0x1F));
      v28 = MiLockWorkingSetShared(v31);
      v37 = v28;
      while ( 1 )
      {
        if ( !v25 )
          goto LABEL_30;
        if ( (v12 & 0xFFF) == 0 )
          break;
LABEL_34:
        *(_QWORD *)v12 = v27;
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
        v12 += 8LL;
        LODWORD(v21) = v21 - 1;
        if ( !(_DWORD)v21 )
        {
          ProtoPteAddress = v40;
          v13 = v35;
          v6 = v36;
          v11 = v34;
          if ( v25 )
            MiUnlockPageTableInternal(v31, v25);
          MiUnlockWorkingSetShared(v31, v37);
          v10 = v33;
          goto LABEL_39;
        }
      }
      MiUnlockPageTableInternal(v31, v25);
LABEL_30:
      if ( MiWorkingSetIsContended(v31) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v31, v28);
        MiLockWorkingSetShared(v31);
      }
      MiMakeSystemAddressValid(v12, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v28, 0);
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v12 << 25) >> 16);
      v25 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      goto LABEL_34;
    }
  }
  return v6;
}
