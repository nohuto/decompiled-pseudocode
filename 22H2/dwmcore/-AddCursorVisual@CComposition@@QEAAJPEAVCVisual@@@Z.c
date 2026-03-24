/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800E068C
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800E0628 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E0744 (-Create@CCursorVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800E1810 (-FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E4DDC (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v11; // eax
  __int64 v12; // rcx
  CCursorVisualReference *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( !CComposition::FindCursorVisual(this, a2) )
  {
    v6 = CCursorVisualReference::Create(a2, &v13);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xADBu, 0LL);
    }
    else
    {
      v8 = *((_DWORD *)this + 210);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v9 <= *((_DWORD *)this + 209) )
        {
          v2 = 0;
          *(_QWORD *)(*((_QWORD *)this + 102) + 8LL * v8) = v13;
          *((_DWORD *)this + 210) = v9;
          return v2;
        }
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 816, 8, 1, &v13);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
      }
      if ( (v2 & 0x80000000) == 0 )
        return v2;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v2, 0xADDu, 0LL);
    }
  }
  if ( v13 )
    CCursorVisualReference::`scalar deleting destructor'(v13, v5);
  return v2;
}
