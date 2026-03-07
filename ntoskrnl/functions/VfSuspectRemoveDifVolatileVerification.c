__int64 __fastcall VfSuspectRemoveDifVolatileVerification(__int64 a1)
{
  int v2; // edi

  VfTargetRecoverIoCallbacks(*(_QWORD *)(a1 + 48));
  v2 = VfThunkApplyPristineToAllSession(a1);
  if ( v2 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140C13858;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v2;
}
