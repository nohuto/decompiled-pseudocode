void __fastcall MiCaptureDeleteHierarchy(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r13
  unsigned __int8 v6; // si
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 *v11; // r14
  int v12; // r15d
  ULONG_PTR v13; // rbp
  int SystemAddressValid; // r12d
  unsigned __int64 v15; // rsi
  int v16; // r13d
  int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-88h]
  _OWORD v19[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-50h]

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)a4 = 0;
  v5 = a4;
  v6 = a3;
  v18 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  MiFillPteHierarchy(a1, v19);
  MiFillPteHierarchy(v7, &v20);
  v9 = 0;
LABEL_2:
  v10 = 3LL;
  v11 = (__int64 *)&v19[2 * v9];
  v12 = 3;
  while ( 1 )
  {
    v13 = v11[v10];
    if ( v10 == 3 && (unsigned int)MiFastLockLeafPageTable(v8, *v11 << 25 >> 16, 8) == 2 )
    {
      v13 = v11[1];
      v10 = 1LL;
      v12 = 1;
      SystemAddressValid = 0;
    }
    else
    {
      SystemAddressValid = MiMakeSystemAddressValid(v13, 0LL, 0, v6, 8);
      if ( SystemAddressValid < 0 )
      {
        v15 = 0LL;
        goto LABEL_19;
      }
    }
    v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MI_READ_PTE_LOCK_FREE(v13) )
    {
      v16 = 0;
      v17 = v12 - 1;
      goto LABEL_8;
    }
LABEL_19:
    v17 = v12 - 1;
    v12 = v17;
    *(_BYTE *)(v9 + v5) = 1 << v17;
    v16 = 1;
    if ( !v9 && !v15 )
      break;
LABEL_8:
    v12 = v17;
    if ( !v9 )
      goto LABEL_9;
LABEL_13:
    if ( v15 )
      MiUnlockPageTableInternal(v18, v15);
    if ( !v16 )
    {
      v8 = v18;
      --v10;
      v5 = a4;
      v6 = a3;
      if ( v10 >= 1 )
        continue;
    }
    if ( ++v9 >= 2 )
      return;
    v8 = v18;
    v5 = a4;
    v6 = a3;
    goto LABEL_2;
  }
  if ( ((*(&v20 + v10) ^ v13) & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
LABEL_9:
    if ( v10 == 1 && ((v13 ^ v21) & 0xFFFFFFFFFFFFF000uLL) == 0 )
    {
      v11 = &v20;
      v9 = 1;
      if ( SystemAddressValid < 0 || !MI_READ_PTE_LOCK_FREE(v21) )
        *(_BYTE *)(a4 + 1) = (_BYTE)v10 << v12;
    }
    goto LABEL_13;
  }
  *(_BYTE *)(a4 + 1) = 1 << v17;
}
