/*
 * XREFs of IncPaintCount @ 0x1C0225AE0
 * Callers:
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 */

int __fastcall IncPaintCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edx
  int result; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(v4 + 600);
  result = v5 + 1;
  *(_DWORD *)(v4 + 600) = v5 + 1;
  if ( !v5 )
  {
    EtwTraceWakePump(v4, a1, 15LL, a4);
    return SetWakeBit(v4, 0x20u);
  }
  return result;
}
