/*
 * XREFs of PiEventBuildPdoList @ 0x14074AC68
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140749CC4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 *     IopEnumerateRelations @ 0x14074B374 (IopEnumerateRelations.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABD60 (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiEventBuildPdoList(
        unsigned int **a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  unsigned int v8; // ebx
  _BYTE *v9; // r12
  unsigned int *v13; // rax
  int v14; // r13d
  _QWORD *CriticalMemory; // r14
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
  CriticalMemory = PnpAllocateCriticalMemory(a2, NonPagedPoolNx, 8LL * *v13, 0x4E706E50u);
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
      while ( !v23 && a2 != 4 && a2 );
      v16 = v22;
      if ( v22 )
        v17 = *(_DWORD **)(*(_QWORD *)(v22 + 312) + 40LL);
      else
        v17 = 0LL;
      if ( a2 == 2 )
        goto LABEL_12;
      if ( a2 )
        break;
LABEL_18:
      if ( (v17[99] & 0x1000) != 0 )
      {
        v21 = 1LL;
        goto LABEL_25;
      }
      if ( v17[75] == 785 )
      {
        v21 = 5LL;
LABEL_25:
        PnpFinalizeVetoedRemove(a3, v21, v17 + 10);
        v8 = -2147483608;
        goto LABEL_14;
      }
LABEL_13:
      v19 = (unsigned int)*a4;
      CriticalMemory[v19] = v16;
      *a4 = v19 + 1;
    }
    v18 = v17[142];
    if ( v18 == 1 )
    {
      *v7 = 1;
    }
    else if ( v18 )
    {
      *v9 = 1;
    }
LABEL_12:
    if ( (a2 & 0xFFFFFFFB) != 0 )
      goto LABEL_13;
    goto LABEL_18;
  }
  v8 = -1073741670;
LABEL_14:
  result = v8;
  *a5 = CriticalMemory;
  return result;
}
