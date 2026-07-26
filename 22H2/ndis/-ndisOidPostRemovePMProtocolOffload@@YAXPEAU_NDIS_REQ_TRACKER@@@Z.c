/*
 * XREFs of ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B9D4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C003B9F8 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0090564 (-ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z @ 0x1C0090794 (-ndisGetPatternEffectivePriority@@YAKPEAU_NDIS_PACKET_PATTERN_ENTRY@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095CC0 (-ndisUpdateWmiPMParamsForProtocolOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _SINGLE_LIST_ENTRY *v2; // r14
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebp
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  _QWORD *p_Next; // r10
  _SINGLE_LIST_ENTRY *v8; // r11
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v10; // r8
  _SINGLE_LIST_ENTRY *v11; // rdx
  _SINGLE_LIST_ENTRY *p_DupLink; // rcx
  _SINGLE_LIST_ENTRY *v13; // r9
  int PatternEffectivePriority; // eax
  __int64 v15; // r8
  struct _SINGLE_LIST_ENTRY *v16; // rcx

  v2 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 10) )
    return;
  v5 = **(_DWORD **)(v4 + 40);
  if ( !v3 )
    goto LABEL_19;
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(*((struct _NDIS_OID_REQUEST **)a1 + 4));
  p_Next = &v3->PMProtocolOffloadList.Next;
  v8 = OidSourceHandle;
  Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)v3->PMProtocolOffloadList.Next;
  if ( !Next )
    return;
  do
  {
    v10 = Next;
    if ( Next->WoLPattern.PatternId == v5 )
      break;
    p_Next = &Next->Link.Next;
    v10 = 0LL;
    Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
  }
  while ( Next );
  if ( !v10 )
    return;
  v11 = 0LL;
  p_DupLink = &v10->DupLink;
  if ( v10 == (struct _NDIS_PACKET_PATTERN_ENTRY *)-8LL )
    return;
  do
  {
    v13 = p_DupLink - 1;
    if ( p_DupLink[2].Next == v8 )
      break;
    v11 = p_DupLink;
    v13 = 0LL;
    p_DupLink = p_DupLink->Next;
  }
  while ( p_DupLink );
  if ( !v13 )
    return;
  if ( v11 )
  {
    v11->Next = p_DupLink->Next;
LABEL_15:
    PatternEffectivePriority = ndisGetPatternEffectivePriority(v10);
    *(_DWORD *)(v15 + 36) = PatternEffectivePriority;
    goto LABEL_17;
  }
  if ( p_DupLink->Next )
  {
    v10 = (struct _NDIS_PACKET_PATTERN_ENTRY *)&p_DupLink->Next[-1];
    *p_Next = v10;
    v10->Link.Next = Next->Link.Next;
    goto LABEL_15;
  }
  *p_Next = Next->Link.Next;
LABEL_17:
  ExFreePoolWithTag(v13, 0);
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v4) == &ndisIntReqWmi )
  {
    ndisUpdateWmiPMParamsForProtocolOffloads(v3);
    ndisGetCombinedPMConfig(v3, &v3->PMCurrentParameters);
  }
LABEL_19:
  if ( *((_QWORD *)a1 + 3) )
    ndisDeletePatternEntry(v2 + 64, v5);
  v16 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v16 )
  {
    if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
      ndisDeletePatternEntry(v16 + 91, v5);
  }
}
