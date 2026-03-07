void __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r10
  unsigned __int64 *v7; // r9
  ULONG_PTR *v8; // rsi
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // rdi
  _KPROCESS *Process; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  ULONG_PTR *v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+38h] [rbp-90h]
  char v16; // [rsp+48h] [rbp-80h] BYREF
  char v17; // [rsp+78h] [rbp-50h] BYREF

  v4 = 4LL;
  v15 = 4LL;
  v6 = 4LL;
  v7 = (unsigned __int64 *)&v16;
  do
  {
    *(v7 - 1) = a1;
    *v7 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 += 2;
    --v6;
  }
  while ( v6 );
  v8 = (ULONG_PTR *)&v17;
  v14 = (ULONG_PTR *)&v17;
  do
  {
    v9 = *(v8 - 1);
    v10 = *v8;
    if ( *(_DWORD *)a4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( v9 <= v10 )
      {
        do
        {
          v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v9, 0);
          do
          {
            if ( !MI_READ_PTE_LOCK_FREE(v9) )
              MiMakeHyperPteDemandZero(v9, v13, a4);
            v9 += 8LL;
          }
          while ( v9 <= v10 && (v9 & 0xFFF) != 0 );
          MiUnlockPageTableInternal((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v12);
        }
        while ( v9 <= v10 );
        v8 = v14;
        v4 = v15;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v10 - v9) >> 3) + 1;
    }
    v8 -= 2;
    --v4;
    v14 = v8;
    v15 = v4;
  }
  while ( v4 );
}
