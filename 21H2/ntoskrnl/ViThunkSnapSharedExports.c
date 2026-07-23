/*
 * XREFs of ViThunkSnapSharedExports @ 0x1409C329C
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x1409C31C8 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140255B10 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C334C (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  ULONG v13; // eax
  __int64 v14; // r8
  ULONG v15; // ebx
  int v16; // eax
  ULONG StartingRunIndex; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  StartingRunIndex = 0;
  if ( a5 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, &StartingRunIndex) )
        break;
      v15 = StartingRunIndex;
      v16 = ViThunkSnapSharedExportByName(a1, a2 + a3 * StartingRunIndex, v14, a6 + 32LL * v8);
      if ( v7 || v16 )
        v7 = 1;
      v6 = v15 + 1;
      ++v8;
      v13 = v6;
      StartingRunIndex = v6;
    }
    while ( v8 < a5 );
  }
  return v7;
}
