/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C0065F60 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C005A9B8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C005AF8C (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C005C424 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0068A9C (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C0091C00 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A13E8 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00A1498 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A1588 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00A1DC0 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1C00B8928 (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00B8A3C (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C00BA090 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C016624C (McTemplateK0qp_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C016691C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C0167BB8 (McTemplateK0x_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1C019ADF0 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C024AB04 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C024AEE4 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C024AFAC (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C024B24C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1C024BA98 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        unsigned __int64 this,
        const unsigned __int64 *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r10
  unsigned __int64 *v7; // r11
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  __int64 Quota; // rsi
  int ExternalSharedResource; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  struct DirectComposition::CResourceMarshaler *v15; // rsi
  bool v16; // zf
  unsigned __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned __int64 v19; // rdx
  char v20; // al
  int v21; // eax
  int v22; // edx
  unsigned int v23; // r15d
  int v24; // r14d
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r10
  int v28; // eax
  unsigned int *v29; // rdx
  unsigned __int64 *v30; // r11
  __int64 v31; // r10
  __int64 v32; // r8
  unsigned __int64 v33; // rsi
  unsigned int v34; // esi
  unsigned int v35; // r15d
  struct DirectComposition::CResourceMarshaler *v36; // r14
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r13
  size_t *v40; // r10
  struct DirectComposition::CResourceMarshaler *v41; // r14
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r13
  DirectComposition::CApplicationChannel *v45; // rcx
  unsigned __int64 v46; // r15
  unsigned __int64 v48; // r15
  __int64 v49; // rax
  unsigned int v50; // esi
  unsigned __int64 v51; // r14
  __int64 v52; // r14
  int v53; // eax
  int v54; // esi
  unsigned int v55; // r15d
  int v56; // ebx
  __int64 v57; // r14
  unsigned __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // rbx
  DirectComposition::CApplicationChannel *v62; // rsi
  int v63; // eax
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  __int64 i; // r9
  struct DirectComposition::CResourceMarshaler *v67; // r11
  unsigned __int64 v68; // r10
  __int64 v69; // rdx
  unsigned __int64 v70; // r14
  __int64 v71; // r8
  unsigned __int64 v72; // rdx
  struct DirectComposition::CResourceMarshaler *v73; // r13
  unsigned __int64 v74; // r15
  NSInstrumentation::CLeakTrackingAllocator *v75; // r14
  __int64 v76; // r9
  int v77; // ecx
  unsigned __int64 v78; // rdx
  DirectComposition::CApplicationChannel *v79; // r14
  int v80; // eax
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  struct DirectComposition::CResourceMarshaler *v83; // rsi
  unsigned __int64 v84; // rdx
  unsigned int v85; // r8d
  void *v86; // r9
  unsigned int v87; // edx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // kr00_8
  char *v90; // rax
  char *v91; // rsi
  _QWORD *v92; // r14
  DirectComposition::CApplicationChannel *v93; // rcx
  __int64 v94; // r8
  void *v95; // rdx
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // kr10_8
  char *v98; // rax
  char *v99; // r14
  _QWORD *v100; // r15
  DirectComposition::CApplicationChannel *v101; // rcx
  __int64 v102; // r8
  void *v103; // rdx
  __int64 v104; // rax
  unsigned __int64 v105; // kr20_8
  unsigned __int64 v106; // kr30_8
  char *v107; // r13
  unsigned int v108; // r15d
  char v109; // al
  unsigned int *v110; // r10
  const unsigned __int64 *v111; // r11
  unsigned __int64 v112; // r8
  _QWORD *Pool2; // rax
  unsigned int v114; // edx
  char v115; // r13
  const struct tagMsgRoutingInfo *v116; // r9
  int v117; // r8d
  char v118; // r9
  char v119[4]; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned int v120; // [rsp+64h] [rbp-1A4h]
  char v121[8]; // [rsp+68h] [rbp-1A0h] BYREF
  const unsigned __int64 *v122; // [rsp+70h] [rbp-198h]
  char v123; // [rsp+78h] [rbp-190h] BYREF
  char v124; // [rsp+79h] [rbp-18Fh] BYREF
  char v125; // [rsp+7Ah] [rbp-18Eh] BYREF
  char v126; // [rsp+7Bh] [rbp-18Dh] BYREF
  char v127[4]; // [rsp+7Ch] [rbp-18Ch] BYREF
  unsigned __int64 v128; // [rsp+80h] [rbp-188h]
  unsigned __int64 v129; // [rsp+88h] [rbp-180h]
  struct DirectComposition::CResourceMarshaler *v130; // [rsp+90h] [rbp-178h]
  unsigned __int64 v131; // [rsp+98h] [rbp-170h]
  unsigned int v132; // [rsp+A0h] [rbp-168h] BYREF
  unsigned __int64 v133; // [rsp+A8h] [rbp-160h]
  struct DirectComposition::CResourceMarshaler *v134; // [rsp+B0h] [rbp-158h] BYREF
  unsigned __int64 v135; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v136; // [rsp+C0h] [rbp-148h] BYREF
  _QWORD v137[3]; // [rsp+C8h] [rbp-140h] BYREF
  _QWORD Src[3]; // [rsp+E0h] [rbp-128h] BYREF
  struct DirectComposition::CResourceMarshaler *v139; // [rsp+F8h] [rbp-110h] BYREF
  _QWORD v140[4]; // [rsp+100h] [rbp-108h] BYREF
  _QWORD v141[2]; // [rsp+120h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+130h] [rbp-D8h] BYREF
  DirectComposition::CApplicationChannel *v143; // [rsp+210h] [rbp+8h]

  v143 = (DirectComposition::CApplicationChannel *)this;
  v5 = a4;
  v7 = (unsigned __int64 *)a2;
  v122 = a2;
  v8 = this;
  v133 = this;
  v9 = this;
  v131 = this;
  Quota = 0LL;
  ExternalSharedResource = 0;
  while ( ExternalSharedResource >= 0 && a3 >= 4 )
  {
    ++*a5;
    v12 = *(_DWORD *)v7;
    LODWORD(v128) = v12;
    switch ( v12 )
    {
      case 8u:
        if ( a3 < 0x18 )
          goto LABEL_368;
        v122 = v7 + 3;
        a3 -= 24;
        v17 = v7[2];
        v18 = *((_DWORD *)v7 + 2);
        this = *((unsigned int *)v7 + 1);
        v121[0] = 0;
        v19 = (unsigned int)(this - 1);
        if ( !(_DWORD)this )
          goto LABEL_238;
        if ( v19 >= *(_QWORD *)(v8 + 80) )
          goto LABEL_238;
        _mm_lfence();
        v15 = *(struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)(v8 + 88) * v19 + *(_QWORD *)(v8 + 56));
        if ( !v15 )
          goto LABEL_238;
        ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v15 + 208LL))(
                                   v15,
                                   v8,
                                   v18,
                                   v17,
                                   v121);
        if ( ExternalSharedResource >= 0
          && *((_QWORD *)v15 + 5)
          && DirectComposition::CApplicationChannel::UnbindAnimation(
               (DirectComposition::CApplicationChannel *)v8,
               v15,
               v18) )
        {
          v20 = 1;
          v121[0] = 1;
        }
        else
        {
          v20 = v121[0];
        }
        if ( ExternalSharedResource >= 0 )
        {
          v16 = v20 == 0;
LABEL_23:
          if ( !v16 )
          {
            v21 = *((_DWORD *)v15 + 4);
            if ( (v21 & 2) == 0 )
            {
              if ( (v21 & 1) != 0 )
              {
                if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *((unsigned int *)v15 + 9),
                                        170LL) )
                  this = 424LL;
                else
                  this = 416LL;
                *((_QWORD *)v15 + 1) = *(_QWORD *)(this + v9);
                *(_QWORD *)(this + v9) = v15;
              }
              *((_DWORD *)v15 + 4) |= 2u;
              *(_BYTE *)(v8 + 240) |= 1u;
            }
          }
        }
        break;
      case 0xDu:
        if ( a3 < 0x10 )
        {
          ExternalSharedResource = -1073741811;
          break;
        }
        v122 = v7 + 2;
        a3 -= 16;
        v22 = *((_DWORD *)v7 + 3);
        v23 = *((_DWORD *)v7 + 2);
        v24 = *((_DWORD *)v7 + 1);
        v25 = 0LL;
        this = (unsigned int)(v24 - 1);
        if ( v24
          && this < *(_QWORD *)(v8 + 80)
          && (_mm_lfence(),
              v26 = *(_QWORD *)(v8 + 88),
              v27 = *(_QWORD *)(v8 + 56),
              this *= v26,
              (Quota = *(_QWORD *)(this + v27)) != 0) )
        {
          if ( v22
            && ((this = (unsigned int)(v22 - 1), this >= *(_QWORD *)(v8 + 80))
             || (this *= v26, (v25 = *(_QWORD *)(this + v27)) == 0)) )
          {
            ExternalSharedResource = -1073741811;
          }
          else
          {
            v127[0] = 0;
            ExternalSharedResource = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, char *))(*(_QWORD *)Quota + 248LL))(
                                       Quota,
                                       v8,
                                       v23,
                                       v25,
                                       v127);
            if ( ExternalSharedResource >= 0 )
            {
              if ( v127[0] )
              {
                v28 = *(_DWORD *)(Quota + 16);
                if ( (v28 & 2) == 0 )
                {
                  if ( (v28 & 1) != 0 )
                  {
                    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                            *(unsigned int *)(Quota + 36),
                                            170LL) )
                      this = 424LL;
                    else
                      this = 416LL;
                    v81 = v131;
                    *(_QWORD *)(Quota + 8) = *(_QWORD *)(this + v131);
                    *(_QWORD *)(this + v81) = Quota;
                  }
                  *(_DWORD *)(Quota + 16) |= 2u;
                  *(_BYTE *)(v8 + 240) |= 1u;
                }
              }
            }
          }
        }
        else
        {
          ExternalSharedResource = -1073741790;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
          && ExternalSharedResource >= 0
          && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                *(unsigned int *)(Quota + 36),
                                129LL) )
        {
          McTemplateK0qqqqq_EtwWriteTransfer(
            this,
            (unsigned int)&DCompResourcePropertyUpdate,
            v117,
            *(_DWORD *)(v8 + 28),
            *(_DWORD *)(Quota + 32),
            v24,
            v118,
            v23);
          v9 = v131;
          break;
        }
        goto LABEL_40;
      case 0xCu:
        v29 = (unsigned int *)v7;
        if ( a3 < 0x10 )
        {
          ExternalSharedResource = -1073741811;
          break;
        }
        v30 = v7 + 2;
        v122 = v30;
        a3 -= 16;
        v31 = v29[3];
        this = ((_DWORD)v31 + 3) & 0xFFFFFFFC;
        if ( (unsigned int)this < (unsigned int)v31 || a3 < (unsigned int)this )
        {
LABEL_368:
          ExternalSharedResource = -1073741811;
          break;
        }
        v122 = (unsigned __int64 *)((char *)v30 + (unsigned int)this);
        a3 -= this;
        v32 = v29[2];
        this = v29[1];
        v33 = (unsigned int)(this - 1);
        if ( !(_DWORD)this
          || v33 >= *(_QWORD *)(v8 + 80)
          || (_mm_lfence(),
              (v15 = *(struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)(v8 + 88) * v33 + *(_QWORD *)(v8 + 56))) == 0LL) )
        {
LABEL_238:
          ExternalSharedResource = -1073741790;
          break;
        }
        v126 = 0;
        ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned __int64, __int64, unsigned __int64 *, __int64, char *))(*(_QWORD *)v15 + 240LL))(
                                   v15,
                                   v8,
                                   v32,
                                   v30,
                                   v31,
                                   &v126);
        if ( ExternalSharedResource >= 0 )
        {
          v16 = v126 == 0;
          goto LABEL_23;
        }
        break;
      default:
        switch ( v12 )
        {
          case 0u:
            v129 = 0LL;
            if ( a3 >= 0x18 && v5 )
            {
              v122 = v7 + 3;
              a3 -= 24;
              v107 = (char *)v7[1];
              v108 = *((_DWORD *)v7 + 4);
              v120 = v108;
              if ( !v108 )
                ExternalSharedResource = -1073741811;
              if ( ExternalSharedResource >= 0 )
              {
                Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                          (NSInstrumentation::CLeakTrackingAllocator *)this,
                          260LL,
                          v108,
                          0x66624344u);
                v129 = Quota;
                if ( Quota )
                {
                  if ( &v107[v108] < v107 || (unsigned __int64)&v107[v108] > MmUserProbeAddress )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove((void *)Quota, v107, v108);
                  ExternalSharedResource = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
                                             v143,
                                             (void *)Quota,
                                             v108,
                                             0,
                                             a5);
                }
                else
                {
                  ExternalSharedResource = -1073741801;
                }
              }
              v9 = v131;
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            if ( Quota )
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Quota);
            goto LABEL_25;
          case 1u:
            this = (unsigned __int64)v7;
            if ( a3 < 0x10 )
              goto LABEL_368;
            v34 = *((_DWORD *)v7 + 2);
            LODWORD(v128) = v34;
            if ( v34 - 1 > 0xCC )
              goto LABEL_368;
            v122 = v7 + 2;
            a3 -= 16;
            if ( *((_DWORD *)v7 + 3) )
            {
              ExternalSharedResource = DirectComposition::CApplicationChannel::CreateExternalSharedResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         v34);
              goto LABEL_25;
            }
            v35 = *((_DWORD *)v7 + 1);
            v120 = v35;
            v130 = 0LL;
            v134 = 0LL;
            ExternalSharedResource = DirectComposition::CApplicationChannel::CreatePrivateMarshaler(
                                       (DirectComposition::CApplicationChannel *)v8,
                                       v34,
                                       &v134);
            if ( ExternalSharedResource < 0 )
              goto LABEL_69;
            v36 = v134;
            v129 = (unsigned __int64)v134;
            ExternalSharedResource = 0;
            if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v134 + 16LL))(v134) )
              ExternalSharedResource = DirectComposition::CConnection::AcquireShellResourceAccess(*(DirectComposition::CConnection **)(v8 + 40));
            if ( ExternalSharedResource < 0 )
              goto LABEL_284;
            ExternalSharedResource = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))v36)(v36);
            if ( ExternalSharedResource < 0 )
              goto LABEL_284;
            ExternalSharedResource = 0;
            this = *(_QWORD *)(v8 + 136);
            if ( *(_QWORD *)(v8 + 152) >= this )
            {
              v37 = *(_QWORD *)(v8 + 136);
              v38 = this + 1;
              if ( this + 1 < this )
              {
                ExternalSharedResource = -1073741675;
                v38 = -1LL;
              }
              if ( ExternalSharedResource < 0 )
                goto LABEL_283;
              v39 = *(_QWORD *)(v8 + 128);
              if ( v38 <= v39 )
                goto LABEL_62;
              if ( !v39 )
                v39 = 64LL;
              do
              {
                if ( v39 >= v38 || v39 >= 0x400 )
                  break;
                v106 = v39;
                v137[1] = (v39 * (unsigned __int128)2uLL) >> 64;
                v39 *= 2LL;
                if ( is_mul_ok(v106, 2uLL) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  ExternalSharedResource = -1073741675;
                  v39 = -1LL;
                }
              }
              while ( ExternalSharedResource >= 0 );
              while ( ExternalSharedResource >= 0 )
              {
                if ( v39 >= v38 )
                  break;
                if ( v39 + 1024 < v39 )
                {
                  ExternalSharedResource = -1073741675;
                  v39 = -1LL;
                }
                else
                {
                  v39 += 1024LL;
                  ExternalSharedResource = 0;
                }
              }
              v96 = 0LL;
              this = (unsigned __int64)v143;
              if ( ExternalSharedResource >= 0 )
              {
                v97 = *((_QWORD *)v143 + 18);
                v96 = v39 * v97;
                v137[2] = (v39 * (unsigned __int128)v97) >> 64;
                if ( is_mul_ok(v39, v97) )
                {
                  ExternalSharedResource = 0;
                }
                else
                {
                  v96 = -1LL;
                  ExternalSharedResource = -1073741675;
                }
              }
              if ( ExternalSharedResource < 0 )
              {
LABEL_233:
                v35 = v120;
                v36 = (struct DirectComposition::CResourceMarshaler *)v129;
LABEL_62:
                v8 = (unsigned __int64)v143;
                if ( ExternalSharedResource < 0 )
                  goto LABEL_283;
                ++*((_QWORD *)v143 + 17);
              }
              else
              {
                if ( *((_BYTE *)v143 + 120) )
                  v98 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v143, 260LL, v96, 0x746C4344u);
                else
                  v98 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                  gpLeakTrackingAllocator,
                                  260LL,
                                  v96,
                                  0x746C4344u);
                v99 = v98;
                if ( v98 )
                {
                  v100 = (_QWORD *)(v133 + 144);
                  v101 = v143;
                  v102 = *((_QWORD *)v143 + 17);
                  if ( v102 )
                  {
                    memmove(v98, *((const void **)v143 + 14), *v100 * v102);
                    v101 = v143;
                  }
                  memset(&v99[*((_QWORD *)v101 + 17) * *v100], 0, *v100 * (v39 - *((_QWORD *)v101 + 17)));
                  v103 = (void *)*((_QWORD *)v143 + 14);
                  if ( v103 )
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v103);
                  *((_QWORD *)v143 + 14) = v99;
                  *((_QWORD *)v143 + 16) = v39;
                  goto LABEL_233;
                }
