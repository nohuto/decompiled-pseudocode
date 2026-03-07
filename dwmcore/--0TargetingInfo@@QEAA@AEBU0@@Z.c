TargetingInfo *__fastcall TargetingInfo::TargetingInfo(TargetingInfo *this, const struct TargetingInfo *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 8);
  *v3 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
