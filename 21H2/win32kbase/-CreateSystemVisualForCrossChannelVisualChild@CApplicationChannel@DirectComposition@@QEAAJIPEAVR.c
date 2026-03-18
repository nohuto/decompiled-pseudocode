/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000232C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002580 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0002998 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0013E10 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014E40 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00161D4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C009B100 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // r14
  PVOID v7; // rdi
  __int64 Pool2; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v10; // rcx
  DirectComposition::CApplicationChannel *v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  PVOID BackTrace[20]; // [rsp+40h] [rbp-B8h] BYREF
  char v16; // [rsp+108h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741790;
  if ( v4 >= *((_QWORD *)this + 10) )
    return (unsigned int)-1073741790;
  _mm_lfence();
  if ( (v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7))) == 0 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 195LL) )
    return (unsigned int)-1073741811;
  v7 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63784344) == 0x63784344
    && (v14 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1668825924 )
    {
      if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    Pool2 = ExAllocatePool2(261LL, 424LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v7,
                               Pool2,
                               BackTrace) )
      {
LABEL_26:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)-1073741801;
      }
      goto LABEL_8;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v7,
                             Pool2,
                             BackTrace) )
      goto LABEL_26;
    Pool2 += 16LL;
  }
  else
  {
LABEL_6:
    Pool2 = ExAllocatePool2(261LL, 408LL);
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
LABEL_8:
  DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)Pool2);
  *(_QWORD *)Pool2 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
  *(_DWORD *)(Pool2 + 384) = 0;
  *(_QWORD *)(Pool2 + 400) = Pool2 + 392;
  *(_QWORD *)(Pool2 + 392) = Pool2 + 392;
  SystemResource = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)Pool2);
  if ( SystemResource >= 0 )
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       *((DirectComposition::CConnection **)this + 5),
                       0xC3u,
                       (struct ResourceHandle *)(Pool2 + 384));
  if ( SystemResource < 0
    || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                           this,
                           (struct DirectComposition::CResourceMarshaler *)Pool2),
        SystemResource < 0) )
  {
    (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)Pool2 + 88LL))(Pool2, this);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 80LL))(Pool2, 1LL);
  }
  else
  {
    v10 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 32);
    v11 = (DirectComposition::CApplicationChannel *)(Pool2 + 392);
    if ( *v10 != (DirectComposition::CApplicationChannel *)((char *)this + 248) )
      __fastfail(3u);
    *(_QWORD *)(Pool2 + 400) = v10;
    *(_QWORD *)v11 = (char *)this + 248;
    *v10 = v11;
    *((_QWORD *)this + 32) = v11;
    v12 = *(_QWORD *)Pool2;
    v16 = 0;
    SystemResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v12 + 224))(
                       Pool2,
                       this,
                       v6,
                       0LL,
                       0LL,
                       &v16);
    if ( SystemResource < 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(
        this,
        (struct DirectComposition::CResourceMarshaler *)Pool2);
    }
    else
    {
      if ( v16 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
          this,
          (struct DirectComposition::CResourceMarshaler *)Pool2);
      DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *(unsigned int *)(Pool2 + 384));
      *(_DWORD *)a3 = *(_DWORD *)(Pool2 + 384);
    }
  }
  return (unsigned int)SystemResource;
}
