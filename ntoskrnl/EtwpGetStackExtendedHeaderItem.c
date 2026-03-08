/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x1405FD72C
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 *     EtwpGetStackCaptureSettings @ 0x1404603A4 (EtwpGetStackCaptureSettings.c)
 */

char __fastcall EtwpGetStackExtendedHeaderItem(
        struct _KTHREAD *a1,
        char a2,
        ULONG a3,
        __int64 a4,
        char a5,
        signed __int64 *a6)
{
  PVOID *v6; // rsi
  ULONG v11; // ebx
  signed __int64 v12; // rdi
  __int16 v13; // r15
  ULONG v14; // ebx
  __int16 v15; // bx
  char result; // al
  __int16 v17; // bx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+88h] [rbp+20h] BYREF

  v6 = (PVOID *)(*(_QWORD *)a4 + 16LL);
  v18[0] = 0;
  v11 = 0;
  v19 = 0;
  v12 = 0LL;
  v13 = 0;
  if ( a5 )
  {
    v14 = RtlWalkFrameChain(v6, a3, 0x300u);
    if ( v14 > 3 )
      v11 = v14 - 3;
    else
      v11 = 0;
  }
  EtwpGetStackCaptureSettings(a1, 0, 0, &v19, v18);
  if ( v19 )
  {
    if ( v18[0] || (a2 & 1) != 0 )
    {
      v12 = _InterlockedIncrement64(&EtwpStackMatchId);
    }
    else
    {
      v13 = RtlWalkFrameChain(&v6[v11], a3 - v11, 1u);
      if ( a6 )
        v12 = *a6;
    }
  }
  v15 = v13 + v11;
  if ( !v15 && !v12 )
    return 0;
  v17 = 8 * (v15 + 1);
  *(_QWORD *)(*(_QWORD *)a4 + 8LL) = v12;
  result = 1;
  **(_WORD **)a4 = v17 + 8;
  *(_WORD *)(*(_QWORD *)a4 + 2LL) = 6;
  *(_WORD *)(*(_QWORD *)a4 + 6LL) = v17;
  *(_WORD *)(*(_QWORD *)a4 + 4LL) &= ~1u;
  *(_WORD *)(*(_QWORD *)a4 + 4LL) &= 1u;
  return result;
}
