/*
 * XREFs of MiExpandVadBitMap @ 0x1407295BC
 * Callers:
 *     MiInitializeVadCellBitMap @ 0x140729460 (MiInitializeVadCellBitMap.c)
 *     MiFindEmptyAddressRange @ 0x1407D6F10 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiLocateLowestConflictingVad @ 0x1402A6F9C (MiLocateLowestConflictingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x140729534 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x140A3970C (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r12
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 LowestConflictingVad; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v3 = a2;
  v4 = a1[1];
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = *a1;
  v7 = Process[1].ActiveProcessors.StaticBitmap[28];
  v8 = *a1 + ((-524288 * qword_140C66CE8 + (v4 << 19)) >> 16);
  v9 = a1[5] - v8 + 1;
  if ( a2 > v9 )
    return MiExpandVadBitMapDown(a1, a2);
  v10 = (v6 + 8 * (v4 - qword_140C66CE8)) << 16;
  LowestConflictingVad = MiLocateLowestConflictingVad((__int64)Process, v10);
  if ( LowestConflictingVad )
  {
    v3 += (((unsigned __int64)*(unsigned int *)(LowestConflictingVad + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(LowestConflictingVad + 33) << 28))
        - (v10 >> 16);
    if ( v3 > v9 )
      v3 = v9;
  }
  if ( (int)MiMakeHyperRangeAccessible(v4 + (v6 >> 3), v4 + ((v3 + v6 - 1) >> 3), &v17) < 0 )
    return 0LL;
  *(_QWORD *)(v7 + 272) += v17;
  v12 = ((8 * ((v3 >> 6) + ((v3 & 0x3F) != 0))) >> 12) + (((8 * ((v3 >> 6) + ((v3 & 0x3F) != 0))) & 0xFFF) != 0);
  v13 = (v12 << 15) + *a1;
  v14 = (v12 << 15) + v8;
  *a1 = v13;
  v15 = a1[5];
  if ( v14 > v15 + 1 )
    *a1 = v15 - v14 + v13 + 1;
  if ( v4 + (v6 >> 3) == qword_140C66CE8 )
  {
    *(_QWORD *)a1[1] |= 1uLL;
    if ( v6 )
      a1[2] = 1LL;
  }
  MiUpdateVadBits(v10, v10 + (v12 << 31));
  return 1LL;
}
