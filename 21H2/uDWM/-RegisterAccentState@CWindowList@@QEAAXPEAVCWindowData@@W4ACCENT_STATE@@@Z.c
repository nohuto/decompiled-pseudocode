/*
 * XREFs of ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002C928
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002BA88 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CWindowList::RegisterAccentState(__int64 a1, struct CWindowData *a2, unsigned int a3)
{
  unsigned int v4; // edx
  __int64 v5; // r11
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    v4 = 0;
    if ( *(_DWORD *)(a1 + 560) )
    {
      v5 = *(_QWORD *)(a1 + 536);
      while ( *(struct CWindowData **)(v5 + 16LL * v4) != a2 )
      {
        if ( ++v4 >= *(_DWORD *)(a1 + 560) )
          goto LABEL_6;
      }
      *(_DWORD *)(v5 + 16LL * v4 + 8) = a3;
    }
    else
    {
LABEL_6:
      v6 = *(_DWORD *)(a1 + 560);
      *(_QWORD *)&v9 = a2;
      *((_QWORD *)&v9 + 1) = a3;
      v7 = v6 + 1;
      if ( v6 + 1 < v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else if ( v7 > *(_DWORD *)(a1 + 556) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 536, 0x10u, 1, &v9);
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 536) + 16LL * v6) = v9;
        *(_DWORD *)(a1 + 560) = v7;
      }
    }
  }
  else
  {
    CWindowList::UnregisterAccentState((CWindowList *)a1, a2);
  }
}
