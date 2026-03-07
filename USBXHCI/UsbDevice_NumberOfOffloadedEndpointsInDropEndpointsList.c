__int64 __fastcall UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int v4; // ebx
  int v5; // ecx

  result = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v4 = result;
    v5 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * i),
                       off_1C00631A8)
                   + 1360);
    result = v4 + 1;
    if ( v5 != 2 )
      result = v4;
  }
  return result;
}
