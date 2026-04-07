/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180024A3C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800410F0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800268D8 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180027908 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DD04 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ??1?$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ @ 0x18008550C (--1-$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int v1; // ebx
  __int64 v4; // rsi
  struct CVisualProxy *v5; // rcx
  int v6; // eax
  struct CClientArea *v7; // rax
  int inserted; // eax
  CVisual *v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct _MARGINS v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CClientArea *v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 60) )
  {
    v4 = *((_QWORD *)this + 91);
    v5 = *(struct CVisualProxy **)(v4 + 128);
    if ( v5 )
    {
      v13 = 0LL;
      v6 = CClientArea::Create(v5, &v13);
      v1 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (__int64)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<CClientArea>::~ComPtr<CClientArea>(&v13);
      }
      else
      {
        v7 = v13;
        v1 = 0;
        *((_QWORD *)v13 + 30) = v4;
        *((_QWORD *)this + 60) = v7;
      }
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x784u);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 67) + 32LL),
                     *((struct CVisual **)this + 60),
                     0LL,
                     1u,
                     1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          v10 = 1927;
          goto LABEL_14;
        }
        v9 = (CVisual *)*((_QWORD *)this + 60);
        v11 = 0LL;
        CVisual::SetInsetFromParent(v9, &v11);
        if ( (*((_BYTE *)this + 240) & 4) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v1 = inserted;
          if ( inserted < 0 )
          {
            v10 = 1934;
LABEL_14:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v10);
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
