/*
 * XREFs of NtSetTimerEx @ 0x1402CDBB0
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1402BDBE4 (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x1402CDD38 (ExpSetTimer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  __int128 *v4; // rbx
  char PreviousMode; // si
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int128 v17; // [rsp+80h] [rbp-18h]

  v4 = a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v13[0] = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a3 + a4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (_DWORD)a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    v15 = *a3;
    v16 = a3[1];
    v17 = a3[2];
    v4 = &v15;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = *((_QWORD *)v4 + 3);
  if ( !v8
    || (LOBYTE(a2) = PreviousMode, result = PoCaptureReasonContext(v8, a2, 0LL, 0, (__int64)v13, &P), (int)result >= 0) )
  {
    v9 = P;
    LOBYTE(a2) = PreviousMode;
    v10 = ExpSetTimer(
            a1,
            a2,
            v4,
            *((_QWORD *)v4 + 1),
            *((_QWORD *)v4 + 2),
            P,
            v13[0],
            *((_DWORD *)v4 + 8),
            *((_DWORD *)v4 + 9),
            *((_QWORD *)v4 + 5));
    v11 = v10;
    if ( v10 < 0 || v10 == 1073741861 )
    {
      if ( v9 )
        PoDestroyReasonContext(v9);
    }
    return v11;
  }
  return result;
}
