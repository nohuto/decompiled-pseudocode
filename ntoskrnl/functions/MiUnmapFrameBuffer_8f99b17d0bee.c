__int64 __fastcall MiUnmapFrameBuffer(__int64 *BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rbx
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  int v19; // edi
  __int64 v20; // r8
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1LL;
  v5 = a3;
  v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)BugCheckParameter2);
  v9 = v22;
  MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22);
  v10 = MiSwizzleInvalidPte(128LL);
  v15 = v10;
  if ( a2 == 2 )
  {
    v15 = v10 | 0x300;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    v15 = v10 | 0x100;
    goto LABEL_3;
  }
  if ( a2 != 3 )
  {
LABEL_3:
    BugCheckParameter4 = 8 * v12 - 0x220000000000LL;
    if ( v11 )
      goto LABEL_4;
LABEL_15:
    *a4 = v14;
    goto LABEL_16;
  }
  if ( !v11 )
  {
    v15 = v9 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    goto LABEL_15;
  }
  v15 = 0LL;
  BugCheckParameter4 = 8 * v12 - 0x220000000000LL;
LABEL_4:
  v17 = *(_QWORD *)(BugCheckParameter4 + 40);
  v18 = 1;
  if ( (v17 & 0x10000000000LL) != 0 || (v13 & v17) == 0x3FFFFFFFFELL )
    v18 = 2;
  if ( *(_WORD *)(BugCheckParameter4 + 32) < v18 )
    KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)BugCheckParameter2, v9, BugCheckParameter4);
  v5 = 1;
  if ( *(_WORD *)(BugCheckParameter4 + 32) <= v18 )
    v5 = a3;
LABEL_16:
  if ( a2 != 3 )
    v15 = (v15 & 0xFF1F ^ (unsigned __int16)(v15 & 0xFF1F | ((v9 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v15 & 0xFFFFFFFFFFFFFF1FuLL;
  v19 = 0;
  if ( MiPteInShadowRange((unsigned __int64)BugCheckParameter2) )
  {
    if ( MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_28;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_28;
    }
    if ( (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_28:
  *BugCheckParameter2 = v15;
  if ( v19 )
    MiWritePteShadow((__int64)BugCheckParameter2, v15, v20);
  return v5;
}
