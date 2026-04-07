/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800476F8
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046384 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026690 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800275E0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x180047880 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180047B8C (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int inserted; // eax
  int v11; // eax
  int v12; // eax
  CBaseObject *v13; // rax
  CBaseObject *v14; // rcx
  CBaseObject *v16; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v17; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v18; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v19; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = CVisual::Create(&v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x72Bu);
LABEL_12:
    v6 = (volatile signed __int32 *)v18;
    goto LABEL_13;
  }
  v6 = (volatile signed __int32 *)v18;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v18 + 104LL))(v18);
  v7 = CRenderDataVisual::Create(&v17);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x731u);
LABEL_25:
    v2 = (volatile signed __int32 *)v17;
    goto LABEL_13;
  }
  v8 = CDesktopWindowReplacement::Create(&v16);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x735u);
    goto LABEL_25;
  }
  v2 = (volatile signed __int32 *)v17;
  v9 = CMagnifierControl::Create((struct CVisual *)v6, v17, &v19);
  v5 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x73Bu);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v6 + 8), *((struct CVisual **)v19 + 4), 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x740u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 64LL))(v6);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x743u);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL));
        v5 = v12;
        if ( v12 >= 0 )
        {
          *((_QWORD *)a2 + 1) = v6;
          _InterlockedIncrement(v6 + 2);
          v13 = v19;
          *((_QWORD *)a2 + 2) = v19;
          _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
          v2 = (volatile signed __int32 *)v17;
          *((_QWORD *)a2 + 3) = v17;
          if ( v2 )
          {
            _InterlockedIncrement(v2 + 2);
            v2 = (volatile signed __int32 *)v17;
          }
          v14 = v16;
          *((_QWORD *)a2 + 4) = v16;
          if ( v14 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
            v2 = (volatile signed __int32 *)v17;
          }
          goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x745u);
      }
    }
  }
LABEL_13:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  if ( v19 )
    CBaseObject::Release(v19);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  if ( v16 )
    CBaseObject::Release(v16);
  return v5;
}
