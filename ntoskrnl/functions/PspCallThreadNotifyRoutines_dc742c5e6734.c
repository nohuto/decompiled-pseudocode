void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, unsigned __int8 a2, char a3)
{
  bool v5; // r14
  union _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int Count; // eax
  union _RTL_RUN_ONCE *v11; // rbx
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
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
    v11 = &PspCreateThreadNotifyRoutine;
    v12 = 64LL;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v11);
      v14 = v13;
      if ( v13 )
      {
        if ( !v5 || (v13[2].Count & 2) != 0 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v13[1].Count)(*(_QWORD *)(a1[68] + 1088LL), a1[154], 0LL);
        ExDereferenceCallBackBlock((signed __int64 *)v11, v14);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
}
