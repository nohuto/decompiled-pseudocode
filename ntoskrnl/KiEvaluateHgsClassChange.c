/*
 * XREFs of KiEvaluateHgsClassChange @ 0x140574B80
 * Callers:
 *     KiUpdateThreadHgsFeedback @ 0x140576260 (KiUpdateThreadHgsFeedback.c)
 * Callees:
 *     <none>
 */

char __fastcall KiEvaluateHgsClassChange(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int16 *a4)
{
  __int64 v4; // r10
  unsigned __int16 v6; // dx
  bool v7; // cc
  unsigned int v8; // eax
  __int16 v9; // ax
  unsigned int v10; // eax

  v4 = a2;
  *a4 = 0;
  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 1092) = 0LL;
    return 0;
  }
  v6 = *((_WORD *)&KiHgsPlusConfiguration + a3 + 38);
  v7 = v6 <= *((_WORD *)&KiHgsPlusConfiguration + v4 + 38);
  if ( v6 >= *((_WORD *)&KiHgsPlusConfiguration + v4 + 38) )
  {
    *(_DWORD *)(a1 + 1092) = 0;
    if ( v7 )
    {
      v9 = 2;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 1096) + 1;
      *(_DWORD *)(a1 + 1096) = v10;
      if ( v10 < dword_140D1D390 )
        return 0;
      v9 = 4;
    }
    *(_DWORD *)(a1 + 1096) = 0;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 1092) + 1;
    *(_QWORD *)(a1 + 1092) = v8;
    if ( v8 < dword_140D1D38C )
      return 0;
    *(_DWORD *)(a1 + 1092) = 0;
    v9 = 8;
  }
  *a4 = v9;
  return 1;
}
