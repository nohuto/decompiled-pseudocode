/*
 * XREFs of KiComplementAffinityEx @ 0x1402AF184
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402341D0 (PpmParkSteerInterrupts.c)
 *     KiGetDeepIdleProcessors @ 0x1402AF0A0 (KiGetDeepIdleProcessors.c)
 *     KeComplementAffinityEx @ 0x14056CDB0 (KeComplementAffinityEx.c)
 *     KeComplementAffinityEx2 @ 0x14056CDD0 (KeComplementAffinityEx2.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiComplementAffinityEx(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  _QWORD *v6; // rdx
  __int64 v7; // r11
  char *v8; // r8

  LOWORD(v3) = *a3;
  v4 = a2;
  if ( *a3 > a2 )
    LOWORD(v3) = a2;
  v5 = 0;
  if ( (_WORD)v3 )
  {
    v5 = (unsigned __int16)v3;
    v6 = (_QWORD *)(a1 + 8);
    v7 = (unsigned __int16)v3;
    v8 = (char *)a3 - a1;
    do
    {
      v3 = ~*(_QWORD *)((char *)v6 + (_QWORD)v8);
      *v6++ = v3;
      --v7;
    }
    while ( v7 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = v4;
  *(_WORD *)(a1 + 2) = v4;
  if ( v5 < v4 )
  {
    do
    {
      v3 = v5++;
      *(_QWORD *)(a1 + 8 * v3 + 8) = -1LL;
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 2);
    }
    while ( v5 < (unsigned int)v3 );
  }
  return v3;
}
