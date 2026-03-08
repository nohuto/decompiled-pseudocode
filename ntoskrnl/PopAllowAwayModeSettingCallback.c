/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x140860360
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x14058BA7C (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v10 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v10 )
  {
    v8 = 4LL;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          byte_140C3D492 = 1;
        }
        else
        {
          byte_140C3D492 = 0;
          if ( byte_140C3D491 )
            PopSetSystemState(4, 7u);
        }
        v6 = 0;
      }
    }
  }
  PopReleasePolicyLock(v8, v7, v9);
  return v6;
}
