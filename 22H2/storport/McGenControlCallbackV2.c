/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0034040
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0020480 (memset.c)
 *     StorEtwEnableCallback @ 0x1C004F140 (StorEtwEnableCallback.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v7; // edi
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  bool v11; // r11
  int v12; // edx
  unsigned int Data1; // eax
  unsigned int v14; // edx
  int v15; // eax

  v7 = MatchAnyKeyword;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_DWORD *)&Level = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v9 = *((_BYTE *)CallbackContext + 40);
            v11 = 0;
            if ( *(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9 )
            {
              v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
              if ( !v10
                || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
              {
                v11 = 1;
              }
            }
            v12 = 1 << (Level & 0x1F);
            SourceId = (LPCGUID)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)Level >> 5));
            Data1 = SourceId->Data1;
            if ( v11 )
              v14 = Data1 | v12;
            else
              v14 = Data1 & ~v12;
            SourceId->Data1 = v14;
            *(_DWORD *)&Level = Level + 1;
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v15 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v15 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v15 - 1) / 32 + 1));
    }
    StorEtwEnableCallback((_DWORD)SourceId, ControlCode, Level, v7);
  }
}
