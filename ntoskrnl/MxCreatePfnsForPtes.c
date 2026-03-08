/*
 * XREFs of MxCreatePfnsForPtes @ 0x140B4FD40
 * Callers:
 *     MxCreatePfns @ 0x140B4F6EC (MxCreatePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiIsRegularMemory @ 0x140B4FF44 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x140B5002C (MxCreatePfn.c)
 */

__int64 __fastcall MxCreatePfnsForPtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // di
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdi
  int v15; // r15d
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3;
  v5 = a2;
  v21 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v21;
  if ( (v21 & 1) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 168);
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
    v21 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(48 * v9 - 0x220000000000LL + 24) ^= (*(_QWORD *)(48 * v9 - 0x220000000000LL + 24) ^ (*(_QWORD *)(48 * v9 - 0x220000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)v4 && (v6 & 0x80u) == 0LL )
    {
      MxCreatePfn(v8, v5, v6, v9, 0, 0);
    }
    else
    {
      v10 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
      v11 = v10 | 0x800;
      if ( (v10 & 0x42) == 0 )
        v11 = v10;
      v12 = v10 | 0x800;
      v13 = ((unsigned __int16)((unsigned __int8)word_140C6697C << 8) ^ v11) & 0x100;
      if ( (v10 & 0x42) == 0 )
        v12 = v10;
      v14 = v12 ^ v13;
      MiWriteValidPteNewProtection(v5, v14);
      if ( (_DWORD)v4 )
      {
        v15 = 1;
        v17 = 1LL;
        if ( (int)v4 > 0 )
        {
          v18 = v4;
          do
          {
            v17 <<= 9;
            --v18;
          }
          while ( v18 );
        }
        v5 = ((MiGetLeafVa(v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v16 = v5 + 8 * v19;
      }
      else
      {
        v15 = 0;
        v16 = v5 + 8;
      }
      while ( v5 < v16 )
      {
        if ( MiIsRegularMemory(v7, v8) )
          MxCreatePfn(v8, v5, v14, v9, v15, 1);
        ++v8;
        v5 += 8LL;
      }
    }
  }
  return 0LL;
}
