/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C012AF28
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?Feature_2404731194__private_IsEnabled@@YAHXZ @ 0x1C015F6C8 (-Feature_2404731194__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  int IsEnabled; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[86]; // [rsp+90h] [rbp-70h] BYREF

  memset(v14, 0, 0x48uLL);
  memset(v15, 0, sizeof(v15));
  v14[0] = 0x800000480020LL;
  LODWORD(v14[5]) = a3;
  v14[6] = a2;
  v14[8] = a4;
  v13 = 688LL;
  LODWORD(v14[7]) = a4 != 0LL ? a5 : 0;
  IsEnabled = Feature_2404731194__private_IsEnabled();
  v10 = 33685504LL;
  if ( !IsEnabled )
    v10 = 0x20000LL;
  v11 = LpcSendWaitReceivePort(**(_QWORD **)this, v10, v14, v15, &v13, 0LL, v13);
  if ( v11 == -1073741769 )
  {
    *(_DWORD *)(*(_QWORD *)this + 52LL) = 0;
    return v11;
  }
  if ( (v11 & 0x80000000) != 0 )
    return v11;
  if ( (WORD2(v15[0]) & 0x7FFF) != 2 )
    return 3221225473LL;
  if ( LOWORD(v15[0]) != 32 )
    return 3221225473LL;
  if ( a4 != (void *)v15[8] )
    return 3221225473LL;
  result = v11;
  if ( a5 != LODWORD(v15[7]) )
    return 3221225473LL;
  return result;
}
