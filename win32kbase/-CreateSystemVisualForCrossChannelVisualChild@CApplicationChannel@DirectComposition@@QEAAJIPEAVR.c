/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0007BE4
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0007780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0061AD0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069E1C (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C006A848 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A1B1C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00ABF10 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

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
