/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C02C2228
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     Feature_2203404602__private_IsEnabledDeviceUsage @ 0x1C0130468 (Feature_2203404602__private_IsEnabledDeviceUsage.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  int IsEnabledDeviceUsage; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[5]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  void *v16; // [rsp+70h] [rbp-90h]
  unsigned int v17; // [rsp+78h] [rbp-88h]
  void *v18; // [rsp+80h] [rbp-80h]
  _WORD v19[28]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+C8h] [rbp-38h]
  void *v21; // [rsp+D0h] [rbp-30h]

  memset_0(v14, 0, 0x48uLL);
  memset_0(v19, 0, 0x2B0uLL);
  v14[0] = 0x800000480020LL;
  v15 = a3;
  v16 = a2;
  v18 = a4;
  v13 = 688LL;
  v17 = a4 != 0LL ? a5 : 0;
  IsEnabledDeviceUsage = Feature_2203404602__private_IsEnabledDeviceUsage();
  v10 = 33685504LL;
  if ( !IsEnabledDeviceUsage )
    v10 = 0x20000LL;
  v11 = LpcSendWaitReceivePort(**(_QWORD **)this, v10, v14, v19, &v13, 0LL);
  if ( v11 == -1073741769 )
  {
    *(_DWORD *)(*(_QWORD *)this + 52LL) = 0;
    return v11;
  }
  if ( (v11 & 0x80000000) != 0 )
    return v11;
  if ( (v19[2] & 0x7FFF) != 2 )
    return 3221225473LL;
  if ( v19[0] != 32 )
    return 3221225473LL;
  if ( a4 != v21 )
    return 3221225473LL;
  result = v11;
  if ( a5 != v20 )
    return 3221225473LL;
  return result;
}
