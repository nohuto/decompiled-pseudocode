__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int8 v3; // di
  __int64 v4; // rsi
  int NumPathsFromSource; // eax
  unsigned int v9; // ebx
  __int64 Container; // rax
  DMMVIDPNTARGET *v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rax
  DMMVIDPNPRESENTPATH *v15; // rbx
  DMMVIDPNTARGET *v16; // rcx
  struct DMMVIDPNTARGETMODESET *v17; // rax
  DMMVIDPNSOURCEMODESET *v18; // rbx
  int v19; // eax
  size_t v20; // rbx
  struct _D3DKMDT_VIDPN_PRESENT_PATH **v21; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH **v22; // rdi
  int v23; // eax
  DMMVIDPNPRESENTPATH *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  unsigned __int8 v30; // dl
  unsigned __int8 *v31; // r8
  unsigned __int8 *v32; // rsi
  __int64 v33; // rbx
  _QWORD *v34; // rax
  unsigned __int64 v35; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-51h]
  _QWORD v37[2]; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+50h] [rbp-39h]
  _QWORD v39[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-21h]
  int v41; // [rsp+70h] [rbp-19h]
  __int64 v42; // [rsp+78h] [rbp-11h]
  DMMVIDPNPRESENTPATH *Path; // [rsp+80h] [rbp-9h]
  void **v44; // [rsp+88h] [rbp-1h] BYREF
  __int128 v45; // [rsp+90h] [rbp+7h]
  void **v46; // [rsp+A0h] [rbp+17h]
  void *Src; // [rsp+A8h] [rbp+1Fh]
  size_t Size; // [rsp+B0h] [rbp+27h]
  __int64 v49; // [rsp+B8h] [rbp+2Fh]
  struct DMMVIDPNTARGETMODESET *v50; // [rsp+100h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v51; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    if ( a3[4] )
      WdLogSingleEntry0(1LL);
    v35 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v4, &v35);
    v9 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      WdLogSingleEntry2(7LL, v4, this);
      return 3223192377LL;
    }
    else
    {
      if ( NumPathsFromSource >= 0 )
      {
        Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        v11 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v4);
        v50 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v11);
        if ( !*((_QWORD *)v50 + 18) )
          WdLogSingleEntry0(1LL);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
        v12 = 0LL;
        v13 = v39;
        v37[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
        v37[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
        v39[1] = v39;
        v14 = 0LL;
        v36 = 0LL;
        v38 = 0;
        v40 = 0LL;
        v39[0] = v39;
        v41 = 2;
        v42 = 0LL;
        if ( v35 )
        {
          while ( 1 )
          {
            LODWORD(v50) = -1;
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                        this,
                        (char *)(unsigned int)v4,
                        v14,
                        (unsigned int *)&v50) < 0 )
              WdLogSingleEntry0(1LL);
            Path = DMMVIDPNTOPOLOGY::FindPath(this, v4, (int)v50);
            v15 = Path;
            if ( !Path )
              WdLogSingleEntry0(1LL);
            Src = 0LL;
            v44 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
            Size = 0LL;
            v46 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
            v45 = 0LL;
            v49 = 256LL;
            v16 = (DMMVIDPNTARGET *)*((_QWORD *)v15 + 12);
            v51 = 0LL;
            v17 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v16);
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, (__int64)v17);
            v18 = v51;
            if ( !v51 )
              WdLogSingleEntry0(1LL);
            if ( *((_QWORD *)v18 + 18) )
              WdLogSingleEntry0(1LL);
            v19 = DMMVIDPNTARGETMODESET::Serialize(v18);
            v9 = v19;
            if ( v19 < 0 )
              break;
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
            v20 = Size;
            v21 = (struct _D3DKMDT_VIDPN_PRESENT_PATH **)operator new[](0x38uLL, 0x4E506456u, 256LL);
            v22 = v21;
            if ( v21 )
            {
              v21[1] = 0LL;
              v21[2] = 0LL;
              *v21 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
              v21[3] = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)&DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
              v21[4] = 0LL;
              v21[5] = 0LL;
              v21[6] = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)256;
            }
            else
            {
              v22 = 0LL;
            }
            v51 = (DMMVIDPNSOURCEMODESET *)v22;
            if ( !v22 )
            {
              WdLogSingleEntry3(6LL, 56LL, v4, (unsigned int)v50);
              v9 = -1073741801;
              goto LABEL_43;
            }
            v23 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v22, v20 + 360);
            v9 = v23;
            if ( v23 < 0 )
            {
              WdLogSingleEntry4(2LL, v4, (unsigned int)v50, this, v23);
LABEL_43:
              auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
              goto LABEL_45;
            }
            v24 = Path;
            if ( *((_DWORD *)Path + 28) != 254 )
              WdLogSingleEntry0(1LL);
            if ( *((_DWORD *)v24 + 29) != 254 )
              WdLogSingleEntry0(1LL);
            DMMVIDPNPRESENTPATH::Serialize(v24, v22[4]);
            memmove(&v22[4][1], Src, Size);
            v51 = 0LL;
            Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v37, (__int64)v22);
            auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
            DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v44);
            v3 = 0;
            v14 = v36 + 1;
            v36 = v14;
            if ( v14 >= v35 )
            {
              v12 = v40;
              v13 = (_QWORD *)v39[0];
              goto LABEL_32;
            }
          }
          WdLogSingleEntry4(2LL, v4, (unsigned int)v50, this, v19);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
LABEL_45:
          DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v44);
        }
        else
        {
LABEL_32:
          v25 = 1LL;
          if ( v12 > 1 )
            v25 = v12;
          v26 = 4 * v25 + 4;
          if ( v13 != v39 )
          {
            v27 = v13 - 1;
            while ( v27 )
            {
              v26 += v27[5];
              v28 = (_QWORD *)v27[1];
              v27 = v28 - 1;
              if ( v28 == v39 )
                v27 = 0LL;
            }
          }
          v29 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a3, v26);
          v9 = v29;
          if ( v29 >= 0 )
          {
            v30 = 1;
            *(_BYTE *)a3[4] = v40;
            v31 = (unsigned __int8 *)a3[4];
            if ( *v31 > 1u )
              v30 = *v31;
            v32 = &v31[4 * v30 + 4];
            if ( (_QWORD *)v39[0] != v39 )
            {
              v33 = v39[0] - 8LL;
              if ( v39[0] != 8LL )
              {
                do
                {
                  *(_DWORD *)(a3[4] + 4LL * v3 + 4) = (_DWORD)v32 - *((_DWORD *)a3 + 8);
                  memmove(v32, *(const void **)(v33 + 32), *(_QWORD *)(v33 + 40));
                  v32 += *(_QWORD *)(v33 + 40);
                  v34 = *(_QWORD **)(v33 + 8);
                  v33 = (__int64)(v34 - 1);
                  if ( v34 == v39 )
                    v33 = 0LL;
                  ++v3;
                }
                while ( v33 );
              }
            }
            if ( v3 != *(_BYTE *)a3[4] )
              WdLogSingleEntry0(1LL);
            v9 = 0;
          }
          else
          {
            WdLogSingleEntry4(2LL, a3, v4, this, v29);
          }
        }
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v37);
      }
      else
      {
        WdLogSingleEntry3(2LL, v4, this, NumPathsFromSource);
      }
      return v9;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
