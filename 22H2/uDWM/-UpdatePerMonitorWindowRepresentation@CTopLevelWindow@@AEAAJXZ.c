/*
 * XREFs of ?UpdatePerMonitorWindowRepresentation@CTopLevelWindow@@AEAAJXZ @ 0x18001F554
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C0C0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B140 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CPerMonitorWindowRepresentation@@SAJPEAPEAV1@@Z @ 0x1800BE908 (-Create@CPerMonitorWindowRepresentation@@SAJPEAPEAV1@@Z.c)
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BEEDC (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePerMonitorWindowRepresentation(CTopLevelWindow *this)
{
  struct CWindowData *v1; // rdx
  unsigned int v2; // ebx
  struct CPerMonitorWindowRepresentation **v5; // rsi
  CPerMonitorWindowRepresentation *v6; // rcx
  int v7; // eax
  int v8; // eax
  struct CVisual *v9; // rdx
  int inserted; // eax
  __int64 v11; // rax
  struct CVisual *v12; // rbp
  VisualCollection *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  struct CVisual *v23; // r14
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax

  v1 = (struct CWindowData *)*((_QWORD *)this + 91);
  v2 = 0;
  if ( (*((_BYTE *)v1 + 348) & 2) != 0 )
  {
    v5 = (struct CPerMonitorWindowRepresentation **)((char *)this + 832);
    v6 = (CPerMonitorWindowRepresentation *)*((_QWORD *)this + 104);
    if ( !v6 )
    {
      v7 = CPerMonitorWindowRepresentation::Create(v5);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x15C2u);
        return v2;
      }
      v1 = (struct CWindowData *)*((_QWORD *)this + 91);
      v6 = *v5;
    }
    v8 = CPerMonitorWindowRepresentation::Validate(v6, v1);
    v2 = v8;
    if ( v8 >= 0 )
    {
      v9 = (struct CVisual *)*((_QWORD *)*v5 + 2);
      if ( *((_DWORD *)*v5 + 14) )
      {
        if ( !v9 || !*((_QWORD *)v9 + 3) )
        {
          inserted = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), v9, 0LL, 0, 1);
          v2 = inserted;
          if ( inserted >= 0 )
          {
            if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
            {
              v11 = *((_QWORD *)this + 101);
              v12 = *(struct CVisual **)(*(_QWORD *)(v11 + 16) + 16LL);
              v13 = (CTopLevelWindow *)((char *)this + 32);
              if ( v12 )
              {
                v14 = VisualCollection::Remove(v13, *(struct CVisual **)(*(_QWORD *)(v11 + 16) + 16LL));
                v2 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x15DCu);
                  return v2;
                }
                v15 = VisualCollection::InsertRelative(
                        (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                        v12,
                        0LL,
                        0,
                        1);
                v2 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x15DDu);
                  return v2;
                }
              }
              else
              {
                v16 = VisualCollection::Remove(v13, *((struct CVisual **)this + 32));
                v2 = v16;
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x15E1u);
                  return v2;
                }
                v17 = VisualCollection::InsertRelative(
                        (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                        *((struct CVisual **)this + 32),
                        0LL,
                        0,
                        1);
                v2 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x15E2u);
                  return v2;
                }
              }
            }
            else
            {
              v18 = VisualCollection::Remove((CTopLevelWindow *)((char *)this + 32), *((struct CVisual **)this + 32));
              v2 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x15E7u);
                return v2;
              }
              v19 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                      *((struct CVisual **)this + 32),
                      0LL,
                      0,
                      1);
              v2 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x15E8u);
                return v2;
              }
            }
            v20 = VisualCollection::InsertRelative(
                    (CTopLevelWindow *)((char *)this + 32),
                    *((struct CVisual **)*v5 + 3),
                    0LL,
                    0,
                    1);
            v2 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x15EBu);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x15D4u);
          }
        }
      }
      else if ( v9 && *((_QWORD *)v9 + 3) )
      {
        v21 = VisualCollection::Remove((CTopLevelWindow *)((char *)this + 32), v9);
        v2 = v21;
        if ( v21 >= 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
          {
            v22 = *(_QWORD *)(*((_QWORD *)this + 101) + 16LL);
            v23 = *(struct CVisual **)(v22 + 16);
            if ( v23 )
            {
              v24 = VisualCollection::Remove(
                      (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                      *(struct CVisual **)(v22 + 16));
              v2 = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x15FBu);
                return v2;
              }
              v25 = VisualCollection::InsertRelative((CTopLevelWindow *)((char *)this + 32), v23, 0LL, 0, 1);
              v2 = v25;
              if ( v25 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x15FCu);
                return v2;
              }
            }
            else
            {
              v26 = VisualCollection::Remove((CTopLevelWindow *)((char *)this + 32), *((struct CVisual **)this + 32));
              v2 = v26;
              if ( v26 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x1600u);
                return v2;
              }
              v27 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                      *((struct CVisual **)this + 32),
                      0LL,
                      0,
                      1);
              v2 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x1601u);
                return v2;
              }
            }
          }
          else
          {
            v28 = VisualCollection::Remove((CTopLevelWindow *)((char *)this + 32), *((struct CVisual **)this + 32));
            v2 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x1606u);
              return v2;
            }
            v29 = VisualCollection::InsertRelative(
                    (VisualCollection *)(*((_QWORD *)*v5 + 2) + 32LL),
                    *((struct CVisual **)this + 32),
                    0LL,
                    0,
                    1);
            v2 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x1607u);
              return v2;
            }
          }
          v30 = VisualCollection::Remove((CTopLevelWindow *)((char *)this + 32), *((struct CVisual **)*v5 + 3));
          v2 = v30;
          if ( v30 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x160Au);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x15F3u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x15C8u);
    }
  }
  return v2;
}