LABEL_283:
                ExternalSharedResource = -1073741801;
                v36 = (struct DirectComposition::CResourceMarshaler *)v129;
                v35 = v120;
                v8 = (unsigned __int64)v143;
              }
              v40 = (size_t *)(v133 + 144);
              goto LABEL_65;
            }
            v37 = *(_QWORD *)(v8 + 160);
            v40 = (size_t *)(v8 + 144);
            v65 = *(_QWORD *)(v8 + 144);
            for ( i = *(_QWORD *)(v8 + 112); *(_QWORD *)(v65 * v37 + i); v37 = (v37 + 1) % this )
              ;
            *(_QWORD *)(v8 + 160) = (v37 + 1) % this;
LABEL_65:
            if ( ExternalSharedResource >= 0 )
            {
              Src[0] = v36;
              memmove((void *)(*(_QWORD *)(v8 + 112) + *v40 * v37), Src, *v40);
              *((_DWORD *)v36 + 8) = v37 + 1;
              ++*(_QWORD *)(v8 + 152);
              if ( *(int *)(v8 + 24) <= 2 )
              {
                *((_QWORD *)v36 + 1) = *(_QWORD *)(v8 + 408);
                *(_QWORD *)(v8 + 408) = v36;
              }
            }
            v34 = v128;
            if ( ExternalSharedResource < 0 )
