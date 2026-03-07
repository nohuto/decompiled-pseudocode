__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D5708;
  if ( qword_1C02D5708 )
    return (__int64 (*)(void))qword_1C02D5708();
  return result;
}
