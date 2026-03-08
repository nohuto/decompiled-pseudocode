/*
 * XREFs of ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01CA4C8
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01C96E4 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMDeadzone::_IsAngleWithinRange(unsigned int a1, unsigned int a2, __int64 a3)
{
  return (a2 + a1 + 360 * (1 - a1 / 0x168 - a2 / 0x168) - (unsigned int)a3 % 0x168) % 0x168 < (HIDWORD(a3)
                                                                                             + 360
                                                                                             * (1 - HIDWORD(a3) / 0x168)
                                                                                             - (unsigned int)a3 % 0x168)
                                                                                            % 0x168;
}