LABEL_284:
              (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v36 + 72LL))(
                v36,
                1LL);
LABEL_69:
            if ( ExternalSharedResource < 0 )
              break;
            if ( v34 == 2 )
            {
              v104 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v134 + 80LL))(v134);
              DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
                (DirectComposition::CApplicationChannel *)v8,
                *(struct DirectComposition::CAnimationTimeList **)(v104 + 80));
            }
            v41 = v134;
            v130 = v134;
            ExternalSharedResource = 0;
            v42 = v35;
            v129 = v35;
            if ( v35 )
            {
              v43 = *(_QWORD *)(v8 + 80);
              if ( v35 > v43 )
              {
                v44 = v35 - v43;
                v45 = v143;
                v46 = *((_QWORD *)v143 + 9);
                if ( v42 <= v46 )
                  goto LABEL_75;
                if ( !v46 )
                  v46 = 64LL;
                do
                {
                  if ( v46 >= v42 || v46 >= 0x400 )
                    break;
                  v105 = v46;
                  Src[1] = (v46 * (unsigned __int128)2uLL) >> 64;
                  v46 *= 2LL;
                  if ( is_mul_ok(v105, 2uLL) )
                  {
                    ExternalSharedResource = 0;
                  }
                  else
                  {
                    ExternalSharedResource = -1073741675;
                    v46 = -1LL;
                  }
                }
                while ( ExternalSharedResource >= 0 );
                while ( ExternalSharedResource >= 0 )
                {
                  if ( v46 >= v42 )
                    break;
                  if ( v46 + 1024 < v46 )
                  {
                    ExternalSharedResource = -1073741675;
                    v46 = -1LL;
                  }
                  else
                  {
                    v46 += 1024LL;
                    ExternalSharedResource = 0;
                  }
                }
                v88 = 0LL;
                if ( ExternalSharedResource >= 0 )
                {
                  v89 = *((_QWORD *)v143 + 11);
                  v88 = v46 * v89;
                  Src[2] = (v46 * (unsigned __int128)v89) >> 64;
                  if ( is_mul_ok(v46, v89) )
                  {
                    ExternalSharedResource = 0;
                  }
                  else
                  {
                    v88 = -1LL;
                    ExternalSharedResource = -1073741675;
                  }
                }
                if ( ExternalSharedResource < 0 )
                {
LABEL_215:
                  v41 = v130;
                  LODWORD(v42) = v129;
LABEL_75:
                  if ( ExternalSharedResource < 0 )
                    goto LABEL_291;
                  *((_QWORD *)v45 + 10) += v44;
                }
                else
                {
                  if ( *((_BYTE *)v143 + 64) )
                    v90 = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                    v143,
                                    260LL,
                                    v88,
                                    0x746C4344u);
                  else
                    v90 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                    gpLeakTrackingAllocator,
                                    260LL,
                                    v88,
                                    0x746C4344u);
                  v91 = v90;
                  if ( v90 )
                  {
                    v92 = (_QWORD *)(v133 + 88);
                    v93 = v143;
                    v94 = *((_QWORD *)v143 + 10);
                    if ( v94 )
                    {
                      memmove(v90, *((const void **)v143 + 7), *v92 * v94);
                      v93 = v143;
                    }
                    memset(&v91[*((_QWORD *)v93 + 10) * *v92], 0, *v92 * (v46 - *((_QWORD *)v93 + 10)));
                    v45 = v143;
                    v95 = (void *)*((_QWORD *)v143 + 7);
                    if ( v95 )
                    {
                      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v95);
                      v45 = v143;
                    }
                    *((_QWORD *)v45 + 7) = v91;
                    *((_QWORD *)v45 + 9) = v46;
                    goto LABEL_215;
                  }
