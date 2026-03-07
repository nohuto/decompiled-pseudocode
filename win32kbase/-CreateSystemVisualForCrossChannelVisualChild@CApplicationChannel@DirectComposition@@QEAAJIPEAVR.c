__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CConnection **this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  __int64 v9; // rbp
  DirectComposition::CVisualMarshaler *QuotaZInit; // rax
  DirectComposition::CVisualMarshaler *v11; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v13; // rcx
  DirectComposition::CApplicationChannel *v14; // rdx
  __int64 v15; // rax
  char v17; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( a2
    && v4 < (unsigned __int64)this[10]
    && (_mm_lfence(), (v6 = *(_QWORD *)((char *)this[7] + (_QWORD)this[11] * v4)) != 0) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
    if ( v9 )
    {
      QuotaZInit = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            v8,
                                                            v7,
                                                            0x190uLL,
                                                            0x63784344u);
      v11 = QuotaZInit;
      if ( QuotaZInit )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(QuotaZInit);
        *(_QWORD *)v11 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *((_DWORD *)v11 + 94) = 0;
        *((_QWORD *)v11 + 49) = (char *)v11 + 384;
        *((_QWORD *)v11 + 48) = (char *)v11 + 384;
        SystemResource = DirectComposition::CVisualMarshaler::Initialize(v11);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             this[5],
                             0xC4u,
                             (DirectComposition::CVisualMarshaler *)((char *)v11 + 376));
        if ( SystemResource < 0
          || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                                 (DirectComposition::CApplicationChannel *)this,
                                 v11),
              SystemResource < 0) )
        {
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **))(*(_QWORD *)v11 + 192LL))(
            v11,
            this);
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v11 + 72LL))(v11, 1LL);
        }
        else
        {
          v13 = (DirectComposition::CApplicationChannel **)this[32];
          v14 = (DirectComposition::CVisualMarshaler *)((char *)v11 + 384);
          if ( *v13 != (DirectComposition::CApplicationChannel *)(this + 31) )
            __fastfail(3u);
          *((_QWORD *)v11 + 49) = v13;
          *(_QWORD *)v14 = this + 31;
          *v13 = v14;
          this[32] = v14;
          v15 = *(_QWORD *)v11;
          v17 = 0;
          SystemResource = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **, __int64, _QWORD, _QWORD, char *))(v15 + 288))(
                             v11,
                             this,
                             v9,
                             0LL,
                             0LL,
                             &v17);
          if ( SystemResource < 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v11);
          }
          else
          {
            if ( v17 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                (DirectComposition::CApplicationChannel *)this,
                v11);
            DirectComposition::CConnection::ReferenceSystemResource(this[5], *((unsigned int *)v11 + 94));
            *(_DWORD *)a3 = *((_DWORD *)v11 + 94);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)SystemResource;
}
