__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // rbp
  struct DirectComposition::CResourceMarshaler *v9; // rdi
  unsigned __int64 v12; // rcx
  __int64 v14; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  struct DirectComposition::CResourceMarshaler *v16; // r15
  unsigned __int64 v17; // rdx
  __int64 CrossChannelVisualChildNoRef; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  DirectComposition::CVisualMarshaler *QuotaZInit; // rax
  struct DirectComposition::CResourceMarshaler *v23; // r14
  int v24; // ebx
  __int64 v25; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  DirectComposition::CResourceMarshaler *v29; // rax
  char v30; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v12 = (unsigned int)(a2 - 1);
  if ( !a2
    || v12 >= *((_QWORD *)a1 + 10)
    || (_mm_lfence(), (v14 = *(_QWORD *)(*((_QWORD *)a1 + 11) * v12 + *((_QWORD *)a1 + 7))) == 0) )
  {
    v24 = -1073741790;
    goto LABEL_22;
  }
  v16 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 168LL))(v14);
  if ( !v16 )
    goto LABEL_27;
  if ( a7 )
  {
    v19 = (unsigned int)(a7 - 1);
    if ( v19 >= *((_QWORD *)a1 + 10) )
      goto LABEL_27;
    _mm_lfence();
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 11) * v19 + *((_QWORD *)a1 + 7));
    if ( !v20 )
      goto LABEL_27;
    CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 168LL))(v20);
  }
  else
  {
    v17 = a8;
    if ( !a8 )
      goto LABEL_12;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v16);
  }
  v8 = CrossChannelVisualChildNoRef;
  if ( !CrossChannelVisualChildNoRef )
    goto LABEL_27;
LABEL_12:
  if ( a4 )
  {
    v27 = (unsigned int)(a4 - 1);
    if ( v27 < *((_QWORD *)a1 + 10) )
    {
      _mm_lfence();
      v28 = *(_QWORD *)(*((_QWORD *)a1 + 11) * v27 + *((_QWORD *)a1 + 7));
      if ( v28 )
      {
        v29 = (DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 168LL))(v28);
        v9 = v29;
        if ( v29 )
        {
          DirectComposition::CResourceMarshaler::AddRef(v29);
LABEL_19:
          v25 = *(_QWORD *)v16;
          v30 = 0;
          v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(v25 + 288))(
                  v16,
                  a1,
                  v9,
                  a6,
                  v8,
                  &v30);
          if ( v24 >= 0 && v30 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v16);
          goto LABEL_22;
        }
      }
    }
LABEL_27:
    v24 = -1073741811;
    goto LABEL_22;
  }
  v21 = a5;
  if ( !a5 )
    goto LABEL_27;
  QuotaZInit = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                        v15,
                                                        v17,
                                                        0x180uLL,
                                                        0x70784344u);
  v23 = QuotaZInit;
  if ( !QuotaZInit )
  {
    v24 = -1073741801;
    goto LABEL_22;
  }
  DirectComposition::CVisualMarshaler::CVisualMarshaler(QuotaZInit);
  *(_QWORD *)v23 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
  v24 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(v23, a1, v21, a3);
  if ( v24 < 0 || (v24 = DirectComposition::CApplicationChannel::RegisterResource(a1, v23), v24 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v23 + 192LL))(
      v23,
      a1);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v23 + 72LL))(v23, 1LL);
  }
  else
  {
    v9 = v23;
  }
  if ( v24 >= 0 )
    goto LABEL_19;
LABEL_22:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v9);
  return (unsigned int)v24;
}
