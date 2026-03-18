/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000887C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0008440 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0029000 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00302B4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0031650 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0032070 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C009CCD0 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CConnection **this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  unsigned __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  __int64 v8; // rbp
  DirectComposition::CVisualMarshaler *QuotaZInit; // rax
  DirectComposition::CVisualMarshaler *v10; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v12; // rcx
  DirectComposition::CApplicationChannel *v13; // rdx
  __int64 v14; // rax
  char v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
         (DirectComposition::CApplicationChannel *)this,
         a2);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 168LL))(v5);
    if ( v8 )
    {
      QuotaZInit = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            v7,
                                                            v6,
                                                            0x190uLL,
                                                            0x63784344u);
      v10 = QuotaZInit;
      if ( QuotaZInit )
      {
        DirectComposition::CVisualMarshaler::CVisualMarshaler(QuotaZInit);
        *(_QWORD *)v10 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *((_DWORD *)v10 + 94) = 0;
        *((_QWORD *)v10 + 49) = (char *)v10 + 384;
        *((_QWORD *)v10 + 48) = (char *)v10 + 384;
        SystemResource = DirectComposition::CVisualMarshaler::Initialize(v10);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             this[5],
                             0xC4u,
                             (DirectComposition::CVisualMarshaler *)((char *)v10 + 376));
        if ( SystemResource < 0
          || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                                 (DirectComposition::CApplicationChannel *)this,
                                 v10),
              SystemResource < 0) )
        {
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **))(*(_QWORD *)v10 + 192LL))(
            v10,
            this);
          (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v10 + 72LL))(v10, 1LL);
        }
        else
        {
          v12 = (DirectComposition::CApplicationChannel **)this[32];
          v13 = (DirectComposition::CVisualMarshaler *)((char *)v10 + 384);
          if ( *v12 != (DirectComposition::CApplicationChannel *)(this + 31) )
            __fastfail(3u);
          *((_QWORD *)v10 + 49) = v12;
          *(_QWORD *)v13 = this + 31;
          *v12 = v13;
          this[32] = v13;
          v14 = *(_QWORD *)v10;
          v16 = 0;
          SystemResource = (*(__int64 (__fastcall **)(DirectComposition::CVisualMarshaler *, DirectComposition::CConnection **, __int64, _QWORD, _QWORD, char *))(v14 + 288))(
                             v10,
                             this,
                             v8,
                             0LL,
                             0LL,
                             &v16);
          if ( SystemResource < 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v10);
          }
          else
          {
            if ( v16 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                (DirectComposition::CApplicationChannel *)this,
                v10);
            DirectComposition::CConnection::ReferenceSystemResource(this[5], *((unsigned int *)v10 + 94));
            *(_DWORD *)a3 = *((_DWORD *)v10 + 94);
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
