/*
 * XREFs of HalpWdatArmTimer @ 0x14051C830
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x14052805C (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatArmTimer(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  unsigned __int64 v14; // rax

  if ( a2 != 3 )
    return 3221225485LL;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v5 )
    {
      if ( a3 == v5 )
      {
        v6 = a1 + 48;
        return WdInstrExecuteAction(v6, *(unsigned int *)(a1 + 44), 1LL, 0LL);
      }
    }
  }
  *(_QWORD *)(a1 + 32) = a3;
  v7 = a3 / 0x37E + 1;
  v8 = *(unsigned int *)(a1 + 24);
  if ( a3 == 894 * (a3 / 0x37E) )
    v7 = a3 / 0x37E;
  v9 = v7 / v8;
  v10 = v7 % v8;
  v11 = v7 / v8 + 1;
  v12 = v10 == 0;
  v13 = *(unsigned int *)(a1 + 44);
  if ( v12 )
    v11 = v9;
  if ( v11 > *(unsigned int *)(a1 + 16) )
  {
    WdInstrExecuteAction(a1 + 48, v13, 11LL, 0LL);
    return 3221225485LL;
  }
  v14 = *(unsigned int *)(a1 + 20);
  if ( v11 >= v14 )
    LODWORD(v14) = v11;
  result = WdInstrExecuteAction(a1 + 48, v13, 6LL, (unsigned int)v14);
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      result = WdInstrExecuteAction(a1 + 48, *(unsigned int *)(a1 + 44), 9LL, 0LL);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 40) = 1;
    }
    v6 = a1 + 48;
    return WdInstrExecuteAction(v6, *(unsigned int *)(a1 + 44), 1LL, 0LL);
  }
  return result;
}
