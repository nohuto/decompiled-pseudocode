/*
 * XREFs of RealInternalSetProp @ 0x1C0024810
 * Callers:
 *     <none>
 * Callees:
 *     _FindProp @ 0x1C0024918 (_FindProp.c)
 *     CreateProp @ 0x1C0024964 (CreateProp.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall RealInternalSetProp(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // bx
  __int64 Prop; // rax
  __int64 v8; // r10

  v6 = a2;
  if ( a2 )
  {
    Prop = FindProp(*a1, a2, a4 & 1);
    if ( Prop )
    {
LABEL_5:
      *(_QWORD *)Prop = a3;
      return 1LL;
    }
    Prop = CreateProp(v8);
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = v6;
      *(_WORD *)(Prop + 10) = a4;
      goto LABEL_5;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
