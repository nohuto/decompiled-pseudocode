/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x1800371A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180037460 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800375DC (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18003765C (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x180037A20 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180037B18 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180038068 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        struct _LIST_ENTRY *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int Handles; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx

  v9 = 0;
  CRenderData::DestroyRenderData((CRenderData *)this);
  v11 = *((_DWORD *)a3 + 2);
  if ( !v11 )
    goto LABEL_2;
  if ( a5 != v11 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x59u, 0LL);
    goto LABEL_11;
  }
  CDataStreamWriter::Reset(this + 4);
  v13 = CDataStreamWriter::AddBlockData((CDataStreamWriter *)&this[4], a4, a5);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x61u, 0LL);
  }
  else
  {
    Handles = CRenderData::GetHandles((CRenderData *)this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Handles, 0x67u, 0LL);
    }
    else
    {
      v17 = CRenderData::CheckPrimitiveCount((CRenderData *)this);
      v9 = v17;
      if ( v17 >= 0 )
      {
LABEL_2:
        LOBYTE(this[16].Blink) = 1;
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x6Au, 0LL);
    }
  }
LABEL_3:
  if ( v9 < 0 )
LABEL_11:
    CRenderData::DestroyRenderData((CRenderData *)this);
  return (unsigned int)v9;
}
