__int64 __fastcall MiComputeIdealLargePage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 result; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  unsigned __int64 VadPte; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  unsigned int v30; // [rsp+20h] [rbp-58h]
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]
  unsigned __int64 valid; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 v35; // [rsp+80h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 48);
  result = ((unsigned __int64)v4 >> 19) & 3;
  v8 = MiVadPageSizes[result];
  if ( v8 >= 0x10 && (v4 & 0x800000) != 0 )
  {
    v9 = -1LL;
    v30 = MiVadPageIndices[result];
    v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
    VadPte = MiGetVadPte(a1);
    v13 = VadPte;
    v14 = v8;
    if ( v8 == 16 )
      v14 = 1LL;
    v31 = v14;
    v15 = v14 * (512 - ((VadPte >> 3) & 0x1FF));
    v32 = MiGetVadPte(v12);
    result = MiGetVadPte(v16);
    v33 = result;
    if ( v13 != v32 || a3 < v15 )
    {
      v35 = MiLockWorkingSetShared((__int64)v10);
      valid = MiLockLowestValidPageTable((__int64)v10, v13, &valid);
      if ( valid == ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        if ( (v13 & 0xFFF) == 0 )
          goto LABEL_16;
        v17 = v13;
        v18 = v13;
        while ( 1 )
        {
          if ( v17 == v32 )
          {
LABEL_15:
            v14 = v31;
            goto LABEL_16;
          }
          v19 = 128LL;
          if ( v8 != 16 )
            v19 = 8LL;
          v17 = v18 - v19;
          v20 = MI_READ_PTE_LOCK_FREE(v18 - v19);
          if ( (v20 & 1) != 0 )
            break;
          v18 = v17;
          if ( (v17 & 0xFFF) == 0 )
            goto LABEL_15;
        }
        v27 = v13 - v17;
        v14 = v31;
        v9 = ((v20 >> 12) & 0xFFFFFFFFFFLL) + v31 * (v27 >> 3);
        if ( v9 == -1 )
        {
LABEL_16:
          if ( a3 < v15 )
          {
            v21 = v13 + 8 * (a3 / v14);
            if ( (v21 & 0xFFF) != 0 )
            {
              v22 = v13 + 8 * (a3 / v14);
              v23 = v22;
              v24 = v21;
              while ( v22 < v33 )
              {
                v25 = MI_READ_PTE_LOCK_FREE(v21);
                if ( (v25 & 1) != 0 )
                {
                  v28 = v31 * ((__int64)(v24 - v13) >> 3);
                  v29 = (v25 >> 12) & 0xFFFFFFFFFFLL;
                  if ( v29 < v28 )
                    v9 = -1LL;
                  else
                    v9 = v29 - v28;
                  break;
                }
                v26 = 128LL;
                if ( v8 != 16 )
                  v26 = 8LL;
                v21 = v26 + v23;
                v22 = v21;
                v23 = v21;
                v24 = v21;
                if ( (v21 & 0xFFF) == 0 )
                  break;
              }
            }
          }
        }
      }
      MiUnlockPageTableInternal((__int64)v10, valid);
      result = MiUnlockWorkingSetShared((__int64)v10, v35);
      if ( v9 != -1 )
      {
        result = v30;
        *(_DWORD *)(a4 + 48) = v30;
        *(_QWORD *)(a4 + 40) = v9;
      }
    }
  }
  return result;
}
