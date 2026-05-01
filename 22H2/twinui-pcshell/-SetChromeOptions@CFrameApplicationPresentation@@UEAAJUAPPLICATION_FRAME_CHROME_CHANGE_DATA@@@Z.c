/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180065870
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0ee7bb0dcee848556900d8415f399c8___ @ 0x180065990 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_a0ee7bb0dcee848556900d8415f399c8___.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1801F9CD4 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, unsigned __int64 a2)
{
  char v3; // cl
  unsigned __int64 v4; // r9
  int v5; // r8d
  bool v6; // zf
  __int64 v7; // r8
  int v8; // edx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rbx
  char v11; // dl
  char v12; // cl
  int v13; // ecx
  bool v14; // si
  unsigned int v16; // r9d
  __int128 v17; // [rsp+20h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  unsigned __int64 v20; // [rsp+80h] [rbp+20h]
  unsigned __int64 v21; // [rsp+88h] [rbp+28h]

  v20 = a2;
  v3 = a2;
  v4 = HIDWORD(a2);
  v5 = *(_DWORD *)(a1 + 564) & ~(_DWORD)a2;
  *(_DWORD *)(a1 + 560) |= a2;
  v6 = (*(_BYTE *)(a1 + 588) & 2) == 0;
  *(_DWORD *)(a1 + 564) = a2 & HIDWORD(a2) | v5;
  v7 = 1LL;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 568);
    if ( (v8 & 1) != 0 && (v3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 572) & 1) != 0 )
      {
        v9 = v4 | 1;
        HIDWORD(v20) = v9;
      }
      else
      {
        v9 = HIDWORD(a2) & 0xFFFFFFFE;
        HIDWORD(v20) = HIDWORD(a2) & 0xFFFFFFFE;
      }
    }
    else
    {
      v9 = HIDWORD(v20);
    }
    if ( (v8 & 0x80u) != 0 && v3 < 0 )
    {
      if ( (*(_BYTE *)(a1 + 572) & 0x80) != 0 )
        v16 = v9 | 0x80;
      else
        v16 = v9 & 0xFFFFFF7F;
      HIDWORD(v20) = v16;
    }
  }
  v10 = v20;
  v11 = 0;
  LODWORD(v21) = v20;
  if ( (v20 & 4) != 0 && (*(_BYTE *)(a1 + 559) = (v20 & 0x400000000LL) != 0, *(_BYTE *)(a1 + 558)) )
  {
    v12 = BYTE4(v20) | 4;
    HIDWORD(v21) = HIDWORD(v20) | 4;
    v10 = v21;
  }
  else
  {
    v12 = BYTE4(v20);
  }
  if ( (v20 & 0x20) != 0 )
    *(_BYTE *)(a1 + 592) = (v12 & 0x20) != 0;
  if ( (v20 & 0x40) != 0 )
  {
    v13 = v12 & 0x40;
    v14 = v13 != 0;
    if ( *(_DWORD *)(a1 + 228) == 1 && !v13 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 224, 3LL);
      v11 = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 556) = v14;
  }
  BYTE8(v17) = v11;
  *(_QWORD *)&v17 = v10;
  v18 = v17;
  v19 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0ee7bb0dcee848556900d8415f399c8___(a1, &v18, v7);
}
