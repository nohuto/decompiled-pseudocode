__int64 __fastcall DifGetPluginPerDriverData(int a1, __int64 a2)
{
  _DWORD *v2; // rcx
  __int64 VerifierData; // rax
  _QWORD *v4; // rax

  v2 = (_DWORD *)DifPluginSettings[a1];
  if ( v2
    && *v2
    && (VerifierData = VfTargetDriversGetVerifierData(a2)) != 0
    && (v4 = (_QWORD *)(VerifierData + 96), (_QWORD *)*v4 != v4) )
  {
    return *(_QWORD *)(*v4 - 8LL);
  }
  else
  {
    return 0LL;
  }
}
