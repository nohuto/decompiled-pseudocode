/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C01ACF90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013228 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     GetNonChildAncestor @ 0x1C0027014 (GetNonChildAncestor.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00F02AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  char v4; // si
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 NonChildAncestor; // rbp
  int IsEnabledDeviceUsage; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v3 = *(struct tagWND **)(a1 + 80);
  if ( a2 )
  {
    v4 = 1;
    if ( !(unsigned __int8)CheckAccess(a2, *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 432LL) )
    {
      EtwTraceUIPIInputError(
        gptiCurrent,
        *((_QWORD *)v3 + 2),
        *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 432LL),
        1);
      return 0LL;
    }
  }
  else
  {
    v4 = 0;
  }
  CompositionInputWindowUIOwner = v3;
  if ( (unsigned int)IsIndependentInputWindow(v3) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
    if ( !CompositionInputWindowUIOwner )
      return 0LL;
  }
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x2000) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor((__int64)CompositionInputWindowUIOwner);
    IsEnabledDeviceUsage = Feature_KIDV2__private_IsEnabledDeviceUsage();
    v10 = *(_QWORD *)(NonChildAncestor + 40);
    if ( IsEnabledDeviceUsage )
    {
      if ( (*(_BYTE *)(v10 + 27) & 8) != 0 )
        return 1LL;
      v11 = *(_QWORD *)(*(_QWORD *)(NonChildAncestor + 136) + 8LL);
      if ( *(_WORD *)v11 == *(_WORD *)(gpsi + 898LL) || (*(_BYTE *)(v11 + 10) & 1) != 0 )
        return 1LL;
      v12 = (unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)CompositionInputWindowUIOwner + 2)) == 0;
    }
    else
    {
      v12 = (*(_BYTE *)(v10 + 27) & 8) == 0;
    }
    if ( v12 )
    {
      v18 = 0LL;
      v17 = 0LL;
      if ( CompositionInputWindowUIOwner != v3 )
        ThreadLockAlways(CompositionInputWindowUIOwner, &v17);
      xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0LL, v9);
      if ( CompositionInputWindowUIOwner != v3 )
        ThreadUnlock1(v14, v13, v15);
      if ( v4 && gpqForeground && !(unsigned __int8)CheckAccess(a2, gpqForeground + 432LL) )
      {
        MSGLUA_GPQFOREGROUND(v16);
        return 0LL;
      }
    }
  }
  return 1LL;
}
