const wchar_t *__fastcall RimTelemetry::PointerDeviceTypeToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return L"Unknown";
    case 1:
      return L"SingleTouch";
    case 2:
      return L"SerialTouch";
    case 3:
      return L"ParallelACTouch";
    case 4:
      return L"ParallelNullTouch";
    case 5:
      return L"IntegratedPen";
    case 6:
      return L"ExternalPen";
    case 7:
      return L"Touchpad";
  }
  return L"Unexpected Value";
}
