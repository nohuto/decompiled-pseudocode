/*
 * XREFs of ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x1800D0E94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800D0F14 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteImage(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITEIMAGE *a3)
{
  unsigned int v3; // r9d
  struct ISpriteImage *v5; // rdx
  CWindowNode *v6; // rbx
  __int64 Resource; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = (CWindowNode *)this;
  if ( !v3 )
    goto LABEL_8;
  if ( v3 < *((_DWORD *)a2 + 7) )
  {
    this = v3 * *((_DWORD *)a2 + 6);
    LODWORD(v5) = *(_DWORD *)(this + *((_QWORD *)a2 + 5));
  }
  if ( (_DWORD)v5 == 63
    && ((Resource = CResourceTable::GetResource((__int64)a2, v3, 0x3Fu)) == 0
      ? (v5 = 0LL)
      : (v5 = (struct ISpriteImage *)(Resource + 56)),
        v5) )
  {
LABEL_8:
    v8 = CWindowNode::SetSpriteImage(v6, v5);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1C1u, 0LL);
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2003303421, 0x1BDu, 0LL);
  }
  return v10;
}
