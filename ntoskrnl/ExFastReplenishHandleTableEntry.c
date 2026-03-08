/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x1402F8548
 * Callers:
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, signed __int64 *a2, int a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r8d
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int128 v13; // rt0
  unsigned __int8 v14; // tt
  __int128 v16; // [rsp+0h] [rbp-18h]

  v4 = a3;
  v5 = *a2;
  v7 = v5 >> 20;
  do
  {
    v8 = v4 + (unsigned __int16)(v5 >> 1);
    v9 = v4 + (unsigned __int16)(v5 >> 1);
    v16 = *(_OWORD *)a2;
    if ( v8 > 0xFFFF )
      v9 = 0xFFFF;
    v10 = v8 - 0xFFFF;
    if ( v8 <= 0xFFFF )
      v10 = 0;
    v11 = ((unsigned int)*a2 ^ (2 * v9)) & 0x1FFFE ^ (unsigned __int64)*a2;
    v13 = *(_OWORD *)a2;
    v14 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v16 + 1), v11, (signed __int64 *)&v13);
    v12 = v13;
    *(_OWORD *)a2 = v13;
    if ( v14 )
    {
      LODWORD(v4) = v10;
      return (unsigned int)v4;
    }
    v5 = v12;
  }
  while ( v12 >> 20 == v7 && (v12 & 1) != 0 );
  a2[1] = *((_QWORD *)&v16 + 1);
  *a2 = v11;
  return (unsigned int)v4;
}