LABEL_291:
                  ExternalSharedResource = -1073741801;
                  LODWORD(v42) = v129;
                  v41 = v130;
                }
                v35 = v120;
                v8 = (unsigned __int64)v143;
                goto LABEL_78;
              }
              if ( *(_QWORD *)(*(_QWORD *)(v8 + 88) * (v35 - 1) + *(_QWORD *)(v8 + 56)) )
                ExternalSharedResource = -1073741790;
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
LABEL_78:
            if ( ExternalSharedResource < 0 )
              goto LABEL_97;
            v139 = v41;
            memmove((void *)(*(_QWORD *)(v8 + 56) + *(_QWORD *)(v8 + 88) * (v35 - 1)), &v139, *(_QWORD *)(v8 + 88));
            ++*(_QWORD *)(v8 + 96);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000000LL) != 0 )
              McTemplateK0qqqxxqtt_EtwWriteTransfer(
                v128,
                v42,
                *((_DWORD *)v41 + 8),
                *(_DWORD *)(v8 + 28),
                *((_DWORD *)v41 + 8),
                v35,
                *((_DWORD *)v41 + 8),
                v42,
                v128,
                0,
                0);
            break;
          case 2u:
            this = (unsigned __int64)v7;
            if ( a3 < 0x18 )
              goto LABEL_368;
            v85 = *((_DWORD *)v7 + 4);
            if ( v85 - 1 > 0xCC )
              goto LABEL_368;
            v122 = v7 + 3;
            a3 -= 24;
            v86 = (void *)v7[1];
            v87 = *((_DWORD *)v7 + 1);
            if ( *((_DWORD *)v7 + 5) )
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedWriteResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         v87,
                                         v85,
                                         v86);
            else
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenExternalSharedReadResource(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         v87,
                                         v85,
                                         v86);
            goto LABEL_25;
          case 3u:
            if ( a3 < 8 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_25;
            }
            v122 = v7 + 1;
            a3 -= 8;
            this = *((unsigned int *)v7 + 1);
            ExternalSharedResource = 0;
            v48 = (unsigned int)(this - 1);
            if ( !(_DWORD)this )
              goto LABEL_262;
            if ( v48 >= *(_QWORD *)(v8 + 80) )
              goto LABEL_262;
            _mm_lfence();
            this = *(_QWORD *)(v8 + 88) * (unsigned int)v48;
            v41 = *(struct DirectComposition::CResourceMarshaler **)(this + *(_QWORD *)(v8 + 56));
            if ( !v41 )
              goto LABEL_262;
            v49 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)v41 + 168LL))(
                    v41,
                    a5,
                    0x1C0000000uLL,
                    3221225485LL);
            if ( v49 )
            {
              v83 = *(struct DirectComposition::CResourceMarshaler **)(v49 + 192);
              if ( v83 )
              {
                if ( (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v83 + 104LL))(v83) )
                  DirectComposition::CApplicationChannel::ReleaseResource(
                    (DirectComposition::CApplicationChannel *)v8,
                    v83);
              }
            }
            if ( v48 < *(_QWORD *)(v8 + 80) )
            {
              v140[0] = 0LL;
              memmove((void *)(*(_QWORD *)(v8 + 56) + *(_QWORD *)(v8 + 88) * v48), v140, *(_QWORD *)(v8 + 88));
              --*(_QWORD *)(v8 + 96);
            }
