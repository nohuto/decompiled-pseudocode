/*
 * XREFs of PoFxPowerOnCrashdumpDevice @ 0x140585BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoFxPowerOnCrashdumpDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 (__fastcall *v5)(_QWORD *); // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v5 = *(unsigned __int8 (__fastcall **)(_QWORD *))(a1 + 592);
    if ( v5 )
    {
      v7[0] = *(_QWORD *)(a1 + 72);
      v7[1] = a2;
      if ( !v5(v7) )
        return (unsigned int)-1073741823;
      return v2;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
