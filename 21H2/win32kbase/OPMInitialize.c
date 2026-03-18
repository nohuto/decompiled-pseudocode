/*
 * XREFs of OPMInitialize @ 0x1C005BC28
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C005BC90 (--0COPM@@QEAA@PEAJ@Z.c)
 */

__int64 OPMInitialize()
{
  unsigned int v0; // ebx
  COPM *Pool2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  Pool2 = (COPM *)ExAllocatePool2(258LL, 64LL);
  if ( !Pool2 )
  {
    qword_1C0296A08 = 0LL;
    return 3221225495LL;
  }
  qword_1C0296A08 = COPM::COPM(Pool2, &v3);
  if ( !qword_1C0296A08 )
    return 3221225495LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v0;
}
