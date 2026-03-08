/*
 * XREFs of ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01E8ADC
 * Callers:
 *     NtUserRegisterEdgy @ 0x1C01DA110 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C01E8C60 (-_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C01E8CC0 (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C01E9678 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall Edgy::_AddOrUpdateListener(Edgy *a1, struct tagDESKTOP *a2, unsigned int a3, __int64 a4)
{
  struct tagEDGY_DATA *v6; // rcx
  __int64 Listener; // rax

  v6 = (struct tagEDGY_DATA *)*((_QWORD *)a1 + 30);
  if ( !v6 )
  {
    v6 = Edgy::_InitializeData(a1, a2);
    if ( !v6 )
      return 0LL;
  }
  Listener = Edgy::_FindListener(v6, a2, a3);
  if ( !Listener )
  {
    Listener = Edgy::_AllocListener();
    if ( !Listener )
      return 0LL;
  }
  *(_QWORD *)(Listener + 8) = a4;
  return 1LL;
}
