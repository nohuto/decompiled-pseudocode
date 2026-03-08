/*
 * XREFs of ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1C0148E68
 * Callers:
 *     EditionEdgyProcessInput @ 0x1C0149050 (EditionEdgyProcessInput.c)
 * Callees:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01E9804 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 */

__int64 __fastcall Edgy::ProcessInput(Edgy *this, _QWORD *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
    *a2 = 0LL;
  v5 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( !v5 )
    return 1LL;
  v7 = *(_DWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 232) = this;
  v9 = *(_OWORD *)Edgy::_OnInput(v10, v5, this);
  if ( v7 == 1 )
  {
    if ( (_DWORD)v9 == 1 )
      return v3;
    if ( a2 )
      *a2 = *((_QWORD *)&v9 + 1);
    v8 = 0LL;
  }
  else
  {
    if ( (_DWORD)v9 != 1 )
      return 1;
    v8 = gptiCurrent;
  }
  *(_QWORD *)(v5 + 288) = v8;
  if ( (_DWORD)v9 != 1 )
    return 1;
  return v3;
}
