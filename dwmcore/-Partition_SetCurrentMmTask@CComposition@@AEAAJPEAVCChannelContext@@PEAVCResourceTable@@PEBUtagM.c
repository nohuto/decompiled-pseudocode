__int64 __fastcall CComposition::Partition_SetCurrentMmTask(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SETCURRENTMMTASK *a4)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _OWORD v16[9]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = *(_OWORD *)((char *)a4 + 24);
  v16[0] = *(_OWORD *)((char *)a4 + 8);
  v6 = *(_OWORD *)((char *)a4 + 40);
  v16[1] = v5;
  v7 = *(_OWORD *)((char *)a4 + 56);
  v16[2] = v6;
  v8 = *(_OWORD *)((char *)a4 + 72);
  v16[3] = v7;
  v9 = *(_OWORD *)((char *)a4 + 88);
  v16[4] = v8;
  v10 = *(_OWORD *)((char *)a4 + 104);
  v16[5] = v9;
  v11 = *(_OWORD *)((char *)a4 + 136);
  v16[6] = v10;
  v16[7] = *(_OWORD *)((char *)a4 + 120);
  v16[8] = v11;
  v12 = CMmcssTask::Set((CComposition *)((char *)this + 336), (const struct DWM_MMTASK *)v16, 1);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4B6u, 0LL);
  else
    CComposition::UpdateMmcssPartners(this);
  return v14;
}