LABEL_97:
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)v8, v41);
            v9 = v131;
            goto LABEL_25;
          case 4u:
            if ( a3 >= 0x18 )
            {
              v122 = v7 + 3;
              a3 -= 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::GetAnimationTime(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         v7[1],
                                         (__int64 *)v7 + 2);
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            goto LABEL_25;
          case 5u:
            this = (unsigned __int64)v7;
            if ( a3 >= 0x18 )
            {
              v122 = v7 + 3;
              a3 -= 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::CapturePointer(
                                         v8,
                                         *((unsigned int *)v7 + 1),
                                         *((unsigned int *)v7 + 2),
                                         *((unsigned int *)v7 + 3),
                                         v7[2]);
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            goto LABEL_25;
          case 6u:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = v7 + 2;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         (void **)v7 + 1);
            }
            goto LABEL_25;
          case 7u:
            if ( a3 < 0xC )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_25;
            }
            v122 = (unsigned __int64 *)((char *)v7 + 12);
            a3 -= 12;
            v13 = *((unsigned int *)v7 + 2);
            this = *((unsigned int *)v7 + 1);
            v123 = 0;
            v14 = (unsigned int)(this - 1);
            if ( !(_DWORD)this )
              goto LABEL_238;
            if ( v14 >= *(_QWORD *)(v8 + 80) )
              goto LABEL_238;
            _mm_lfence();
            v15 = *(struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)(v8 + 88) * v14 + *(_QWORD *)(v8 + 56));
            if ( !v15 )
              goto LABEL_238;
            ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, char *, __int64))(*(_QWORD *)v15 + 264LL))(
                                       v15,
                                       v13,
                                       &v123,
                                       3221225485LL);
            if ( ExternalSharedResource < 0 )
              goto LABEL_25;
            v16 = v123 == 0;
            goto LABEL_23;
          case 9u:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_25;
            }
            v122 = v7 + 2;
            a3 -= 16;
            v50 = *((_DWORD *)v7 + 2);
            this = *((unsigned int *)v7 + 1);
            v119[0] = 0;
            v51 = (unsigned int)(this - 1);
            if ( !(_DWORD)this )
              goto LABEL_238;
            if ( v51 >= *(_QWORD *)(v8 + 80) )
              goto LABEL_238;
            _mm_lfence();
            v52 = *(_QWORD *)(*(_QWORD *)(v8 + 88) * v51 + *(_QWORD *)(v8 + 56));
            if ( !v52 )
              goto LABEL_238;
            ExternalSharedResource = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v52 + 216LL))(
                                       v52,
                                       v50,
                                       0x1C0000000uLL,
                                       v119);
            if ( ExternalSharedResource >= 0 && *(_QWORD *)(v52 + 40) )
            {
              v109 = DirectComposition::CApplicationChannel::UnbindAnimation(
                       (DirectComposition::CApplicationChannel *)v8,
                       (struct DirectComposition::CResourceMarshaler *)v52,
                       v50);
              this = (unsigned __int8)v119[0];
              if ( v109 )
                this = 1LL;
              v119[0] = this;
            }
            else
            {
              this = (unsigned __int8)v119[0];
            }
            if ( ExternalSharedResource >= 0 )
            {
              if ( (_BYTE)this )
              {
                v53 = *(_DWORD *)(v52 + 16);
                if ( (v53 & 2) == 0 )
                {
                  if ( (v53 & 1) != 0 )
                  {
                    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                            *(unsigned int *)(v52 + 36),
                                            170LL) )
                      this = 424LL;
                    else
                      this = 416LL;
                    *(_QWORD *)(v52 + 8) = *(_QWORD *)(this + v9);
                    *(_QWORD *)(this + v9) = v52;
                  }
                  *(_DWORD *)(v52 + 16) |= 2u;
                  *(_BYTE *)(v8 + 240) |= 1u;
                }
              }
            }
            goto LABEL_25;
          case 0xAu:
            if ( a3 < 0x18 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = v7 + 3;
              a3 -= 24;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2),
                                         (void *)v7[2]);
            }
            goto LABEL_25;
          case 0xBu:
            v110 = (unsigned int *)v7;
            if ( a3 >= 0x10 )
            {
              v111 = v7 + 2;
              v122 = v111;
              a3 -= 16;
              v112 = v110[3];
              v140[1] = (v110[3] * (unsigned __int128)8uLL) >> 64;
              this = 8 * v112;
              if ( is_mul_ok(v112, 8uLL) )
              {
                ExternalSharedResource = 0;
              }
              else
              {
                this = -1LL;
                ExternalSharedResource = -1073741675;
              }
              if ( ExternalSharedResource >= 0 )
              {
                if ( a3 >= this )
                {
                  v122 = (const unsigned __int64 *)((char *)v111 + this);
                  a3 -= this;
                  ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                                             (DirectComposition::CApplicationChannel *)v8,
                                             v110[1],
                                             v110[2],
                                             v111,
                                             v112);
                }
                else
                {
                  ExternalSharedResource = -1073741811;
                }
              }
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            goto LABEL_25;
          case 0xEu:
            this = (unsigned __int64)v7;
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_25;
            }
            v67 = (struct DirectComposition::CResourceMarshaler *)(v7 + 2);
            v122 = (const unsigned __int64 *)v67;
            a3 -= 16;
            v68 = *(unsigned int *)(this + 12);
            v128 = v68;
            v69 = 4 * v68;
            if ( a3 < 4 * v68 )
              goto LABEL_368;
            v70 = (unsigned __int64)v67;
            v129 = (unsigned __int64)v67;
            v122 = (const unsigned __int64 *)((char *)v67 + v69);
            a3 -= v69;
            v71 = *(unsigned int *)(this + 8);
            v120 = *(_DWORD *)(this + 8);
            this = *(unsigned int *)(this + 4);
            ExternalSharedResource = 0;
            v124 = 0;
            v72 = (unsigned int)(this - 1);
            if ( (_DWORD)this && v72 < *(_QWORD *)(v8 + 80) )
            {
              _mm_lfence();
              v73 = *(struct DirectComposition::CResourceMarshaler **)(*(_QWORD *)(v8 + 88) * v72 + *(_QWORD *)(v8 + 56));
              v130 = v73;
              if ( v73 )
                goto LABEL_138;
            }
            else
            {
              v73 = 0LL;
              v130 = 0LL;
            }
            ExternalSharedResource = -1073741790;
