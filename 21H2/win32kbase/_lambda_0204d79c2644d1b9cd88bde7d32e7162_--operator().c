/*
 * XREFs of _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1C01A1E98
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(__int64 a1, _DWORD *a2, int *a3, __int64 a4)
{
  int v4; // eax
  int v5; // ecx

  switch ( RIMDeadzone::s_counterClockwiseDeviceRotation )
  {
    case 0x5Au:
      v5 = *(_DWORD *)(a4 + 8) - *a3;
      *a2 = a3[1];
      goto LABEL_8;
    case 0xB4u:
      *a2 = *(_DWORD *)(a4 + 8) - *a3;
      v5 = *(_DWORD *)(a4 + 12) - a3[1];
LABEL_8:
      a2[1] = v5;
      return a2;
    case 0x10Eu:
      v4 = *a3;
      *a2 = *(_DWORD *)(a4 + 12) - a3[1];
      a2[1] = v4;
      break;
    default:
      *(_QWORD *)a2 = *(_QWORD *)a3;
      break;
  }
  return a2;
}
