__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // esi
  struct UCE_RDP_HEADER *v4; // r12
  struct UCE_RDP_HEADER *v5; // r14
  struct UCE_RDP_HEADER *v6; // rdi
  __int64 v8; // r8
  bool v9; // r15
  __int64 v10; // rcx
  char v11; // r14
  char v12; // r13
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  struct UCE_RDP_HEADER *v17; // r12
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rax
  struct UCE_RDP_HEADER *v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // r12d
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  struct _ERESOURCE *v31; // r15
  _QWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  bool v35; // zf
  __int64 v37; // rcx
  __int64 v38; // rax
  int ChannelRDPHeaders; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  struct UCE_RDP_HEADER *v43; // [rsp+58h] [rbp-59h] BYREF
  struct UCE_RDP_HEADER *v44; // [rsp+60h] [rbp-51h] BYREF
  struct UCE_RDP_HEADER *v45; // [rsp+68h] [rbp-49h]
  struct UCE_RDP_HEADER *v46; // [rsp+70h] [rbp-41h]
  __int64 v47; // [rsp+78h] [rbp-39h] BYREF
  __int64 v48; // [rsp+80h] [rbp-31h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v49; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v50; // [rsp+90h] [rbp-21h] BYREF
  __int64 v51; // [rsp+98h] [rbp-19h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v55; // [rsp+B8h] [rbp+7h]
  __int64 v56; // [rsp+C0h] [rbp+Fh]
  __int64 v57; // [rsp+C8h] [rbp+17h]
  __int64 v58; // [rsp+D0h] [rbp+1Fh]
  bool v61; // [rsp+130h] [rbp+7Fh]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v8 = 1LL;
  v9 = 0;
  if ( !a2 )
  {
    v40 = *((_QWORD *)this + 14);
    if ( v40 )
    {
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v40 + 8) + 8LL))(
              *(_QWORD *)(v40 + 8),
              0LL,
              1LL);
      v8 = 1LL;
      if ( v41 != 3 )
        v9 = 1;
    }
  }
  v61 = v9;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 || v9 )
      break;
    v11 = 0;
    v12 = 0;
    v13 = (unsigned int)(*((_DWORD *)this + 37) - 1);
    if ( *((_DWORD *)this + 37) != 1 )
    {
      if ( *((_DWORD *)this + 37) != 2 )
        goto LABEL_16;
      if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v10 + 20) == 6 )
        {
          v12 = 1;
        }
        else
        {
          v11 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                &v44,
                                &v43);
          v6 = v44;
          UserModeViewAtOffset = ChannelRDPHeaders;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v44 + 1) = 0LL;
            *((_DWORD *)v6 + 1) = 40;
            *(_DWORD *)v6 = 5;
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
            *((_DWORD *)v6 + 5) = *(_DWORD *)(v13 + 2696);
            *((_QWORD *)v6 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 2688LL);
          }
        }
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
        goto LABEL_16;
      }
      v11 = 1;
      v12 = 1;
      if ( *(_DWORD *)(v10 + 20) != 6 )
      {
        v14 = *(_QWORD **)(v10 + 136);
        UserModeViewAtOffset = 0;
        v15 = *(_QWORD *)(v10 + 144);
        v58 = *(_QWORD *)(v10 + 152);
        v56 = v14[7];
        v16 = v14[6];
        v55 = v15;
        if ( !v16 )
        {
          v38 = v14[2];
          v52 = 0LL;
          v51 = 0LL;
          v47 = 0LL;
          UserModeViewAtOffset = MmMapViewOfSection(
                                   v14[3],
                                   *(_QWORD *)(v38 + 16),
                                   &v47,
                                   0LL,
                                   4096LL,
                                   &v52,
                                   &v51,
                                   2,
                                   0x400000,
                                   2);
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v16 = v47;
          v14[6] = v47;
        }
        v17 = 0LL;
        v18 = v15 + v16 + 40;
        v19 = UserModeViewAtOffset;
        v57 = v18;
        v20 = *((_QWORD *)this + 14);
        v21 = *(struct UCE_RDP_HEADER **)(v20 + 144);
        v22 = *(_QWORD **)(v20 + 136);
        v43 = v21;
        v23 = v22[6];
        v6 = (struct UCE_RDP_HEADER *)((char *)v21 + v22[7]);
        v44 = v6;
        if ( v23 )
        {
LABEL_12:
          v17 = (struct UCE_RDP_HEADER *)((char *)v21 + v23);
        }
        else
        {
          v42 = v22[2];
          v54 = 0LL;
          v53 = 0LL;
          v48 = 0LL;
          if ( (int)MmMapViewOfSection(v22[3], *(_QWORD *)(v42 + 16), &v48, 0LL, 4096LL, &v54, &v53, 2, 0x400000, 2) >= 0 )
          {
            v23 = v48;
            v21 = v43;
            v22[6] = v48;
            goto LABEL_12;
          }
        }
        v24 = *((_QWORD *)this + 14);
        UserModeViewAtOffset = v19;
        v43 = v17;
        v25 = *(_DWORD *)(v24 + 20);
        *((_QWORD *)v6 + 1) = 0LL;
        *(_DWORD *)v6 = v25;
        *((_DWORD *)v6 + 1) = 40;
        v13 = *((_QWORD *)this + 14);
        if ( *(_DWORD *)(v13 + 20) == 7 )
        {
          *(_QWORD *)(v13 + 72) = *((_QWORD *)this + 21);
          v37 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
          *((_DWORD *)v6 + 4) = *(_DWORD *)(v37 + 28);
          *((_QWORD *)v6 + 3) = v57;
          *((_DWORD *)v6 + 8) = v58;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
            McTemplateK0p_EtwWriteTransfer(v37, &DCompGetBatchEvent, &W32kControlGuid, *((_QWORD *)this + 14));
          v9 = v61;
        }
        else
        {
          v9 = v61;
          if ( *(_DWORD *)(v13 + 20) == 8 )
          {
            v26 = v55;
            *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 28LL);
            *((_QWORD *)v6 + 3) = *(_QWORD *)(v56 + v26 + 40);
          }
        }
