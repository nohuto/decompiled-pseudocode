__int64 __fastcall CInputSystemMetrics::GetHardwareType(
        CInputSystemMetrics *this,
        const struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx

  switch ( *((_DWORD *)a2 + 6) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      v4 = 129;
      break;
    case 5:
      v4 = 132;
      break;
    case 6:
      v4 = 136;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 138);
      return 0LL;
  }
  result = v4 | 0x40;
  if ( *((_DWORD *)a2 + 192) <= 1u )
    return v4;
  return result;
}
