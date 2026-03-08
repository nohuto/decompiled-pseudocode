/*
 * XREFs of PiEventBuildPdoList @ 0x140863160
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x140863508 (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x1408637CC (PnpAllocateCriticalMemory.c)
 *     PnpFinalizeVetoedRemove @ 0x14096125C (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiEventBuildPdoList(
        unsigned int **a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  unsigned int v8; // ebx
  _BYTE *v9; // r12
  unsigned int *v13; // rax
  int v14; // r13d
  __int64 CriticalMemory; // r14
  __int64 v16; // rcx
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = a7;
  v22 = 0LL;
  v23 = 0;
  v13 = *a1;
  v14 = (int)a1;
  *(_BYTE *)a6 = 0;
  *v9 = 0;
  CriticalMemory = PnpAllocateCriticalMemory(a2, 64LL, 8LL * *v13, 1315991120LL);
  if ( CriticalMemory )
  {
    *a4 = 0;
    a6 = 1LL;
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)IopEnumerateRelations(
                                 v14,
                                 (unsigned int)&a6,
                                 (unsigned int)&v22,
                                 (unsigned int)&v23,
                                 0LL) )
          goto LABEL_14;
      }
      while ( !v23 && (a2 & 0xFFFFFFFB) != 0 );
      v16 = v22;
      if ( v22 )
        v17 = *(_DWORD **)(*(_QWORD *)(v22 + 312) + 40LL);
      else
        v17 = 0LL;
      if ( a2 != 2 )
      {
        if ( !a2 )
          goto LABEL_20;
        v18 = v17[142];
        if ( v18 == 1 )
        {
          *v7 = 1;
        }
        else if ( v18 )
        {
          *v9 = 1;
        }
        if ( a2 == 4 )
        {
LABEL_20:
          if ( (v17[99] & 0x1000) != 0 )
          {
            v21 = 1LL;
            goto LABEL_24;
          }
          if ( v17[75] == 787 )
          {
            v21 = 5LL;
LABEL_24:
            PnpFinalizeVetoedRemove(a3, v21, v17 + 10);
            v8 = -2147483608;
            goto LABEL_14;
          }
        }
      }
      v19 = (unsigned int)*a4;
      *(_QWORD *)(CriticalMemory + 8 * v19) = v16;
      *a4 = v19 + 1;
    }
  }
  v8 = -1073741670;
LABEL_14:
  result = v8;
  *a5 = CriticalMemory;
  return result;
}
