/*
 * XREFs of CcPerfLogExtraWBThreadAction @ 0x140538378
 * Callers:
 *     CcLogExtraWBThreadAction @ 0x1405344A8 (CcLogExtraWBThreadAction.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogExtraWBThreadAction(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+3Ch] [rbp-3Ch]
  _DWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  if ( a1 == 2 )
  {
    v8[0] = 1;
  }
  else
  {
    if ( a1 != 3 )
      return;
    v8[0] = 2;
  }
  v7 = 0;
  v11 = a5;
  v8[1] = a2;
  v9 = a3;
  v10 = a4;
  v5 = v8;
  v6 = 32;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x80020000, 0x160Eu, 0x401902u);
}