LABEL_138:
            if ( !v68 )
              goto LABEL_158;
            if ( ExternalSharedResource < 0 )
              goto LABEL_149;
            v140[2] = (v68 * (unsigned __int128)8uLL) >> 64;
            v74 = 8 * v68;
            if ( is_mul_ok(v68, 8uLL) )
            {
              ExternalSharedResource = 0;
            }
            else
            {
              ExternalSharedResource = -1073741675;
              v74 = -1LL;
            }
            if ( ExternalSharedResource < 0 )
              goto LABEL_149;
            v132 = 1717715780;
            v136 = 260LL;
            v75 = gpLeakTrackingAllocator;
            v137[0] = v74;
            if ( !*(_DWORD *)gpLeakTrackingAllocator )
            {
              Quota = ExAllocatePool2(263LL, v74, 1717715780LL);
              if ( Quota )
                _InterlockedIncrement64((volatile signed __int64 *)v75 + 14);
LABEL_146:
              v68 = v128;
              goto LABEL_147;
            }
            if ( *(_DWORD *)gpLeakTrackingAllocator != 1 )
            {
              if ( *(_DWORD *)gpLeakTrackingAllocator == 2 )
              {
                v135 = 0LL;
                if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                        gpLeakTrackingAllocator,
                        0x66624344u,
                        &v135) )
                {
                  v141[0] = &v136;
                  v141[1] = &v132;
                  Quota = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                            v75,
                            v141,
                            v137);
                  v68 = v128;
                  goto LABEL_147;
                }
                v115 = 0;
                if ( v74 < 0x1000 || (v74 & 0xFFF) != 0 )
                {
                  v115 = 1;
                  v74 += 16LL;
                  v137[0] = v74;
                }
                Quota = ExAllocatePool2(263LL, v74, v114);
                if ( Quota )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)v75 + 16);
                  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                  if ( v115 && (unsigned __int64)(Quota & 0xFFF) + 16 < 0x1000 )
                  {
                    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                            v75,
                                            Quota,
                                            v135,
                                            BackTrace) )
                    {
                      Quota += 16LL;
                      v68 = v128;
                      v73 = v130;
                      goto LABEL_147;
                    }
                  }
                  else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                               v75,
                                               Quota,
                                               v135,
                                               BackTrace) )
                  {
                    v68 = v128;
                    v73 = v130;
                    goto LABEL_147;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)v75 + 17);
                  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Quota);
                }
                v73 = v130;
