/*
 * XREFs of SetManifestWinVer @ 0x1C00CC090
 * Callers:
 *     <none>
 * Callees:
 *     SbGetProcessSwitchContext @ 0x1C00CC1C8 (SbGetProcessSwitchContext.c)
 */

__int64 SetManifestWinVer()
{
  unsigned __int16 v0; // di
  _QWORD *v1; // rcx
  char *v2; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v4; // rcx
  __int64 ProcessSwitchContext; // rax
  _QWORD *v6; // r9
  int v7; // edx
  unsigned int i; // ecx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 result; // rax

  v0 = -26368;
  v1 = *(_QWORD **)(gptiCurrent + 424LL);
  if ( v1 )
  {
    v2 = 0LL;
    ProcessWow64Process = PsGetProcessWow64Process(*v1);
    v4 = ProcessWow64Process
       ? *(unsigned int *)(ProcessWow64Process + 488)
       : *(_QWORD *)(PsGetProcessPeb(**(_QWORD **)(gptiCurrent + 424LL)) + 728);
    ProcessSwitchContext = SbGetProcessSwitchContext(v4);
    if ( ProcessSwitchContext )
    {
      v6 = (_QWORD *)(ProcessSwitchContext + 48);
      v7 = 0;
      if ( ProcessSwitchContext != -48 )
      {
        for ( i = 0; i < 5; ++i )
        {
          v9 = 32LL * i;
          v10 = *v6 - *(_QWORD *)((char *)&SbSupportedOsList + v9 + 4);
          if ( *v6 == *(_QWORD *)((char *)&SbSupportedOsList + v9 + 4) )
            v10 = *(_QWORD *)(ProcessSwitchContext + 56) - *(_QWORD *)((char *)&SbSupportedOsList + v9 + 12);
          if ( !v10 )
          {
            v7 = 1;
            v2 = (char *)&SbSupportedOsList + v9;
            break;
          }
        }
      }
      if ( v7 )
        v0 = *((_WORD *)v2 + 11) | (*((_WORD *)v2 + 10) << 8);
    }
  }
  result = v0;
  *(_DWORD *)(gptiCurrent + 636LL) = v0;
  return result;
}
