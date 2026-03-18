/*
 * XREFs of NtSetTimerEx @ 0x14032E400
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x14032E588 (ExpSetTimer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  __int128 *v4; // rbx
  char PreviousMode; // si
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 result; // rax
  bool v16; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF
  __int128 v19; // [rsp+70h] [rbp-28h]
  __int128 v20; // [rsp+80h] [rbp-18h]

  v4 = a3;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0;
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
    v18 = *a3;
    v19 = a3[1];
    v20 = a3[2];
    v4 = &v18;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = *((_QWORD *)v4 + 3);
  if ( !v8 || (result = PoCaptureReasonContext(v8, PreviousMode, 0LL, 0, &v16, (__int64 *)&P), (int)result >= 0) )
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
            v16,
            *((_DWORD *)v4 + 8),
            *((_DWORD *)v4 + 9),
            *((_QWORD *)v4 + 5));
    v14 = v10;
    if ( v10 < 0 || v10 == 1073741861 )
    {
      if ( v9 )
        PoDestroyReasonContext(v9, v11, v12, v13);
    }
    return v14;
  }
  return result;
}
