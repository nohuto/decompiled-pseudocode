/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C00A0F84
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxSetInformationThread @ 0x1C0093B70 (xxxSetInformationThread.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00A0450 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00A0C10 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C00A0D20 (NtUserfnINLPCREATESTRUCT.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C9760 (EditionxxxBroadcastSPIChange.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01CD264 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C01E26B0 (NtUserfnINLPMDICREATESTRUCT.c)
 *     NtUserfnINSTRING @ 0x1C01E35A0 (NtUserfnINSTRING.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r8d

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  result = 0LL;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v5 = 2 * v4;
    result = (2 * (_DWORD)v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
