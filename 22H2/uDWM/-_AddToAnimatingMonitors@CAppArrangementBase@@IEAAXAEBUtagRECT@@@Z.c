/*
 * XREFs of ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800B0988
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2660 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180089764 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CAppArrangementBase::_AddToAnimatingMonitors(CAppArrangementBase *this, const struct tagRECT *a2)
{
  HMONITOR v3; // rbx
  __int64 v4; // r11
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  HMONITOR v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = MonitorFromRect(a2, 0);
  v3 = v8;
  if ( v8 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 152, &v8) )
  {
    v5 = *(_DWORD *)(v4 + 24);
    v6 = v5 + 1;
    if ( v5 + 1 >= v5 )
    {
      if ( v6 > *(_DWORD *)(v4 + 20) )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet(v4, 8u, 1, &v8);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 24)) = v3;
        *(_DWORD *)(v4 + 24) = v6;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
}
