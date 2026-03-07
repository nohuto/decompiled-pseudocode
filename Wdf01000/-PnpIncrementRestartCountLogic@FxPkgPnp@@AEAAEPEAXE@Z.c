bool __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  unsigned __int8 m_AchievedStart; // r15
  bool v6; // si
  bool v7; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v9; // edi
  _LARGE_INTEGER v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rcx
  unsigned int LowPart; // eax
  NTSTATUS v13; // eax
  unsigned int count; // [rsp+40h] [rbp-69h] BYREF
  unsigned int length; // [rsp+44h] [rbp-65h] BYREF
  unsigned int type; // [rsp+48h] [rbp-61h] BYREF
  _LARGE_INTEGER value; // [rsp+50h] [rbp-59h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+60h] [rbp-49h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+70h] [rbp-39h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+80h] [rbp-29h] BYREF
  wchar_t valueNameCount_buffer[8]; // [rsp+90h] [rbp-19h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+A0h] [rbp-9h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+B8h] [rbp+Fh] BYREF

  count = 0;
  value.QuadPart = 0LL;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_QWORD *)&valueNameStartTime.Length = 1310738LL;
  *(_QWORD *)&valueNameCount.Length = 786442LL;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_QWORD *)&valueNameStartAchieved.Length = 1835034LL;
  m_AchievedStart = this->m_AchievedStart;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v6 = m_AchievedStart != 0;
  if ( CreatedNewKey )
    goto LABEL_2;
  m_Globals = this->m_Globals;
  length = 0;
  type = 0;
  v9 = FxRegKey::_QueryValue(m_Globals, RestartKey, &valueNameStartTime, 8u, &value, &length, &type);
  if ( v9 >= 0
    && length == 8
    && type == 3
    && (v9 = FxRegKey::_QueryULong(RestartKey, &valueNameCount, &count), v9 == -1073741772) )
  {
    count = 1;
    v9 = 0;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_27;
  }
  v10 = value;
  if ( currentTickCount.QuadPart < value.QuadPart )
  {
LABEL_2:
    v7 = 1;
  }
  else
  {
    if ( KeQueryTimeIncrement() * (currentTickCount.QuadPart - v10.QuadPart) <= 600000000 )
    {
      if ( ++count > 5 )
        v9 = -1073741823;
      v7 = count <= 5;
      goto LABEL_24;
    }
    if ( !m_AchievedStart )
    {
      v11 = this->m_Globals;
      type = 0;
      length = 0;
      value.LowPart = 0;
      if ( (int)FxRegKey::_QueryValue(v11, RestartKey, &valueNameStartAchieved, 4u, &value, &type, &length) >= 0
        && type == 4
        && length == 4 )
      {
        LowPart = value.LowPart;
      }
      else
      {
        LowPart = 0;
      }
      if ( !LowPart )
      {
        m_AchievedStart = 0;
        v9 = -1073741823;
        goto LABEL_27;
      }
    }
    v7 = 1;
    m_AchievedStart = 0;
    v6 = 1;
  }
  count = 1;
  v9 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
LABEL_24:
  if ( v9 >= 0 && v7 )
    v9 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
LABEL_27:
  if ( v6 )
  {
    value.LowPart = m_AchievedStart;
    v13 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &value, 4u);
    if ( v9 >= 0 )
      v9 = v13;
  }
  return v9 >= 0;
}
