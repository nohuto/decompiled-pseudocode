__int128 *__fastcall KiFilterBugCheckInfo(_DWORD *a1, __int64 a2)
{
  __int128 *result; // rax
  __int64 v3; // rax

  result = (__int128 *)KeGetCurrentPrcb();
  if ( result == (__int128 *)qword_140C0DF28 )
  {
    KiBugCheckOriginalData = *(_OWORD *)a2;
    xmmword_140C0E0F0 = *(_OWORD *)(a2 + 16);
    qword_140C0E100 = *(_QWORD *)(a2 + 32);
    *a1 = 265;
    *(_QWORD *)a2 = 265LL;
    v3 = qword_140C097A0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = v3;
    *(_QWORD *)(a2 + 24) = qword_140C0DF30;
    *(_QWORD *)(a2 + 32) = qword_140C0DF38;
    result = &KiBugCheckOriginalData;
    qword_140C0DF08 = (__int64)&KiBugCheckOriginalData;
    dword_140C0DF18 = 40;
    KiHypervisorInitiatedCrashDump = 1;
  }
  return result;
}
