BOOLEAN CarpBugcheckInit()
{
  dword_140C34B6C = CarTipTag;
  dword_140C34B70 = CarTriageContext;
  dword_140C34B68 = (unsigned __int16)NtBuildNumber;
  CarViolationSnapshot = 1;
  dword_140C34B44 = 128;
  qword_140C34B74 = CarRuleClasses;
  CarBugCheckCallback.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &CarBugCheckCallback,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)CarpSecondaryDataCallback,
           KbCallbackSecondaryDumpData,
           &CarComponentName);
}
