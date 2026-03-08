/*
 * XREFs of _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1C01C8BF8
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  int v6; // ecx

  switch ( a5 )
  {
    case 90:
      v6 = *(_DWORD *)(a4 + 8) - *a3;
      *a2 = a3[1];
      goto LABEL_8;
    case 180:
      *a2 = *(_DWORD *)(a4 + 8) - *a3;
      v6 = *(_DWORD *)(a4 + 12) - a3[1];
LABEL_8:
      a2[1] = v6;
      return a2;
    case 270:
      v5 = *a3;
      *a2 = *(_DWORD *)(a4 + 12) - a3[1];
      a2[1] = v5;
      break;
    default:
      *(_QWORD *)a2 = *(_QWORD *)a3;
      break;
  }
  return a2;
}