LABEL_344:
                v68 = v128;
              }
              Quota = 0LL;
              goto LABEL_147;
            }
            if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                    gpLeakTrackingAllocator,
                    0x66624344u)
              || v74 + 16 < v74 )
            {
              goto LABEL_344;
            }
            Pool2 = (_QWORD *)ExAllocatePool2(v136 | 3, v74 + 16, v132);
            Quota = (__int64)Pool2;
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v75 + 14);
              *Pool2 = 1717715780LL;
              Quota = (__int64)(Pool2 + 2);
              if ( Pool2 != (_QWORD *)-16LL )
                goto LABEL_146;
            }
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v75 + 1),
              (const void *)0x66624344);
            v68 = v128;
LABEL_147:
            v70 = v129;
            if ( !Quota )
              ExternalSharedResource = -1073741801;
LABEL_149:
            v76 = 0LL;
            if ( ExternalSharedResource < 0 )
              goto LABEL_347;
            do
            {
              if ( (unsigned int)v76 >= v68 )
                break;
              v77 = *(_DWORD *)(v70 + 4 * v76);
              v78 = (unsigned int)(v77 - 1);
              if ( v77 && v78 < *((_QWORD *)v143 + 10) )
                this = *(_QWORD *)(*((_QWORD *)v143 + 11) * v78 + *((_QWORD *)v143 + 7));
              else
                this = 0LL;
              *(_QWORD *)(Quota + 8 * v76) = this;
              if ( !this )
                ExternalSharedResource = -1073741811;
              v76 = (unsigned int)(v76 + 1);
            }
            while ( ExternalSharedResource >= 0 );
            v73 = v130;
            v71 = v120;
