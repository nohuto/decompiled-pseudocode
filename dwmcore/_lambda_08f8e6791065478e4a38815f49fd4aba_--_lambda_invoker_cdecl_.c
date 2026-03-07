__int64 __fastcall lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rax
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 312);
  if ( *(_BYTE *)(v1 + 416) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x55u, 0LL);
  }
  else
  {
    CMmcssTask::Revert(v2);
  }
  return 0LL;
}
