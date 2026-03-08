/*
 * XREFs of PopPluginRequestPowerControl @ 0x14058A654
 * Callers:
 *     PoFxPowerControl @ 0x1402D91A0 (PoFxPowerControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopPluginRequestPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r10
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v7 = *(_QWORD *)(a1 + 72);
  v8 = -1073741822;
  v9 = *(_QWORD *)(a1 + 64);
  v13 = 0LL;
  v12 = 0LL;
  v11[0] = v7;
  v11[4] = a5;
  v11[1] = a2;
  v11[5] = a6;
  v11[2] = a3;
  v11[3] = a4;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(v9 + 96))(14LL, v11) == 1 )
  {
    if ( a7 )
      *a7 = v12;
    return (unsigned int)v13;
  }
  return v8;
}
