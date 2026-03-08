/*
 * XREFs of Controller_NotifyPortStateToPep @ 0x1C000FB7C
 * Callers:
 *     RootHub_D0Exit @ 0x1C0010338 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

_UNKNOWN **__fastcall Controller_NotifyPortStateToPep(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  v7 = a2;
  v4 = *(_QWORD *)(a1 + 584);
  if ( v4 )
  {
    result = (_UNKNOWN **)PoFxPowerControl(v4, &GUID_HC_SUB_DX_STATE, &v7, 4LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1 + 72),
                            v5,
                            4,
                            34,
                            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                            (char)result);
    }
  }
  return result;
}
