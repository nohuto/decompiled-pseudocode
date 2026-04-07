/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180013730
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001368C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180029338 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800421B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180044250 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  CSecondaryWindowRepresentation *v6; // r11
  int v8; // esi
  int v9; // esi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rsi
  struct CWindowData *v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = 0;
  v6 = a2;
  if ( !a4 )
    goto LABEL_2;
  v13 = *(_DWORD *)(a1 + 456);
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_21:
    v19 = 7485;
    goto LABEL_23;
  }
  if ( v14 > *(_DWORD *)(a1 + 452) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 432, 8LL, 1LL, &v20);
    v4 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_21;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL * *(unsigned int *)(a1 + 456)) = v6;
    *(_DWORD *)(a1 + 456) = v14;
  }
  v6 = v20;
LABEL_2:
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      return v4;
    if ( v9 == 1 )
    {
      if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
      {
        v11 = *(_QWORD *)(a1 + 424);
        if ( v11 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        }
        else
        {
          v12 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 424), 0);
          v4 = v12;
          if ( v12 < 0 )
          {
            v19 = 7517;
            goto LABEL_31;
          }
        }
      }
      return v4;
    }
    v4 = -2147418113;
    v19 = 7532;
LABEL_23:
    v16 = v4;
    goto LABEL_32;
  }
  if ( ++*(_DWORD *)(a1 + 464) == 1 )
  {
    CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
    return v4;
  }
  v17 = 0LL;
  if ( !*(_DWORD *)(a1 + 568) )
    return v4;
  while ( 1 )
  {
    v18 = *(struct CWindowData **)(*(_QWORD *)(a1 + 544) + 8 * v17);
    if ( (*((_BYTE *)v18 + 610) & 2) != 0 )
      break;
LABEL_28:
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 568) )
      return v4;
  }
  v12 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v6, v18, 1);
  v4 = v12;
  if ( v12 >= 0 )
  {
    v6 = v20;
    goto LABEL_28;
  }
  v19 = 7505;
LABEL_31:
  v16 = v12;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v19);
  return v4;
}
