void __fastcall FxVerifierQueryTrackPower(void *Key, FxTrackPowerOption *TrackPower)
{
  unsigned int value; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING valueName; // [rsp+28h] [rbp-38h] BYREF
  wchar_t valueName_buffer[12]; // [rsp+38h] [rbp-28h] BYREF

  value = 0;
  valueName.Buffer = valueName_buffer;
  wcscpy(valueName_buffer, L"TrackPower");
  *(_QWORD *)&valueName.Length = 1441812LL;
  if ( FxRegKey::_QueryULong(Key, &valueName, &value) < 0 || value >= 3 )
    *TrackPower = FxTrackPowerNone;
  else
    *TrackPower = value;
}
