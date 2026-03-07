__int64 HalpApicClearLocalUnitError()
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(640LL, 0LL);
}
