/*
 * XREFs of MiCreateFileOnlyPfns @ 0x140A30F88
 * Callers:
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MiDecrementProtoShareCounts @ 0x14063A580 (MiDecrementProtoShareCounts.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14063AB90 (MiFillFileOnlyProtoAsBad.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiCreateFileOnlyPfns(__int64 *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // esi
  unsigned __int64 v6; // r13
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rbp
  __int64 v9; // rbx
  char v11; // r12
  int v13; // eax
  ULONG_PTR v14; // r12
  unsigned __int16 *ControlAreaPartition; // rax
  ULONG_PTR v16; // [rsp+30h] [rbp-68h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+54h] [rbp-44h]
  __int64 *v21; // [rsp+A0h] [rbp+8h]
  __int64 v22; // [rsp+A8h] [rbp+10h]

  v22 = a2;
  v21 = a1;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v11 = a3;
  while ( 1 )
  {
    if ( v9 == a5 )
    {
      if ( !v7 )
        return (unsigned int)v5;
    }
    else
    {
      if ( !v7 )
      {
        v8 = *(_QWORD *)(a4 + 8 * v9);
        v7 = 1LL;
        goto LABEL_27;
      }
      if ( *(_QWORD *)(a4 + 8 * v9 - 8) + 1LL == *(_QWORD *)(a4 + 8 * v9) )
      {
        ++v7;
        goto LABEL_27;
      }
      a1 = v21;
    }
    if ( v8 == 0x8000000000000000uLL )
      break;
    if ( (v8 & 0x4000000000000000LL) == 0 )
    {
      if ( v5 < 0 )
      {
        if ( a4 + 8 * v9 <= v6 )
        {
          if ( (v11 & 0x40) != 0 )
            MiDecrementProtoShareCounts(v8, v7);
          MiRemovePhysicalMemory(v8, v7, 0x22u);
        }
      }
      else
      {
        v20 = 0;
        v13 = 2;
        v18[0] = a1;
        if ( (v11 & 0x40) != 0 )
          v13 = 6;
        v14 = v9 - v7;
        v19 = v13;
        v16 = v7 << 12;
        v18[1] = a2 + 8 * (v9 - v7);
        v17 = v8 << 12;
        ControlAreaPartition = (unsigned __int16 *)MiGetControlAreaPartition(*a1);
        v5 = MiAddPhysicalMemory(ControlAreaPartition, (__int64 *)&v17, (__int64 *)&v16, 4194306LL, (__int64)v18);
        if ( v5 < 0 )
        {
          v7 = 0LL;
          v6 = a4 + 8 * v14;
          v9 = -1LL;
          goto LABEL_27;
        }
      }
    }
LABEL_25:
    if ( v9 == a5 )
      return (unsigned int)v5;
    v7 = 0LL;
    --v9;
LABEL_27:
    if ( ++v9 > a5 )
      return (unsigned int)v5;
    v11 = a3;
    a1 = v21;
    a2 = v22;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  MiFillFileOnlyProtoAsBad((__int64)a1, (__int64 *)(a2 + 8 * (v9 - v7)));
  if ( (v11 & 2) == 0 )
    goto LABEL_25;
  return (unsigned int)-1073740023;
}
