char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rdx
  char v5; // r15
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rdi
  char v8; // al
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rax
  char result; // al
  int v15; // [rsp+60h] [rbp+40h] BYREF
  int v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  v17 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(_QWORD *)(a1 + 64) );
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v4 = KiProcessorBlock;
      while ( 1 )
      {
        v5 = *(_BYTE *)(a1 + 388);
        v6 = 0LL;
        v7 = 0LL;
        if ( v5 == 1 )
          break;
        switch ( *(_BYTE *)(a1 + 388) )
        {
          case 2:
LABEL_14:
            v9 = *(unsigned int *)(a1 + 536);
            if ( (int)v9 >= 0 )
            {
              v6 = KiProcessorBlock[v9];
              KiAcquirePrcbLocksForIsolationUnit(v6, 0, &v17);
              v10 = a1 == *(_QWORD *)(v6 + 8);
              goto LABEL_31;
            }
            break;
          case 3:
            v11 = *(unsigned int *)(a1 + 536);
            if ( (int)v11 >= 0 )
            {
              v6 = KiProcessorBlock[v11];
              KiAcquirePrcbLocksForIsolationUnit(v6, 0, &v17);
              if ( a1 == *(_QWORD *)(v6 + 16) )
                goto LABEL_33;
              if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
                __fastfail(0x1Eu);
              goto LABEL_32;
            }
            break;
          case 5:
            v8 = *(_BYTE *)(a1 + 112) & 7;
            if ( v8 == 1 || (unsigned __int8)(v8 - 3) <= 3u )
              goto LABEL_33;
            v5 = 2;
            goto LABEL_14;
          default:
            goto LABEL_33;
        }
      }
      v12 = *(unsigned int *)(a1 + 536);
      if ( (int)v12 >= 0 )
      {
        v6 = KiProcessorBlock[v12];
        KiAcquirePrcbLocksForIsolationUnit(v6, 0, &v17);
        if ( *(_BYTE *)(a1 + 388) != 1 )
        {
LABEL_32:
          KiReleasePrcbLocksForIsolationUnit(&v17);
          continue;
        }
        v10 = *(_DWORD *)(a1 + 536) == (_DWORD)v12;
LABEL_31:
        if ( v10 )
          goto LABEL_33;
        goto LABEL_32;
      }
      break;
    }
    v13 = (unsigned int)v12;
    LODWORD(v13) = v12 & 0x7FFFFFFF;
    v16 = 0;
    v7 = *(volatile signed __int32 **)(KiProcessorBlock[v13] + 34888);
    while ( _interlockedbittestandset64(v7, 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(_QWORD *)v7 );
    }
    if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v12 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
      continue;
    }
    break;
  }
LABEL_33:
  switch ( v5 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
LABEL_41:
      if ( v6 )
        KiReleasePrcbLocksForIsolationUnit(&v17);
      if ( v7 )
        _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
      *(_QWORD *)(a1 + 64) = 0LL;
      return 0;
    case 5:
      if ( (unsigned int)KiIsKernelStackSwappable(a1, v4) && !*(_BYTE *)(a1 + 113) )
        break;
      goto LABEL_41;
    case 7:
    case 9:
      goto LABEL_41;
  }
  result = 1;
  *a2 = v17;
  return result;
}
