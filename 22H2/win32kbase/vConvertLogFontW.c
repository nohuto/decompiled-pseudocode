/*
 * XREFs of vConvertLogFontW @ 0x1C00ACB84
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B9020 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vConvertLogFontW())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255798;
  if ( qword_1C0255798 )
    return (__int64 (*)(void))qword_1C0255798();
  return result;
}
