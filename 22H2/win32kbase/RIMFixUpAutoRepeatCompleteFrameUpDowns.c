/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C0171818
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C0174394 (rimDispatchCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int v9; // r8d
  __int64 v10; // rdx
  unsigned int i; // ecx
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // ecx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1322);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1323);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1324);
  result = *(unsigned int *)(a3 + 24);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  for ( i = result; (unsigned int)v10 < (unsigned int)result; i = result )
  {
    v12 = *(_QWORD *)(a3 + 120);
    v13 = 192LL * (unsigned int)v10;
    v14 = *(_DWORD *)(v13 + v12 + 28);
    if ( (v14 & 0x10000) != 0 )
    {
      v15 = v14 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(v13 + v12 + 28) = v15;
      if ( (v15 & 0x2000) != 0 )
        v9 = 1;
    }
    result = *(unsigned int *)(a3 + 24);
    v10 = (unsigned int)(v10 + 1);
  }
  if ( *(_QWORD *)(a1 + 640) && v9 )
  {
    PoLatencySensitivityHint(2LL, v10);
    result = *(unsigned int *)(a3 + 24);
    i = *(_DWORD *)(a3 + 24);
  }
  if ( (_DWORD)result )
  {
    v16 = (_DWORD *)(*(_QWORD *)(a3 + 120) + 28LL);
    v17 = i;
    do
    {
      result = v8 + 1;
      if ( (*v16 & 0x40000) == 0 )
        result = v8;
      v16 += 48;
      v8 = result;
      --v17;
    }
    while ( v17 );
    if ( (_DWORD)result )
    {
      do
      {
        v18 = *(_DWORD *)(a3 + 24);
        v19 = 0;
        v20 = v18;
        if ( v18 )
        {
          v21 = *(_QWORD *)(a3 + 120);
          while ( (*(_DWORD *)(192LL * v19 + v21 + 28) & 0x40000) == 0 )
          {
            if ( ++v19 >= v18 )
            {
              v20 = *(_DWORD *)(a3 + 24);
              goto LABEL_33;
            }
          }
          ++v7;
          if ( *(_QWORD *)(a3 + 104) == v21 + 192LL * v19 )
            *(_QWORD *)(a3 + 104) = 0LL;
          v20 = v18;
          if ( v19 < v18 )
          {
            do
            {
              v22 = v18;
              if ( v19 >= v18 - 1 )
              {
                v20 = *(_DWORD *)(a3 + 24);
              }
              else
              {
                memmove(
                  (void *)(*(_QWORD *)(a3 + 120) + 192LL * v19),
                  (const void *)(*(_QWORD *)(a3 + 120) + 192LL * (v19 + 1)),
                  0xC0uLL);
                v20 = *(_DWORD *)(a3 + 24);
                v22 = v20;
              }
              ++v19;
              v18 = v22;
            }
            while ( v19 < v22 );
          }
        }
LABEL_33:
        ;
      }
      while ( v7 < v8 );
      result = v20 - v7;
      *(_DWORD *)(a3 + 24) = result;
    }
  }
  return result;
}
