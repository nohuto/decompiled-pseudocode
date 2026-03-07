void __fastcall OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( !*((_QWORD *)this + 10) && g_IsInternalReleaseOrDbg )
  {
    v2 = operator new[](0x70uLL, 0x674D444Fu, 256LL);
    if ( v2 )
    {
      v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v2, 0x80000u, 1, 256LL, 0x12Cu);
      *((_QWORD *)this + 10) = v3;
      if ( v3 )
        return;
    }
    else
    {
      *((_QWORD *)this + 10) = 0LL;
    }
    WdLogSingleEntry1(6LL, 948LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create high frequency diagnostic buffer.",
      948LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
