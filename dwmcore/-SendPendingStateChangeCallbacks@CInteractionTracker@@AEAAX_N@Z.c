void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  __int64 v3; // r8
  __int64 v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int16 v18; // cx
  CInteractionTracker *v19; // rcx
  __int128 v20; // xmm0
  __int128 *v21; // rax
  __int64 ChannelCallbackId; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int16 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // [rsp+38h] [rbp-E0h]
  __int128 v33; // [rsp+98h] [rbp-80h]
  __int128 v34; // [rsp+A8h] [rbp-70h]
  __int64 v35; // [rsp+D8h] [rbp-40h] BYREF
  int v36; // [rsp+E0h] [rbp-38h]
  __int64 v37; // [rsp+E8h] [rbp-30h]
  int v38; // [rsp+F0h] [rbp-28h]
  __int64 v39; // [rsp+F8h] [rbp-20h]
  int v40; // [rsp+100h] [rbp-18h]
  __int64 v41; // [rsp+108h] [rbp-10h] BYREF
  int v42; // [rsp+110h] [rbp-8h]
  __int64 v43; // [rsp+118h] [rbp+0h] BYREF
  int v44; // [rsp+120h] [rbp+8h]
  _QWORD v45[2]; // [rsp+128h] [rbp+10h] BYREF
  _QWORD v46[2]; // [rsp+138h] [rbp+20h] BYREF
  _QWORD v47[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v48[2]; // [rsp+158h] [rbp+40h] BYREF
  _BYTE v49[64]; // [rsp+168h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1C0h] [rbp+A8h]

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 1240LL);
  v4 = *(_QWORD *)(v3 + 40);
  v5 = *((_DWORD *)this + 126) - 1;
  if ( !a2 )
    v5 = *((_DWORD *)this + 126);
  v6 = 0;
  if ( v5 )
  {
    v7 = 0LL;
    do
    {
      if ( *((_DWORD *)this + 45) )
      {
        v8 = *((_QWORD *)this + 60);
        v9 = *(_DWORD *)(v8 + v7 + 12);
        v35 = *(_QWORD *)(v8 + v7 + 4);
        v36 = v9;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v35, v3, 0LL);
      }
      v10 = *(_DWORD *)(*((_QWORD *)this + 60) + v7);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
              || CInteractionTracker::HasDefaultAnimations(v19) )
            {
              v21 = (__int128 *)CInteractionTracker::CalculateInertiaCallbackValues(this, v49);
              v33 = *v21;
              v20 = v21[2];
              v34 = v21[1];
            }
            else
            {
              v33 = *(_OWORD *)((char *)this + 580);
              v20 = *(_OWORD *)((char *)this + 612);
              v34 = *(_OWORD *)((char *)this + 596);
            }
            v38 = DWORD2(v20);
            v37 = v20;
            v40 = DWORD2(v34);
            v39 = v34;
            v41 = v33;
            v42 = DWORD2(v33);
            ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
            v46[1] = *((unsigned int *)this + 16);
            v46[0] = ChannelCallbackId;
            CoreUICallSend(v4, v46, 2LL, 11LL, 1, &unk_180339426, &v41);
            if ( *((_BYTE *)this + 634) )
              *((_BYTE *)this + 634) = 0;
            goto LABEL_21;
          }
          if ( v12 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v13 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v16 = v45;
          v17 = *((unsigned int *)this + 16);
          v45[0] = v13;
          v18 = 5;
          v45[1] = v17;
        }
        else
        {
          v23 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v16 = v47;
          v24 = *((unsigned int *)this + 16);
          v47[0] = v23;
          v18 = 4;
          v47[1] = v24;
        }
        LODWORD(v32) = *((_DWORD *)this + 47);
        CoreUICallSend(v4, v16, 2LL, v14, v18, v15, v32);
      }
      else
      {
        v25 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v48[1] = *((unsigned int *)this + 16);
        v26 = *((_DWORD *)this + 47);
        v48[0] = v25;
        LODWORD(v32) = v26;
        CoreUICallSend(v4, v48, 2LL, v27, 3, v28, v32);
        *((_DWORD *)this + 47) = 0;
      }
LABEL_21:
      if ( !*((_DWORD *)this + 45) )
      {
        v29 = *((_QWORD *)this + 60);
        v30 = *(_DWORD *)(v29 + v7 + 12);
        v43 = *(_QWORD *)(v29 + v7 + 4);
        v44 = v30;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v43, v3, 0LL);
      }
      ++v6;
      v31 = *(_DWORD *)(v7 + *((_QWORD *)this + 60));
      v7 += 24LL;
      *((_DWORD *)this + 45) = v31;
    }
    while ( v6 < v5 );
  }
  DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft((char *)this + 480, v5);
}
