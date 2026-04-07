/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180027AB4
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001368C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180027A5C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180013E28 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180029338 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800421B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180045B5C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x18009A8C8 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  int v7; // edi
  __int64 v8; // rdi
  int v9; // eax
  struct CWindowData *v10; // rdx
  CSecondaryWindowRepresentation *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( a4 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ppd_EtwEventWriteTransfer(a1, (_DWORD)a2, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    DynArray<CWindowData *,0>::Remove((__int64 *)(a1 + 432), &v11);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 424)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 424) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 464);
    LODWORD(v8) = *(_DWORD *)(a1 + 568);
    v9 = *(_DWORD *)(a1 + 464);
    if ( (_DWORD)v8 )
    {
      do
      {
        v8 = (unsigned int)(v8 - 1);
        v10 = *(struct CWindowData **)(*(_QWORD *)(a1 + 544) + 8 * v8);
        if ( (*((_BYTE *)v10 + 610) & 2) != 0 )
          CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, v10, 0);
      }
      while ( (_DWORD)v8 );
      v9 = *(_DWORD *)(a1 + 464);
    }
    if ( !v9 )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
