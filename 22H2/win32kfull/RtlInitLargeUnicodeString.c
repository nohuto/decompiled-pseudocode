/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C0033F1C
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00335B8 (xxxCreateDefaultImeWindow.c)
 *     NtUserfnINSTRINGNULL @ 0x1C0033C40 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C0033D30 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     xxxSetInformationThread @ 0x1C00D8CE0 (xxxSetInformationThread.c)
 *     NtUserfnINSTRING @ 0x1C012BD30 (NtUserfnINSTRING.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0168AB4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D7220 (EditionxxxBroadcastSPIChange.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F5D08 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0205270 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = a2;
  v3 = 0;
  *(_DWORD *)(a1 + 4) = v2;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v3 = 2 * v4;
    result = (2 * (_DWORD)v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    result = v2 & 0x80000000;
  }
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
