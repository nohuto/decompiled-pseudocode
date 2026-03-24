/*
 * XREFs of ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801790EC
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1801C3F58 (--1CHwndBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800353A0 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180035D14 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800C18FC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1801C47C0 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct CWindowAssociationMapEntry *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 10), &v11);
  if ( Entry >= 0 )
  {
    v5 = v11;
    CPtrArrayBase::Remove((struct CWindowAssociationMapEntry *)((char *)v11 + 16), (__int64)a2);
    v6 = CHwndBitmap::SetVisual(a2, 0LL);
    Entry = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xDDu, 0LL);
    }
    else if ( !*((_QWORD *)v5 + 1) && !CPtrArrayBase::GetCount((struct CWindowAssociationMapEntry *)((char *)v5 + 16)) )
    {
      v8 = CWindowManager::RemoveEntry(this, *((_QWORD *)a2 + 10));
      Entry = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE5u, 0LL);
    }
  }
  return (unsigned int)Entry;
}
