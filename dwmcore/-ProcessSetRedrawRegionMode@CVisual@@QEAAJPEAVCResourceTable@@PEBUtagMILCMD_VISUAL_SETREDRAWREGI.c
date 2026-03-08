/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x18020E2A8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  char v3; // dl
  char v5; // r10
  char v6; // dl
  char v7; // cl
  char v8; // dl
  char v9; // cl
  __int64 v10; // rax

  v3 = *((_BYTE *)this + 101);
  v5 = (v3 & 2) != 0;
  if ( *((_BYTE *)a3 + 8) )
  {
    v6 = v3 | 2;
    *((_BYTE *)this + 101) = v6;
    v7 = v6 | 4;
    if ( !*((_BYTE *)a3 + 9) )
      v7 = v6 & 0xFB;
    *((_BYTE *)this + 101) = v7;
  }
  else
  {
    v8 = v3 & 0xFD;
    *((_BYTE *)this + 101) = v8;
    v7 = v8;
  }
  v9 = (v7 & 2) != 0;
  if ( v5 != v9 )
  {
    v10 = *((_QWORD *)this + 2);
    if ( v9 )
      ++*(_DWORD *)(v10 + 1224);
    else
      --*(_DWORD *)(v10 + 1224);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
