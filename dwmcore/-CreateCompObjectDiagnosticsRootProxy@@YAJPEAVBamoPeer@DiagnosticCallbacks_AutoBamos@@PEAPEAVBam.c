__int64 __fastcall CreateCompObjectDiagnosticsRootProxy(
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a1,
        struct BamoCompObjectDiagnosticsRootProxy **a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  __int64 v5; // rcx

  v3 = 0;
  v4 = operator new(0x30uLL);
  if ( v4 )
  {
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    v4[4] = 0LL;
    v4[2] = &BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::`vftable';
    v4[5] = 0LL;
    *v4 = &CompObjectDiagnosticsRootProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    v4[1] = &CompObjectDiagnosticsRootProxy::`vftable'{for `ICompObjectDiagnosticsRootProxy'};
    *a2 = (struct BamoCompObjectDiagnosticsRootProxy *)v4;
  }
  else
  {
    v3 = -2147024882;
    *a2 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x1Au, 0LL);
  }
  return v3;
}
