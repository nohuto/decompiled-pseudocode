/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAJPEFBQEAUHMONITOR__@@I@Z @ 0x180041BA8
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180037788 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<HMONITOR__ *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
    else
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8u, 1, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
  }
  return v4;
}
