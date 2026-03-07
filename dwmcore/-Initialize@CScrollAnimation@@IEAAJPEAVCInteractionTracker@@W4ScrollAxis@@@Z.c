__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v3; // ebp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int inserted; // eax
  int v17; // eax
  int v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v20; // [rsp+44h] [rbp-24h]
  unsigned __int8 v21; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 1;
  v7 = CWeakReference<CInteractionTracker>::Create((struct CResource *)a2, (struct CWeakResourceReference **)(a1 + 352));
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Du, 0LL);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 340) = a3;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v11 = 2;
    }
    else
    {
      v11 = 1;
      v3 = 1;
      inserted = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v19, 1u);
      if ( inserted < 0 )
        ModuleFailFastForHRESULT((unsigned int)inserted, retaddr);
    }
  }
  else
  {
    v11 = 1;
    v3 = 1;
    v17 = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v19, 0);
    if ( v17 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v17, retaddr);
  }
  v12 = CBaseExpression::SetTarget(a1, a2[48], (struct CResource *)a2, v11, 0x12u, v3, v20, v21);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Au, 0LL);
    goto LABEL_17;
  }
  v14 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers((__int64)a2, a1, v11);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x73u, 0LL);
LABEL_17:
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return v9;
  }
  *(_BYTE *)(a1 + 368) |= 1u;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 448LL) |= 2u;
  return 0;
}
