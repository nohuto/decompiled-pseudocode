/*
 * XREFs of vConvertLogFontW @ 0x1C00C1A5C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vConvertLogFontW())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294BA0;
  if ( qword_1C0294BA0 )
    return (__int64 (*)(void))qword_1C0294BA0();
  return result;
}
