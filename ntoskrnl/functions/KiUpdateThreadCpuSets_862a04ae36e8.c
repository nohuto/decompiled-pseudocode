char __fastcall KiUpdateThreadCpuSets(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  unsigned __int8 v7; // r14
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rsi
  char v10; // al
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0LL;
  v3 = *(_DWORD *)(a1 + 116);
  v5 = *(_DWORD *)(a1 + 588);
  v6 = v5;
  if ( (v3 & 8) == 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *(_BYTE *)(a1 + 388);
          v8 = 0LL;
          v9 = 0LL;
          if ( v7 != 1 )
            break;
          v14 = *(unsigned int *)(a1 + 536);
          if ( (int)v14 >= 0 )
          {
            v8 = KiProcessorBlock[v14];
            KiAcquirePrcbLocksForIsolationUnit(v8, 0, &v19);
            if ( *(_BYTE *)(a1 + 388) != 1 )
              goto LABEL_31;
            v12 = *(_DWORD *)(a1 + 536) == (_DWORD)v14;
            goto LABEL_12;
          }
          v15 = (unsigned int)v14;
          LODWORD(v15) = v14 & 0x7FFFFFFF;
          v18 = 0;
          v9 = *(volatile signed __int32 **)(KiProcessorBlock[v15] + 34888);
          while ( _interlockedbittestandset64(v9, 0LL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *(_QWORD *)v9 );
          }
          if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
          {
LABEL_7:
            KiComputeThreadAffinity(a1);
            v6 = *(_DWORD *)(a1 + 588);
            LOBYTE(v3) = KiRescheduleThreadAfterAffinityChange(
                           a1,
                           *(unsigned __int16 **)(a1 + 576),
                           0LL,
                           v7,
                           v8,
                           &v19,
                           (volatile signed __int64 *)v9,
                           a2);
            goto LABEL_8;
          }
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
        }
        if ( *(_BYTE *)(a1 + 388) != 2 )
          break;
LABEL_10:
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          v8 = KiProcessorBlock[v11];
          KiAcquirePrcbLocksForIsolationUnit(v8, 0, &v19);
          v12 = a1 == *(_QWORD *)(v8 + 8);
LABEL_12:
          if ( v12 )
            goto LABEL_7;
          goto LABEL_31;
        }
      }
      if ( *(_BYTE *)(a1 + 388) != 3 )
      {
        if ( *(_BYTE *)(a1 + 388) != 5 )
          goto LABEL_7;
        v10 = *(_BYTE *)(a1 + 112) & 7;
        if ( v10 == 1 || (unsigned __int8)(v10 - 3) <= 3u )
          goto LABEL_7;
        v7 = 2;
        goto LABEL_10;
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 >= 0 )
      {
        v8 = KiProcessorBlock[v13];
        KiAcquirePrcbLocksForIsolationUnit(v8, 0, &v19);
        if ( a1 == *(_QWORD *)(v8 + 16) )
          goto LABEL_7;
        if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
          __fastfail(0x1Eu);
LABEL_31:
        KiReleasePrcbLocksForIsolationUnit(&v19);
      }
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
LABEL_8:
  if ( (xmmword_140D1EAD0 & 0x8000000) != 0 )
    LOBYTE(v3) = EtwTraceIdealProcessor(a1, 1350LL, v5, v6, v17);
  return v3;
}
