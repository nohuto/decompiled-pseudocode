/*
 * XREFs of KeSelectNodeForAffinity @ 0x1403B0188
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x140296818 (KiSetIdealNodeProcessByGroup.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v3; // cx
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rax

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v3 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v3 >= (unsigned __int16)KeNumberNodes )
      v3 = 0;
    v5 = KeNodeBlock[v3];
    if ( (*(_BYTE *)(v5 + 10) & 1) == 0 )
    {
      v6 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(a1 + 8) + 24);
      if ( v6 )
      {
        if ( (*(_QWORD *)(v6 + 128) & *(_QWORD *)a1) != 0LL )
          break;
      }
    }
    ++v4;
    ++v3;
    if ( v4 >= (unsigned __int16)KeNumberNodes )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v3 >= (unsigned __int16)KeNumberNodes )
          v3 = 0;
        v5 = KeNodeBlock[v3];
        v8 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(a1 + 8) + 24);
        if ( v8 )
        {
          if ( (*(_QWORD *)(v8 + 128) & *(_QWORD *)a1) != 0LL )
            break;
        }
        ++v7;
        ++v3;
        if ( v7 >= (unsigned __int16)KeNumberNodes )
          return 0LL;
      }
      return v5;
    }
  }
  return v5;
}
