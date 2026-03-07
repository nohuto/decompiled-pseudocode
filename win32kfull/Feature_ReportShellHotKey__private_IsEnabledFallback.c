__int64 __fastcall Feature_ReportShellHotKey__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ReportShellHotKey__private_descriptor);
}