LABEL_158:
            if ( ExternalSharedResource < 0 )
            {
LABEL_347:
              v79 = v143;
            }
            else
            {
              v79 = v143;
              ExternalSharedResource = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, __int64, unsigned __int64, char *))(*(_QWORD *)v73 + 256LL))(
                                         v73,
                                         v143,
                                         v71,
                                         Quota,
                                         v68,
                                         &v124);
            }
            if ( ExternalSharedResource < 0 )
            {
              if ( !Quota )
                break;
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Quota);
              v9 = v131;
            }
            else
            {
              if ( !v124 )
                break;
              v80 = *((_DWORD *)v73 + 4);
              if ( (v80 & 2) != 0 )
                break;
              if ( (v80 & 1) != 0 )
              {
                if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *((unsigned int *)v73 + 9),
                                        170LL) )
                  this = 424LL;
                else
                  this = 416LL;
                v84 = v131;
                *((_QWORD *)v73 + 1) = *(_QWORD *)(this + v131);
                *(_QWORD *)(this + v84) = v73;
              }
              *((_DWORD *)v73 + 4) |= 2u;
              *((_BYTE *)v79 + 240) |= 1u;
              v9 = v131;
            }
            goto LABEL_25;
          case 0xFu:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = v7 + 2;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2),
                                         *((_DWORD *)v7 + 3));
            }
            goto LABEL_25;
          case 0x10u:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = v7 + 2;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         v7[1]);
            }
            goto LABEL_25;
          case 0x11u:
            if ( a3 < 0x14 )
            {
              ExternalSharedResource = -1073741811;
              goto LABEL_25;
            }
            v122 = (unsigned __int64 *)((char *)v7 + 20);
            a3 -= 20;
            v54 = *((_DWORD *)v7 + 4);
            v55 = *((_DWORD *)v7 + 3);
            v56 = *((_DWORD *)v7 + 2);
            this = *((unsigned int *)v7 + 1);
            v125 = 0;
            v57 = 0LL;
            v58 = (unsigned int)(this - 1);
            if ( !(_DWORD)this
              || v58 >= *(_QWORD *)(v8 + 80)
              || (_mm_lfence(), v59 = *(_QWORD *)(v8 + 88) * v58, (this = *(_QWORD *)(v59 + *(_QWORD *)(v8 + 56))) == 0) )
            {
LABEL_262:
              ExternalSharedResource = -1073741790;
              break;
            }
            v60 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, __int64))(*(_QWORD *)this
                                                                                                  + 168LL))(
                    this,
                    v59,
                    0x1C0000000uLL,
                    3221225485LL);
            if ( !v60 )
              goto LABEL_352;
            this = (unsigned int)(v56 - 1);
            if ( !v56 )
              goto LABEL_352;
            if ( this >= *((_QWORD *)v143 + 10) )
              goto LABEL_352;
            _mm_lfence();
            this = *(_QWORD *)(*((_QWORD *)v143 + 11) * this + *((_QWORD *)v143 + 7));
            if ( !this )
              goto LABEL_352;
            v61 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 168LL))(this);
            if ( !v61 )
              goto LABEL_352;
            if ( v54 )
            {
              v82 = (unsigned int)(v54 - 1);
              v62 = v143;
              if ( v82 >= *((_QWORD *)v143 + 10)
                || (_mm_lfence(), (this = *(_QWORD *)(*((_QWORD *)v143 + 11) * v82 + *((_QWORD *)v143 + 7))) == 0) )
              {
LABEL_352:
                ExternalSharedResource = -1073741811;
                break;
              }
              v57 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)this + 168LL))(this);
              if ( !v57 )
              {
                ExternalSharedResource = -1073741811;
                break;
              }
            }
            else
            {
              v62 = v143;
            }
            ExternalSharedResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v60 + 288LL))(
                                       v60,
                                       v62,
                                       v61,
                                       v55,
                                       v57,
                                       &v125);
            if ( ExternalSharedResource < 0 )
              break;
            if ( !v125 )
              break;
            v63 = *(_DWORD *)(v60 + 16);
            if ( (v63 & 2) != 0 )
              break;
            if ( (v63 & 1) != 0 )
            {
              if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                      *(unsigned int *)(v60 + 36),
                                      170LL) )
                this = 424LL;
              else
                this = 416LL;
              v64 = v131;
              *(_QWORD *)(v60 + 8) = *(_QWORD *)(this + v131);
              *(_QWORD *)(this + v64) = v60;
            }
            *(_DWORD *)(v60 + 16) |= 2u;
            *((_BYTE *)v62 + 240) |= 1u;
            v9 = v131;
            goto LABEL_25;
          case 0x12u:
            if ( a3 >= 0x48 )
            {
              v122 = v7 + 9;
              a3 -= 72;
              v116 = (const struct tagMsgRoutingInfo *)(v7 + 4);
              if ( !*((_DWORD *)v7 + 6) )
                v116 = 0LL;
              ExternalSharedResource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         (HWND)v7[1],
                                         v116,
                                         *((_DWORD *)v7 + 4),
                                         *((_DWORD *)v7 + 5));
            }
            else
            {
              ExternalSharedResource = -1073741811;
            }
            goto LABEL_25;
          case 0x13u:
            if ( a3 < 0x10 )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = v7 + 2;
              a3 -= 16;
              ExternalSharedResource = DirectComposition::CApplicationChannel::SetVisualInputSink(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         (void *)v7[1]);
            }
            goto LABEL_25;
          case 0x14u:
            if ( a3 < 0xC )
            {
              ExternalSharedResource = -1073741811;
            }
            else
            {
              v122 = (unsigned __int64 *)((char *)v7 + 12);
              a3 -= 12;
              ExternalSharedResource = DirectComposition::CApplicationChannel::RemoveVisualChild(
                                         (DirectComposition::CApplicationChannel *)v8,
                                         *((_DWORD *)v7 + 1),
                                         *((_DWORD *)v7 + 2));
            }
            goto LABEL_25;
          default:
            goto LABEL_368;
        }
LABEL_40:
        v9 = v131;
        break;
    }
LABEL_25:
    v7 = (unsigned __int64 *)v122;
    v8 = (unsigned __int64)v143;
    Quota = 0LL;
    v5 = a4;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qp_EtwWriteTransfer(this, &DCompCommandType, 0x1C0000000uLL, v12, ExternalSharedResource);
      v7 = (unsigned __int64 *)v122;
      v8 = (unsigned __int64)v143;
      v5 = a4;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, 0x1C0000000uLL, *a5);
  if ( ExternalSharedResource >= 0 && a3 )
    return (unsigned int)-1073741811;
  return (unsigned int)ExternalSharedResource;
}
