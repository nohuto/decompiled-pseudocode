/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1406F8640
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspInitializeThunkContext @ 0x140702CA4 (PspInitializeThunkContext.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140281930 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, unsigned __int8 a2, char a3)
{
  bool v5; // bp
  union _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  union _RTL_RUN_ONCE *v10; // rbx
  __int64 v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rsi
  int Count; // eax
  union _RTL_RUN_ONCE *v15; // rbx
  __int64 v16; // rdi
  struct _EX_RUNDOWN_REF *v17; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi

  v5 = a1[198] != 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v15 = &PspCreateThreadNotifyRoutine;
        v16 = 64LL;
        do
        {
          v17 = ExReferenceCallBackBlock((signed __int64 *)v15);
          v18 = v17;
          if ( v17 )
          {
            if ( (v17[2].Count & 1) != 0 )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v17[1].Count)(*(_QWORD *)(a1[68] + 1088LL), a1[154], a2);
            ExDereferenceCallBackBlock((signed __int64 *)v15, v18);
          }
          ++v15;
          --v16;
        }
        while ( v16 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v6 = &PspCreateThreadNotifyRoutine;
      v7 = 64LL;
      do
      {
        v8 = ExReferenceCallBackBlock((signed __int64 *)v6);
        v9 = v8;
        if ( v8 )
        {
          Count = v8[2].Count;
          if ( (Count & 1) == 0 && (!v5 || (Count & 2) != 0) )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v9[1].Count)(*(_QWORD *)(a1[68] + 1088LL), a1[154], a2);
          ExDereferenceCallBackBlock((signed __int64 *)v6, v9);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v10 = &PspCreateThreadNotifyRoutine;
    v11 = 64LL;
    do
    {
      v12 = ExReferenceCallBackBlock((signed __int64 *)v10);
      v13 = v12;
      if ( v12 )
      {
        if ( !v5 || (v12[2].Count & 2) != 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12[1].Count)(*(_QWORD *)(a1[68] + 1088LL), a1[154], 0LL);
        ExDereferenceCallBackBlock((signed __int64 *)v10, v13);
      }
      ++v10;
      --v11;
    }
    while ( v11 );
  }
}
