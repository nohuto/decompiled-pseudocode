__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, _QWORD *a2)
{
  __int64 v5; // r15
  _QWORD *v6; // r8
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // di
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // r14
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-40h] BYREF
  int v25; // [rsp+30h] [rbp-30h]
  _QWORD v26[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v30)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v25 = 0;
    v24[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = *(_QWORD *)(a1 + 24);
    v24[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v26[1] = v26;
    v6 = v26;
    v27 = 0LL;
    v26[0] = v26;
    v28 = 2;
    v29 = 0LL;
    if ( v5 == a1 + 24 || (v7 = v5 - 8) == 0 )
    {
LABEL_16:
      v13 = 1LL;
      if ( *(_QWORD *)(a1 + 40) > 1uLL )
        v13 = *(_QWORD *)(a1 + 40);
      v14 = 28 * v13 - 20;
      if ( v6 != v26 )
      {
        v15 = v6 - 1;
        while ( v15 )
        {
          v16 = (_QWORD *)v15[1];
          v14 += v15[5];
          v15 = v16 - 1;
          if ( v16 == v26 )
            v15 = 0LL;
        }
      }
      v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v14);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v18 = 1;
        v19 = 0;
        *(_BYTE *)a2[4] = v27;
        v20 = (unsigned __int8 *)a2[4];
        if ( *v20 > 1u )
          v18 = *v20;
        v21 = &v20[4 * v18 + 4];
        if ( (_QWORD *)v26[0] != v26 )
        {
          v22 = v26[0] - 8LL;
          if ( v26[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(a2[4] + 4LL * v19 + 4) = (_DWORD)v21 - *((_DWORD *)a2 + 8);
              memmove(v21, *(const void **)(v22 + 32), *(_QWORD *)(v22 + 40));
              v21 += *(_QWORD *)(v22 + 40);
              v23 = *(_QWORD **)(v22 + 8);
              v22 = (__int64)(v23 - 1);
              if ( v23 == v26 )
                v22 = 0LL;
              ++v19;
            }
            while ( v22 );
          }
        }
        if ( v19 != *(_BYTE *)a2[4] )
          WdLogSingleEntry0(1LL);
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v17);
      }
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)operator new[](0x38uLL, 0x4E506456u, 256LL);
        v9 = (__int64 (__fastcall ***)(_QWORD, __int64))v8;
        if ( v8 )
        {
          v8[1] = 0LL;
          v8[2] = 0LL;
          *v8 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          v8[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v8[4] = 0LL;
          v8[5] = 0LL;
          v8[6] = 256LL;
        }
        else
        {
          v9 = 0LL;
        }
        v30 = v9;
        if ( !v9 )
          break;
        v10 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v7, v9);
        v11 = v10;
        if ( v10 < 0 )
        {
          WdLogSingleEntry2(2LL, v7, v10);
          goto LABEL_22;
        }
        v30 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v24, (__int64)v9);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v30);
        v12 = *(_QWORD *)(v7 + 8);
        v7 = v12 - 8;
        if ( v12 == a1 + 24 )
          v7 = 0LL;
        if ( !v7 )
        {
          v6 = (_QWORD *)v26[0];
          goto LABEL_16;
        }
      }
      WdLogSingleEntry2(6LL, 56LL, v7);
      v11 = -1073741801;
LABEL_22:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v30);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v24);
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
