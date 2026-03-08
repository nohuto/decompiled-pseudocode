/*
 * XREFs of OPMInitialize @ 0x1C00C9154
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C00C91E4 (--0COPM@@QEAA@PEAJ@Z.c)
 */

__int64 __fastcall OPMInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // rsi
  COPM *Pool2; // rax
  COPM *v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  v7 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  Pool2 = (COPM *)ExAllocatePool2(258LL, 64LL, 1297108807LL);
  if ( Pool2 )
  {
    v5 = COPM::COPM(Pool2, &v7);
    v2 = v7;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(v3 + 3824) = v5;
  if ( !v5 )
    return 3221225495LL;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v1;
}
