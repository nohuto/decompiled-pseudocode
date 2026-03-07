__int64 __fastcall Controller_EvtDeviceFileCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a3,
         off_1C00633B0);
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 40) = v5;
  *(_BYTE *)(v6 + 48) = 0;
  *(_BYTE *)(v6 + 60) = 1;
  *(_QWORD *)(v6 + 16) = a3;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
