__int64 __fastcall HUBDSM_InitializingEnumRetryCountInEnum(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1636), 0xFFFFDFFF);
  *(_DWORD *)(v1 + 2432) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_WORD *)(v1 + 2212) = 0;
  *(_WORD *)(v1 + 2208) = 0;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2468), 0xFFFFFFFD);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2468), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2216), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2216), 0xFFFFFFF7);
  return 4077LL;
}
