/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800BBB00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB048 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800BB184 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800BB6D0 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC00 (-NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800BBDC4 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1800BBEA0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int Handles; // eax
  unsigned int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x57u, 0LL);
LABEL_13:
    CRenderData::DestroyRenderData(this);
    return v9;
  }
  CDataStreamWriter::Reset((struct _LIST_ENTRY *)((char *)this + 72));
  Handles = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 72), a4, a5);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 92;
    goto LABEL_12;
  }
  Handles = CRenderData::GetHandles(this, a2);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 96;
    goto LABEL_12;
  }
  Handles = CRenderData::CheckPrimitives(this);
  v9 = Handles;
  if ( Handles < 0 )
  {
    v15 = 100;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Handles, v15, 0LL);
    goto LABEL_13;
  }
LABEL_2:
  CRenderData::NotifyOnChanged(this, 0LL, 0LL);
  return v9;
}
