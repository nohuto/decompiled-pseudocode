/*
 * XREFs of vConvertLogFontW @ 0x1C00AC684
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B8D20 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vConvertLogFontW())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256798;
  if ( qword_1C0256798 )
    return (__int64 (*)(void))qword_1C0256798();
  return result;
}
