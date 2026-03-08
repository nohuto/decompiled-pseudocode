/*
 * XREFs of HalFixInterruptLine @ 0x14051F320
 * Callers:
 *     HalpApicInitializeIoUnit @ 0x14039F3E0 (HalpApicInitializeIoUnit.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 */

__int64 __fastcall HalFixInterruptLine(unsigned int *a1, __int128 *a2)
{
  unsigned int v3; // ebx
  _QWORD *Lines; // rax
  _QWORD *v5; // r9
  _BYTE *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int128 v10; // xmm0

  v3 = 0;
  Lines = HalpInterruptFindLines(a1);
  v5 = Lines;
  if ( Lines )
  {
    v6 = (_BYTE *)Lines[6];
    v7 = *a2;
    v8 = a2[1];
    ++HalpInterruptFixedLines;
    *v6 = 1;
    v9 = v5[5];
    *(_OWORD *)v9 = v7;
    v10 = a2[2];
    *(_OWORD *)(v9 + 16) = v8;
    *(_QWORD *)&v8 = *((_QWORD *)a2 + 6);
    *(_OWORD *)(v9 + 32) = v10;
    *(_QWORD *)(v9 + 48) = v8;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
