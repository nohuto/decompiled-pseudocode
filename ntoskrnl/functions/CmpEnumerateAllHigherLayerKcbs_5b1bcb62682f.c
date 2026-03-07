_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(ULONG_PTR, __int64, __int64),
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _UNKNOWN **result; // rax
  _QWORD *v8; // rdi
  bool v9; // bp
  unsigned int (__fastcall *v11)(ULONG_PTR, __int64, __int64); // r9
  char v13; // r8
  _QWORD *v14; // rbx
  ULONG_PTR v15; // rsi
  _QWORD *v16; // r15
  ULONG_PTR v17; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0;
  v11 = a3;
  if ( v8 )
  {
    result = (_UNKNOWN **)(v8 + 4);
    v13 = 0;
    v14 = (_QWORD *)v8[4];
    if ( v14 != v8 + 4 )
    {
      while ( v14 == v8 + 4 )
      {
        v14 = v8;
        v13 = 1;
        v8 = (_QWORD *)v8[3];
LABEL_18:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
        if ( v14 == result )
          return result;
      }
      v15 = v14[2];
      v16 = v14;
      if ( v13 )
      {
        v14 = (_QWORD *)*v14;
        if ( !v9 )
          v9 = v11(v15, a4, a5) == 1;
        if ( a6 )
          CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
        else
          CmpUnlockKcb(v15);
        if ( v9 )
        {
          v14 = v8;
          v13 = 1;
          v8 = (_QWORD *)v8[3];
          goto LABEL_17;
        }
      }
      else
      {
        v17 = v14[2];
        if ( a6 )
        {
          CmpReferenceKeyControlBlock(v17);
        }
        else if ( a7 )
        {
          CmpLockKcbExclusive(v17);
        }
        else
        {
          CmpLockKcbShared(v17);
        }
        if ( a2(v15, a5) == 1 )
        {
          v14 = (_QWORD *)v14[4];
          v8 = v16;
        }
        else
        {
          v14 = (_QWORD *)*v14;
          if ( a6 )
            CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
          else
            CmpUnlockKcb(v15);
        }
      }
      v13 = 0;
LABEL_17:
      v11 = a3;
      goto LABEL_18;
    }
  }
  return result;
}