LABEL_16:
        v27 = UserModeViewAtOffset;
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        if ( v12 )
        {
LABEL_18:
          v28 = **((_QWORD **)this + 14);
          if ( !a2 && v28 )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v28 + 8) + 8LL))(
                   *(_QWORD *)(v28 + 8),
                   v13,
                   v8) != 3 )
              v9 = 1;
            v61 = v9;
          }
          v29 = *((_QWORD *)this + 14);
          *(_BYTE *)(v29 + 32) |= 4u;
          v30 = *(_QWORD *)(v29 + 8);
          if ( *(_DWORD *)(v29 + 20) != 6 )
          {
            v31 = *(struct _ERESOURCE **)(v30 + 368);
            if ( v31 )
            {
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(v31, 1u);
              v35 = (*(_DWORD *)(v30 + 224))-- == 1;
              if ( v35 )
                KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v30 + 360) + 8LL), 1, 0);
              ExReleaseResourceLite(*(PERESOURCE *)(v30 + 368));
              KeLeaveCriticalRegion();
            }
          }
          v32 = (_QWORD *)*((_QWORD *)this + 16);
          v33 = *((_QWORD *)this + 14);
          if ( v32 )
            *v32 = v33;
          else
            *((_QWORD *)this + 15) = v33;
          v34 = (_QWORD *)*((_QWORD *)this + 14);
          UserModeViewAtOffset = v27;
          *((_QWORD *)this + 16) = v34;
          *v34 = 0LL;
          *((_QWORD *)this + 14) = v28;
        }
        v4 = v46;
        goto LABEL_25;
      }
      UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                               *(DirectComposition::CApplicationChannel **)(v10 + 8),
                               &v44,
                               &v43);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      v6 = v44;
      v27 = UserModeViewAtOffset;
      *((_QWORD *)v44 + 1) = 0LL;
      *((_DWORD *)v6 + 1) = 40;
      *(_DWORD *)v6 = 6;
      *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      goto LABEL_18;
    }
    v49 = 0LL;
    v50 = 0LL;
    v11 = 1;
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      (DirectComposition::CConnection *)((char *)this + 192),
      v13,
      &v49,
      &v50);
    v6 = (struct UCE_RDP_HEADER *)(v50 + *((_QWORD *)v49 + 7));
    v44 = v6;
    UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v49, v50, (void **)&v43);
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 1) = 40;
    *(_DWORD *)v6 = 5;
    *((_DWORD *)v6 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
    *((_DWORD *)v6 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 2696LL);
    *((_QWORD *)v6 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 2688LL);
    *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
    *((_DWORD *)this + 37) = 2;
LABEL_25:
    v9 = v61;
    v35 = v11 == 0;
    v5 = v45;
    v8 = 1LL;
    if ( !v35 )
    {
      if ( v4 )
      {
        *((_QWORD *)v4 + 1) = v43;
      }
      else
      {
        v5 = v43;
        v45 = v43;
      }
      v9 = v61;
      v4 = v6;
      v46 = v6;
    }
  }
  *a3 = v5;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
