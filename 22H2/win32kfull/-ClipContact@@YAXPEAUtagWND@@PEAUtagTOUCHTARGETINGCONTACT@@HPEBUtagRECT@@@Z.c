/*
 * XREFs of ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C02148A0
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02166DC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C0217BA8 (xxxTouchTargetWindow.c)
 * Callees:
 *     TouchTargetingClipContact @ 0x1C025F114 (TouchTargetingClipContact.c)
 */

void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  int RegionData; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  _DWORD *v10; // rbx
  int v11; // eax
  _OWORD *v12; // rdi
  __int64 v13; // rsi
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v4 + 168);
  if ( v6 )
  {
    RegionData = GreGetRegionData(v6, 0LL, 0LL);
    v8 = RegionData;
    if ( RegionData > 0 )
    {
      v9 = Win32AllocPool(RegionData, 1920103253LL);
      v10 = (_DWORD *)v9;
      if ( v9 )
      {
        if ( (unsigned int)GreGetRegionData(*(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), v8, v9) )
        {
          v11 = v10[2];
          v12 = v10 + 8;
          if ( v11 > 0 )
          {
            v13 = (unsigned int)v11;
            do
            {
              v14[0] = *v12;
              TouchTargetingClipContact(v14);
              ++v12;
              --v13;
            }
            while ( v13 );
          }
        }
        Win32FreePool(v10);
      }
    }
  }
  else
  {
    v14[0] = *(_OWORD *)(v4 + 88);
    TouchTargetingClipContact(v14);
  }
}
