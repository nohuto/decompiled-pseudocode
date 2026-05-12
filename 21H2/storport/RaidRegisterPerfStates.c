/*
 * XREFs of RaidRegisterPerfStates @ 0x1C003F758
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RaidGetStorPoFxPerfState @ 0x1C0037E7C (RaidGetStorPoFxPerfState.c)
 *     RaidValidatePerfSets @ 0x1C004002C (RaidValidatePerfSets.c)
 */

__int64 __fastcall RaidRegisterPerfStates(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v9; // ecx
  _DWORD *v10; // rdx
  __int64 v11; // r8
  size_t v12; // rbp
  _DWORD *Pool; // rax
  _DWORD *v14; // rsi
  __int64 v16; // r14
  _QWORD *v17; // r15
  _QWORD *v18; // r9
  _DWORD *v19; // r10
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r11d
  __int64 StorPoFxPerfState; // rax
  int v24; // r11d
  void *v25; // r9
  unsigned int v26; // ebx

  v6 = a4;
  if ( !a4 || !a5 || !(unsigned __int8)RaidValidatePerfSets(a5, a4) )
    return 3221225485LL;
  v9 = 48 * v6 + 56;
  if ( (_DWORD)v6 )
  {
    v10 = (_DWORD *)(a5 + 24);
    v11 = (unsigned int)v6;
    do
    {
      if ( !*(v10 - 1) )
        v9 += 16 * *v10;
      v10 += 10;
      --v11;
    }
    while ( v11 );
  }
  v12 = v9;
  Pool = RaidAllocatePool(NonPagedPoolNx, v9, 0x4F506152u, a1);
  v14 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v12);
  *v14 = v6;
  v16 = v6;
  v17 = &v14[12 * v6 + 14];
  if ( (_DWORD)v6 )
  {
    v18 = (_QWORD *)(a5 + 24);
    v19 = v14 + 9;
    do
    {
      *(_QWORD *)(v19 - 3) = *(v18 - 2);
      *v19 = *((_DWORD *)v18 - 1);
      v20 = 0;
      if ( *((_DWORD *)v18 - 2) != 3 )
        v20 = *((_DWORD *)v18 - 2);
      *(v19 - 1) = v20;
      v21 = *((_DWORD *)v18 - 1);
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          *(_QWORD *)(v19 + 1) = *v18;
          *(_QWORD *)(v19 + 3) = v18[1];
        }
      }
      else
      {
        *(_QWORD *)(v19 + 3) = v17;
        v22 = 0;
        for ( v19[1] = *(_DWORD *)v18; v22 < *(_DWORD *)v18; v17 += 2 )
        {
          StorPoFxPerfState = RaidGetStorPoFxPerfState((_DWORD *)v18 - 6, v22);
          v22 = v24 + 1;
          v17[1] = *(_QWORD *)(StorPoFxPerfState + 16);
          *v17 = *(_QWORD *)(StorPoFxPerfState + 8);
        }
      }
      v18 += 5;
      v19 += 12;
      --v16;
    }
    while ( v16 );
  }
  v25 = RaidNullReference;
  if ( **(_DWORD **)(a1 + 64) != 1 )
    v25 = RaidAdapterPerfStateCallback;
  v26 = PoFxRegisterComponentPerfStates(a6, a2, (a3 >> 7) & 1, v25, v14, 0LL);
  ExFreePoolWithTag(v14, 0x4F506152u);
  return v26;
}
