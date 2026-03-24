/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x1407D3F20
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1403A57C0 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v9 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v9 )
  {
    v8 = 4LL;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          byte_140C23352 = 1;
        }
        else
        {
          byte_140C23352 = 0;
          if ( byte_140C23351 )
            PopSetSystemState(4, 7u);
        }
        v6 = 0;
      }
    }
  }
  PopReleasePolicyLock(v8, v7);
  return v6;
}
