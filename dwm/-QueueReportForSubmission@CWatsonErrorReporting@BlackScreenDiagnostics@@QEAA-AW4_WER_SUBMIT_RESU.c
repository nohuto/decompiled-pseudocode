__int64 __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::QueueReportForSubmission(HREPORT *this)
{
  _WER_SUBMIT_RESULT pSubmitResult; // [rsp+38h] [rbp+10h] BYREF

  pSubmitResult = WerCustomAction|WerReportFailed;
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(this) )
    WerReportSubmit(*this, WerConsentNotAsked, 4u, &pSubmitResult);
  return (unsigned int)pSubmitResult;
}
