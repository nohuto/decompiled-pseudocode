/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012DC4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011440 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012DC4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003F600 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180040100 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000C170 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000D774 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012DC4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800133BC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180013884 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016B00 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002A940 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180041E88 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, bool a3)
{
  unsigned int v4; // esi
  CWindowData *v5; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v7; // rcx
  int v8; // eax
  char v9; // dl
  unsigned int v10; // edi
  CWindowData *v11; // rbp
  unsigned int v13; // ebp
  CWindowData *v14; // r14
  _DWORD *v15; // rcx
  CWindowSnapshot *v16; // r8
  int v17; // eax
  int v18; // eax

  v4 = 0;
  if ( (*((_BYTE *)this + 608) & 0x40) != 0 )
    return v4;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v5 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v5 = this;
    goto LABEL_4;
  }
  if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 612) & 0x10) == 0 )
  {
    v13 = 0;
    if ( *((_DWORD *)this + 142) )
    {
      while ( 1 )
      {
        v14 = *(CWindowData **)(*((_QWORD *)this + 68) + 8LL * v13);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v14) == 1 )
          break;
        if ( ++v13 >= *((_DWORD *)this + 142) )
          goto LABEL_12;
      }
      v5 = v14;
LABEL_4:
      if ( v5 )
      {
        if ( !CWindowData::IsImmersiveWindow(v5) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
          v5 = 0LL;
        if ( v5 )
        {
          v7 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 48);
          if ( v7 )
          {
            v8 = CWindowSnapshot::Create(v7, (struct CWindowSnapshot **)this + 52);
            v4 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1FB7u);
              return v4;
            }
            *((_BYTE *)this + 612) &= ~0x20u;
          }
        }
      }
    }
  }
LABEL_12:
  CWindowData::NotifyRepresentationChanged(this);
  v9 = *((_BYTE *)this + 612);
  if ( (v9 & 0x10) != 0 )
  {
    if ( !*((_QWORD *)this + 52)
      || (*((_DWORD *)v5 + 39) & 0x400) != 0
      || CAccent::s_IsPolicyActive((CWindowData *)((char *)v5 + 152)) && *v15 != 5 )
    {
      *((_BYTE *)this + 612) = v9 | 0x20;
    }
    else
    {
      v17 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v16, v5);
      v4 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1FC1u);
    }
  }
  else
  {
    v10 = 0;
    if ( *((_DWORD *)this + 142) )
    {
      while ( 1 )
      {
        v11 = *(CWindowData **)(*((_QWORD *)this + 68) + 8LL * v10);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v11) == 1 )
        {
          v18 = CWindowData::SnapshotWindow(v11);
          v4 = v18;
          if ( v18 < 0 )
            break;
        }
        if ( ++v10 >= *((_DWORD *)this + 142) )
          return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1FD1u);
    }
  }
  return v4;
}
