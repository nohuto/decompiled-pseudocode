/*
 * XREFs of McGenControlCallbackV2 @ 0x18001A340
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x180270044 (DispatchDwmDiagnosticsControlMessage.c)
 */

void __fastcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        REGHANDLE *CallbackContext)
{
  unsigned int v8; // r8d
  unsigned __int8 v9; // dl
  __int64 v10; // rcx
  bool v11; // r9
  int v12; // edx
  int *v13; // rcx
  int v14; // edx
  ULONG Size; // edx

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v8 = 0;
        CallbackContext[3] = MatchAllKeyword;
        CallbackContext[2] = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v10 = *(_QWORD *)(CallbackContext[7] + 8LL * v8);
          v11 = (*(_BYTE *)(v8 + CallbackContext[8]) <= v9 || !v9)
             && (!v10 || (v10 & CallbackContext[2]) != 0 && (v10 & CallbackContext[3]) == CallbackContext[3]);
          v12 = 1 << (v8 & 0x1F);
          v13 = (int *)(CallbackContext[6] + 4 * ((unsigned __int64)v8 >> 5));
          if ( v11 )
            v14 = *v13 | v12;
          else
            v14 = *v13 & ~v12;
          *v13 = v14;
        }
      }
    }
    else
    {
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      CallbackContext[2] = 0LL;
      CallbackContext[3] = 0LL;
      if ( *((_WORD *)CallbackContext + 21) )
        memset_0((void *)CallbackContext[6], 0, 4LL * ((*((unsigned __int16 *)CallbackContext + 21) - 1) / 32 + 1));
    }
    if ( IsEnabled == 2 && CallbackContext == &Microsoft_Windows_Dwm_Core_Provider_Context )
    {
      if ( FilterData )
      {
        if ( FilterData->Type == 0x80000000 )
        {
          Size = FilterData->Size;
          if ( Size >= 0x1C && *(_DWORD *)(FilterData->Ptr + 16) <= Size )
            DispatchDwmDiagnosticsControlMessage((struct DwmDiagnosticsControlMessage_0 *)FilterData->Ptr);
        }
      }
    }
  }
}
