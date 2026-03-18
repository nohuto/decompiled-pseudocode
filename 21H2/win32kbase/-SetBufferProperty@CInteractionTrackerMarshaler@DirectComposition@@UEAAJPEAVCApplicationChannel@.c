/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0230160
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C022FF68 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02300AC (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r12
  unsigned int v7; // edi
  struct DirectComposition::CApplicationChannel *v9; // r15
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _QWORD *v17; // rsi
  unsigned int v18; // ebp
  int v19; // eax
  size_t v20; // rsi
  unsigned int v21; // r14d
  char *v23; // rdx
  size_t v24; // r10
  __int64 v25; // rax
  __int64 Pool2; // r15
  __int64 v27; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v28; // rcx
  unsigned __int64 v29; // r14
  __int64 Quota; // rax
  __int64 v31; // rbp
  int v32; // ecx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r15
  PVOID Src; // [rsp+20h] [rbp-E8h] BYREF
  int v43; // [rsp+28h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF
  char v46; // [rsp+120h] [rbp+18h]

  v6 = a6;
  v7 = 0;
  v9 = a2;
  *a6 = 0;
  v11 = a3 - 21;
  if ( v11 )
  {
    v12 = v11 - 20;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 21;
            if ( v16 )
            {
              if ( v16 == 1 && Size == 36 )
              {
                *(_OWORD *)((char *)this + 420) = *a4;
                *(_OWORD *)((char *)this + 436) = a4[1];
                *((_DWORD *)this + 113) = *((_DWORD *)a4 + 8);
                *a6 = 1;
                *((_DWORD *)this + 4) &= ~0x1000000u;
                return v7;
              }
            }
            else if ( Size == 12 )
            {
              v17 = (_QWORD *)((char *)this + 376);
              v18 = *((_DWORD *)this + 100);
              v19 = *((_DWORD *)a4 + 2);
              Src = *(PVOID *)a4;
              v43 = v19;
              v7 = DirectComposition::CDCompDynamicArrayBase::Grow(
                     (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 376),
                     1LL,
                     0x72694344u);
              if ( (v7 & 0x80000000) == 0 )
              {
                memmove((void *)(*v17 + v17[4] * v18), &Src, v17[4]);
                *a6 = 1;
                return v7;
              }
              goto LABEL_19;
            }
            goto LABEL_18;
          }
          v20 = Size;
          if ( Size <= 0x1000 && (Size & 3) == 0 )
          {
            v21 = 2;
            goto LABEL_28;
          }
LABEL_18:
          v7 = -1073741811;
          goto LABEL_19;
        }
        v20 = Size;
        if ( Size > 0x1000 )
          goto LABEL_18;
        v21 = 3;
        if ( (Size & 3) != 0 )
          goto LABEL_18;
      }
      else
      {
        v20 = Size;
        if ( Size > 0x1000 || (Size & 3) != 0 )
          goto LABEL_18;
        v21 = 1;
      }
    }
    else
    {
      v20 = Size;
      if ( Size > 0x1000 || (Size & 3) != 0 )
        goto LABEL_18;
      v21 = 0;
    }
LABEL_28:
    v23 = (char *)*((_QWORD *)this + v21 + 34);
    if ( v23 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v23);
      *((_QWORD *)this + v21 + 34) = 0LL;
    }
    Src = gpLeakTrackingAllocator;
    v24 = v20;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72694344) == 0x72694344 )
    {
      v25 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v25) != 1919501124 )
        {
          if ( ++v25 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_34;
        }
        v46 = 0;
        if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
        {
          v46 = 1;
          v24 = v20 + 16;
        }
        Pool2 = ExAllocatePool2(261LL, v24);
        if ( !Pool2 )
          goto LABEL_42;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v46 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)Src,
                 (const void *)Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
LABEL_35:
            *((_QWORD *)this + v21 + 34) = Pool2;
            if ( !Pool2 )
              goto LABEL_36;
LABEL_49:
            memmove((void *)Pool2, a4, v20);
            *((_QWORD *)this + v21 + 38) = v20;
            *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                                      v27,
                                                      v21);
            *a6 = 1;
            return v7;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)Src,
                    Pool2,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          *((_QWORD *)this + v21 + 34) = Pool2;
          goto LABEL_49;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_42:
        *((_QWORD *)this + v21 + 34) = 0LL;
LABEL_36:
        v7 = -1073741801;
LABEL_37:
        v9 = a2;
        goto LABEL_19;
      }
    }
LABEL_34:
    Pool2 = ExAllocatePool2(261LL, v20);
    goto LABEL_35;
  }
  if ( !a4 && *((_DWORD *)this + 92) )
  {
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    goto LABEL_54;
  }
  if ( Size > 0x1000 || (Size & 7) != 0 )
    goto LABEL_18;
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  v29 = Size >> 3;
  if ( !(unsigned int)(Size >> 3) )
    goto LABEL_54;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v28, 260LL, 16LL * (unsigned int)v29, 1919501124);
  *((_QWORD *)this + 45) = Quota;
  if ( !Quota )
  {
    v7 = -1073741801;
LABEL_19:
    if ( *((_QWORD *)this + 45) )
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, v9);
    return v7;
  }
  v31 = 0LL;
  while ( (unsigned int)v31 < (unsigned int)v29 )
  {
    v32 = *((_DWORD *)a4 + 2 * v31);
    v33 = (unsigned int)(v32 - 1);
    if ( !v32 )
      goto LABEL_18;
    if ( v33 >= *((_QWORD *)v9 + 10) )
      goto LABEL_18;
    _mm_lfence();
    v34 = *((_QWORD *)v9 + 7);
    v35 = v33 * *((_QWORD *)v9 + 11);
    v36 = *(_QWORD *)(v35 + v34);
    if ( !v36
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v36 + 96LL))(*(_QWORD *)(v35 + v34), 103LL) )
    {
      goto LABEL_18;
    }
    *(_QWORD *)(*((_QWORD *)this + 45) + 16LL * (unsigned int)v31) = v36;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 45)
                                                                                            + 16LL * (unsigned int)v31));
    ++*((_DWORD *)this + 92);
    v37 = *((_DWORD *)a4 + 2 * v31 + 1);
    if ( !v37 )
      goto LABEL_72;
    v38 = (unsigned int)(v37 - 1);
    if ( v38 >= *((_QWORD *)v9 + 10)
      || (_mm_lfence(), v39 = *((_QWORD *)v9 + 7), v40 = v38 * *((_QWORD *)v9 + 11), (v41 = *(_QWORD *)(v40 + v39)) == 0)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v41 + 96LL))(*(_QWORD *)(v40 + v39), 87LL) )
    {
      v7 = -1073741811;
LABEL_72:
      *(_QWORD *)(*((_QWORD *)this + 45) + 16LL * (unsigned int)v31 + 8) = 0LL;
      goto LABEL_73;
    }
    *(_QWORD *)(*((_QWORD *)this + 45) + 16LL * (unsigned int)v31 + 8) = v41;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 45)
                                                                                            + 16LL * (unsigned int)v31
                                                                                            + 8));
LABEL_73:
    v9 = a2;
    v31 = (unsigned int)(v31 + 1);
    if ( (v7 & 0x80000000) != 0 )
      goto LABEL_37;
  }
  v6 = a6;
LABEL_54:
  *v6 = 1;
  *((_DWORD *)this + 4) &= ~0x800u;
  return v7;
}
