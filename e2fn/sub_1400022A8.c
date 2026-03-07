__int64 (__fastcall **__fastcall sub_1400022A8(_QWORD *a1))(PVOID P)
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(PVOID); // rax

  v1 = a1[2];
  result = &off_1400D44C0;
  *a1 = &off_1400D44C0;
  if ( v1 )
  {
    result = (__int64 (__fastcall **)(PVOID))imp_WppRecorderLogDelete(DeviceObject);
    a1[2] = 0LL;
  }
  return result;
}
