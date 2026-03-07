bool __fastcall FxPkgPnp::PnpCheckAndIncrementRestartCount(FxPkgPnp *this)
{
  FxDevice *m_Device; // rcx
  bool v3; // bl
  unsigned int disposition; // [rsp+40h] [rbp-19h] BYREF
  FxAutoRegKey restart; // [rsp+48h] [rbp-11h] BYREF
  FxAutoRegKey settings; // [rsp+50h] [rbp-9h] BYREF
  _UNICODE_STRING keyNameRestart; // [rsp+58h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+Fh] BYREF
  wchar_t keyNameRestart_buffer[8]; // [rsp+98h] [rbp+3Fh] BYREF

  settings.m_Key = 0LL;
  restart.m_Key = 0LL;
  disposition = 0;
  m_Device = this->m_Device;
  wcscpy(keyNameRestart_buffer, L"Restart");
  *(_QWORD *)&keyNameRestart.Length = 1048590LL;
  keyNameRestart.Buffer = keyNameRestart_buffer;
  v3 = (int)FxDevice::OpenSettingsKey(m_Device, &settings.m_Key, 0x1F0000u) >= 0
    && (*(&ObjectAttributes.Length + 1) = 0,
        memset(&ObjectAttributes.Attributes + 1, 0, 20),
        ObjectAttributes.RootDirectory = settings.m_Key,
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = &keyNameRestart,
        ObjectAttributes.Attributes = 576,
        ZwCreateKey(&restart.m_Key, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &disposition) >= 0)
    && FxPkgPnp::PnpIncrementRestartCountLogic(this, restart.m_Key, disposition == 1);
  if ( restart.m_Key )
    ZwClose(restart.m_Key);
  if ( settings.m_Key )
    ZwClose(settings.m_Key);
  return v3;
}
