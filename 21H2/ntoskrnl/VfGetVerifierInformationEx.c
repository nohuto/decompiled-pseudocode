/*
 * XREFs of VfGetVerifierInformationEx @ 0x1409EDB7C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfGetVerifierInformationEx(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = VfVerifyMode;
  *(_DWORD *)(a1 + 4) = dword_140C2A918;
  *(_DWORD *)(a1 + 24) = 1000 * VfWdCancelTimeoutTicks;
  *(_DWORD *)(a1 + 28) = XdvEnabled;
  return 0LL;
}
