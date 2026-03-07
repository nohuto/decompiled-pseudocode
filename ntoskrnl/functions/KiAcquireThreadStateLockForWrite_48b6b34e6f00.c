char __fastcall KiAcquireThreadStateLockForWrite(__int64 a1, __int64 *a2, __int64 *a3, volatile signed __int32 **a4)
{
  char v8; // r15
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rsi
  char v11; // al
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rax
  char result; // al
  int v18; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_BYTE *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_8:
          v12 = *(unsigned int *)(a1 + 536);
          if ( (int)v12 >= 0 )
          {
            v9 = KiProcessorBlock[v12];
            KiAcquirePrcbLocksForIsolationUnit(v9, 0, a3);
            v13 = a1 == *(_QWORD *)(v9 + 8);
LABEL_25:
            if ( v13 )
              goto LABEL_27;
LABEL_26:
            KiReleasePrcbLocksForIsolationUnit(a3);
          }
          break;
        case 3:
          v14 = *(unsigned int *)(a1 + 536);
          if ( (int)v14 >= 0 )
          {
            v9 = KiProcessorBlock[v14];
            KiAcquirePrcbLocksForIsolationUnit(v9, 0, a3);
            if ( a1 == *(_QWORD *)(v9 + 16) )
              goto LABEL_27;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
              __fastfail(0x1Eu);
            goto LABEL_26;
          }
          break;
        case 5:
          v11 = *(_BYTE *)(a1 + 112) & 7;
          if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
            goto LABEL_27;
          v8 = 2;
          goto LABEL_8;
        default:
          goto LABEL_27;
      }
    }
    v15 = *(unsigned int *)(a1 + 536);
    if ( (int)v15 >= 0 )
    {
      v9 = KiProcessorBlock[v15];
      KiAcquirePrcbLocksForIsolationUnit(v9, 0, a3);
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_26;
      v13 = *(_DWORD *)(a1 + 536) == (_DWORD)v15;
      goto LABEL_25;
    }
    v16 = (unsigned int)v15;
    LODWORD(v16) = v15 & 0x7FFFFFFF;
    v18 = 0;
    v10 = *(volatile signed __int32 **)(KiProcessorBlock[v16] + 34888);
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v10 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  }
LABEL_27:
  result = v8;
  *a4 = v10;
  *a2 = v9;
  return result;
}
