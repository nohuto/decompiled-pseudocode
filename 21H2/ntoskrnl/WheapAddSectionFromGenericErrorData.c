/*
 * XREFs of WheapAddSectionFromGenericErrorData @ 0x1405BCDBC
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x1405BCF20 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall WheapAddSectionFromGenericErrorData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // rax
  unsigned int v8; // r9d
  unsigned int v10; // ebx
  unsigned int *v11; // rdx
  __int64 v12; // r10
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // esi
  const GUID *v16; // rcx

  v6 = *(unsigned __int16 *)(a2 + 10);
  v8 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)v6 >= v8 )
    return (unsigned int)-1073741789;
  v10 = 0;
  v11 = (unsigned int *)(a2 + 128);
  v12 = 72LL;
  if ( (_WORD)v6 )
  {
    v14 = &v11[18 * v6 - 18];
    v13 = *v14 + v14[1];
    v11 = v14 + 18;
  }
  else
  {
    v13 = 72 * v8 + 128;
  }
  if ( a6 )
  {
    v15 = *(_DWORD *)(a4 + 24);
    v16 = (const GUID *)a4;
    if ( *(_WORD *)(a4 + 20) != 768 )
      v12 = 64LL;
  }
  else
  {
    v15 = a5;
    v16 = &GENERIC_SECTION_GUID;
    v12 = 0LL;
  }
  if ( a3 - v13 < v15 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *v11 = v13;
    v11[1] = v15;
    *((_WORD *)v11 + 4) = 768;
    *((_BYTE *)v11 + 10) = *(_BYTE *)(a4 + 22);
    v11[3] = *(unsigned __int8 *)(a4 + 23);
    *((GUID *)v11 + 1) = *v16;
    *((_OWORD *)v11 + 2) = *(_OWORD *)(a4 + 28);
    v11[12] = *(_DWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 13) = *(_OWORD *)(a4 + 44);
    v11[17] = *(_DWORD *)(a4 + 60);
    memmove((void *)(a2 + v13), (const void *)(v12 + a4), v15);
    ++*(_WORD *)(a2 + 10);
  }
  return v10;
}
