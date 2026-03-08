/*
 * XREFs of ?Print@DwmDbg@@YAXQEBDZZ @ 0x18026F00C
 * Callers:
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1802151A8 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x1800F350C (--$make_unique@$$BY0A@D$0A@@std@@YA-AV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@0@_K.c)
 *     vsprintf_s @ 0x18010F6E8 (vsprintf_s.c)
 *     _vscprintf @ 0x18010F74C (_vscprintf.c)
 */

void DwmDbg::Print(DwmDbg *this, const char *a2, ...)
{
  SIZE_T v2; // rdi
  char *v3; // rbx
  char *Buffer; // [rsp+20h] [rbp-28h] BYREF
  const char *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v2 = vscprintf((const char *const)this, (va_list)&v6) + 1;
  std::make_unique<char [0],0>(&Buffer, v2);
  v3 = Buffer;
  if ( Buffer )
  {
    vsprintf_s(Buffer, v2, (const char *const)this, (va_list)&v6);
    puts(v3);
  }
  DbgPrintEx(0x65u, 0, "%s", v3);
  if ( v3 )
    operator delete(v3);
}
