__int64 __fastcall MmSetGraphicsPtes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v7; // rbp
  ULONG_PTR v9; // rax
  ULONG_PTR v12; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v14; // r15d
  __int64 v15; // rax
  void *v16; // rsi
  int v18; // edx
  unsigned int v19; // ebx
  __int64 AwePageSizeFromVa; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+60h] [rbp+8h] BYREF

  v7 = BugCheckParameter3 + BugCheckParameter2 - 1;
  v9 = v7;
  if ( !BugCheckParameter3 )
    v9 = BugCheckParameter2;
  if ( v9 < BugCheckParameter2 )
    goto LABEL_38;
  v12 = BugCheckParameter2 + BugCheckParameter3 - 1;
  if ( !BugCheckParameter3 )
    v12 = BugCheckParameter2;
  if ( v12 > 0x7FFFFFFEFFFFLL )
LABEL_38:
    KeBugCheckEx(0x1Au, 0xA000uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  v14 = 0;
  v15 = MiObtainReferencedVadEx(BugCheckParameter2, 0, (int *)&v26);
  v16 = (void *)v15;
  if ( !v15 )
    return v26;
  v18 = *(_DWORD *)(v15 + 48);
  if ( (v18 & 0x2200000) != 0x2200000 )
    goto LABEL_36;
  if ( v7 <= (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
  {
    if ( (v18 & 0x70) == 0x30 )
    {
      v14 = 1;
      MiLockAweVadsExclusive((__int64)CurrentThread);
      AwePageSizeFromVa = (__int64)MiGetAwePageSizeFromVa(BugCheckParameter2);
      if ( !AwePageSizeFromVa )
      {
        v19 = -1073741585;
LABEL_34:
        MiUnlockAweVadsExclusive((__int64)CurrentThread);
        goto LABEL_37;
      }
LABEL_17:
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v19 = -1073741580;
      }
      else if ( a5 )
      {
        v19 = -1073741581;
      }
      else
      {
        v21 = AwePageSizeFromVa << 12;
        if ( a4 == v21 )
        {
          v22 = v21 - 1;
          if ( ((v21 - 1) & BugCheckParameter2) != 0 || (v22 & BugCheckParameter3) != 0 )
          {
            v19 = -1073741585;
          }
          else
          {
            if ( !a3 )
              goto LABEL_32;
            if ( (a6 & 1) != 0 )
            {
              v23 = 1LL;
              v24 = 0LL;
              goto LABEL_30;
            }
            v23 = BugCheckParameter3 / v21;
            v24 = 0LL;
            if ( BugCheckParameter3 / v21 )
            {
LABEL_30:
              while ( (v22 & a3[v24]) == 0 )
              {
                if ( ++v24 >= v23 )
                  goto LABEL_32;
              }
              v19 = -1073741583;
            }
            else
            {
LABEL_32:
              v19 = MiSetGraphicsPtes(BugCheckParameter2, BugCheckParameter3, a3, a4, v25, a6);
            }
          }
        }
        else
        {
          v19 = -1073741582;
        }
      }
      if ( !v14 )
        goto LABEL_37;
      goto LABEL_34;
    }
    if ( (v18 & 0xA00000) == 0xA00000 )
    {
      AwePageSizeFromVa = MiGetVadPageSize(v15);
      goto LABEL_17;
    }
LABEL_36:
    v19 = -1073741585;
    goto LABEL_37;
  }
  v19 = -1073741584;
LABEL_37:
  MiUnlockAndDereferenceVad(v16);
  return v19;
}
