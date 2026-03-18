/*
 * XREFs of IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA40
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0130324 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3A0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0130110 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE7B8 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(struct CONTAINER_ID *a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT *v3; // [rsp+30h] [rbp-28h]

  CIVGenericSerializer::CIVGenericSerializer(v2);
  if ( v3 )
  {
    CContentRects::GetContentRects(4u, v3, (unsigned int *)&v3[4]);
    if ( *(_WORD *)a1 || *((_WORD *)a1 + 1) )
      ivrIVSend((const struct CIVSerializer *)v2, 3u, a1);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v2, 3u, a1);
  }
  v2[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v2);
}
