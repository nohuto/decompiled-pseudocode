/*
 * XREFs of ?TabletModeChanged@TouchKeyboardExperienceManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803C3430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::TabletModeChanged(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(a1 + 376) = a2;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 316) = a2 == 1;
    *(_BYTE *)(*(_QWORD *)(v2 + 104) + 507LL) = a2 == 1;
  }
  return 0LL;
}
