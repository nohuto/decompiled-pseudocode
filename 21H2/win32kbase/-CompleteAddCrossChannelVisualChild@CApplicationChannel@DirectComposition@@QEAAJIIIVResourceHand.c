/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0002720
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0002580 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0002998 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00029E8 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0002CDC (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00161D4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 CrossChannelVisualChildNoRef; // r15
  unsigned __int64 v9; // r10
  struct DirectComposition::CResourceMarshaler *v10; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DirectComposition::CResourceMarshaler *v16; // r14
  bool v17; // zf
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  PVOID v22; // rbp
  __int64 Pool2; // rdi
  int v24; // ebx
  __int64 v25; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  DirectComposition::CResourceMarshaler *v30; // rbx
  __int64 v31; // rax
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF
  char v33; // [rsp+118h] [rbp+10h] BYREF

  CrossChannelVisualChildNoRef = 0LL;
  v9 = (unsigned int)(a2 - 1);
  v10 = 0LL;
  if ( !a2 )
    goto LABEL_29;
  if ( v9 >= *((_QWORD *)a1 + 10) )
    goto LABEL_29;
  _mm_lfence();
  v14 = *((_QWORD *)a1 + 7);
  v15 = v9 * *((_QWORD *)a1 + 11);
  v16 = *(struct DirectComposition::CResourceMarshaler **)(v15 + v14);
  if ( !v16 )
    goto LABEL_29;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v16 + 96LL))(*(_QWORD *)(v15 + v14), 195LL) )
    goto LABEL_30;
  if ( a7 )
  {
    v18 = (unsigned int)(a7 - 1);
    if ( v18 >= *((_QWORD *)a1 + 10) )
      goto LABEL_29;
    _mm_lfence();
    v19 = *((_QWORD *)a1 + 7);
    v20 = v18 * *((_QWORD *)a1 + 11);
    CrossChannelVisualChildNoRef = *(_QWORD *)(v20 + v19);
    if ( !CrossChannelVisualChildNoRef )
      goto LABEL_29;
    v17 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 96LL))(
            *(_QWORD *)(v20 + v19),
            195LL) == 0;
  }
  else
  {
    if ( !a8 )
      goto LABEL_12;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v16);
    v17 = CrossChannelVisualChildNoRef == 0;
  }
  if ( v17 )
    goto LABEL_30;
LABEL_12:
  if ( a4 )
  {
    v27 = (unsigned int)(a4 - 1);
    if ( v27 < *((_QWORD *)a1 + 10) )
    {
      _mm_lfence();
      v28 = *((_QWORD *)a1 + 7);
      v29 = v27 * *((_QWORD *)a1 + 11);
      v30 = *(DirectComposition::CResourceMarshaler **)(v29 + v28);
      if ( v30 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v30 + 96LL))(*(_QWORD *)(v29 + v28), 195LL) )
        {
          v10 = v30;
          DirectComposition::CResourceMarshaler::AddRef(v30);
LABEL_21:
          v25 = *(_QWORD *)v16;
          v33 = 0;
          v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(v25 + 224))(
                  v16,
                  a1,
                  v10,
                  a6,
                  CrossChannelVisualChildNoRef,
                  &v33);
          if ( v24 >= 0 && v33 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v16);
          goto LABEL_24;
        }
LABEL_30:
        v24 = -1073741811;
        goto LABEL_24;
      }
    }
LABEL_29:
    v24 = -1073741790;
    goto LABEL_24;
  }
  v21 = a5;
  if ( !a5 )
    goto LABEL_30;
  v22 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70784344) != 0x70784344
    || (v31 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_15:
    Pool2 = ExAllocatePool2(261LL, 392LL);
LABEL_16:
    if ( !Pool2 )
    {
LABEL_39:
      v24 = -1073741801;
      goto LABEL_24;
    }
    goto LABEL_17;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v31) != 1886929732 )
  {
    if ( ++v31 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_15;
  }
  Pool2 = ExAllocatePool2(261LL, 408LL);
  if ( !Pool2 )
    goto LABEL_39;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v22,
                             Pool2,
                             BackTrace) )
      goto LABEL_38;
    Pool2 += 16LL;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v22,
                           Pool2,
                           BackTrace) )
  {
LABEL_38:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_39;
  }
LABEL_17:
  memset((void *)Pool2, 0, 0x188uLL);
  DirectComposition::CVisualMarshaler::CVisualMarshaler((DirectComposition::CVisualMarshaler *)Pool2);
  *(_QWORD *)Pool2 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
  v24 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(Pool2, a1, v21, a3);
  if ( v24 < 0
    || (v24 = DirectComposition::CApplicationChannel::RegisterResource(
                a1,
                (struct DirectComposition::CResourceMarshaler *)Pool2),
        v24 < 0) )
  {
    (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)Pool2 + 88LL))(Pool2, a1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 80LL))(Pool2, 1LL);
  }
  else
  {
    v10 = (struct DirectComposition::CResourceMarshaler *)Pool2;
  }
  if ( v24 >= 0 )
    goto LABEL_21;
LABEL_24:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v10);
  return (unsigned int)v24;
}
