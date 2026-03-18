/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C0089F20 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0014068 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0015178 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C005837C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0083C84 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0084088 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00854A8 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00856DC (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0085808 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C0085974 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0085AF0 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0085B98 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C0085C2C (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0085CF8 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z @ 0x1C0085E24 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0085F60 (Win32AllocPoolWithQuota.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C00ABEE8 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C00AFB08 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1C01517C0 (McTemplateK0qx_EtwWriteTransfer.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C0151A58 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C02146D4 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0214A18 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0214BB8 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0214D9C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        unsigned __int64 a3,
        char a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  DirectComposition::CApplicationChannel *v7; // r11
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int *v13; // rax
  int AnimationTime; // eax
  unsigned int *v15; // rax
  unsigned int v16; // r9d
  const void *v17; // r13
  unsigned int v18; // r15d
  void *v19; // r12
  unsigned int *v20; // rax
  ULONG64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  char *v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int *v34; // rax
  __int64 v35; // rdx
  const unsigned int *v36; // r9
  int *v37; // rax
  char *v38; // rdx
  unsigned int v39; // ecx
  unsigned int *v40; // r9
  unsigned int *v41; // r10
  unsigned __int64 v42; // rcx
  const unsigned __int64 *v43; // r9
  unsigned int *v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int *v48; // rax
  unsigned int *v49; // rax
  unsigned int *v50; // rdx
  DirectComposition::CApplicationChannel *v52; // [rsp+38h] [rbp-50h]
  DirectComposition::CApplicationChannel *v53; // [rsp+90h] [rbp+8h]
  char v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  v53 = this;
  v5 = a3;
  v7 = this;
  v8 = 0;
  while ( v8 >= 0 && v5 >= 4 )
  {
    ++*a5;
    this = (DirectComposition::CApplicationChannel *)a2;
    v52 = (DirectComposition::CApplicationChannel *)a2;
    v9 = *a2;
    if ( *a2 > 0xA )
    {
      if ( v9 > 0x10 )
      {
        v45 = v9 - 17;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              if ( v47 != 1 || (v48 = a2, v5 < 0xC) )
              {
LABEL_98:
                v8 = -1073741811;
                goto LABEL_101;
              }
              a2 += 3;
              v5 -= 12;
              AnimationTime = DirectComposition::CApplicationChannel::RemoveVisualChild(v7, v48[1], v48[2]);
            }
            else
            {
              v49 = a2;
              if ( v5 < 0x10 )
                goto LABEL_98;
              a2 += 4;
              v5 -= 16;
              AnimationTime = DirectComposition::CApplicationChannel::SetVisualInputSink(
                                v7,
                                v49[1],
                                *((void **)v49 + 1));
            }
          }
          else
          {
            v50 = a2;
            if ( v5 < 0x48 )
              goto LABEL_98;
            a2 += 18;
            v5 -= 72;
            AnimationTime = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                              v7,
                              v50[1],
                              *((HWND *)v50 + 1),
                              (const struct tagMsgRoutingInfo *)((unsigned __int64)(v50 + 8) & -(__int64)(v50[6] != 0)),
                              v50[4],
                              v50[5]);
          }
        }
        else
        {
          if ( v5 < 0x14 )
            goto LABEL_98;
          a2 += 5;
          v5 -= 20;
          AnimationTime = DirectComposition::CApplicationChannel::AddVisualChild(
                            v7,
                            *((_DWORD *)this + 1),
                            *((_DWORD *)this + 2),
                            *((_DWORD *)this + 3),
                            *((_DWORD *)this + 4));
        }
      }
      else if ( v9 == 16 )
      {
        v44 = a2;
        if ( v5 < 0x10 )
          goto LABEL_98;
        a2 += 4;
        v5 -= 16;
        AnimationTime = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                          v7,
                          v44[1],
                          *((_QWORD *)v44 + 1));
      }
      else
      {
        v30 = v9 - 11;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 != 1 )
                  goto LABEL_98;
                v34 = a2;
                if ( v5 < 0x10 )
                  goto LABEL_98;
                a2 += 4;
                v5 -= 16;
                AnimationTime = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                  v7,
                                  v34[1],
                                  v34[2],
                                  v34[3]);
              }
              else
              {
                if ( v5 < 0x10 )
                  goto LABEL_98;
                a2 += 4;
                v5 -= 16;
                a3 = *((unsigned int *)this + 3);
                v35 = 4 * a3;
                if ( v5 < 4 * a3 )
                  goto LABEL_98;
                v36 = a2;
                a2 = (unsigned int *)((char *)a2 + v35);
                v5 -= v35;
                AnimationTime = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                                  v7,
                                  *((_DWORD *)this + 1),
                                  *((_DWORD *)this + 2),
                                  v36,
                                  a3);
              }
            }
            else
            {
              v37 = (int *)a2;
              if ( v5 < 0x10 )
                goto LABEL_98;
              a2 += 4;
              v5 -= 16;
              AnimationTime = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
                                v7,
                                v37[1],
                                v37[2],
                                v37[3]);
            }
          }
          else
          {
            v38 = (char *)a2;
            if ( v5 < 0x10 )
              goto LABEL_98;
            a2 += 4;
            v5 -= 16;
            a3 = *((unsigned int *)v38 + 3);
            v39 = (a3 + 3) & 0xFFFFFFFC;
            if ( v39 < (unsigned int)a3 || v5 < v39 )
            {
              v8 = -1073741811;
              this = (DirectComposition::CApplicationChannel *)v38;
              goto LABEL_101;
            }
            v40 = a2;
            a2 = (unsigned int *)((char *)a2 + v39);
            v5 -= v39;
            AnimationTime = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                              v7,
                              *((_DWORD *)v38 + 1),
                              *((_DWORD *)v38 + 2),
                              v40,
                              a3);
          }
        }
        else
        {
          v41 = a2;
          if ( v5 < 0x10 )
            goto LABEL_98;
          a2 += 4;
          v5 -= 16;
          a3 = v41[3];
          v42 = 8 * a3;
          if ( is_mul_ok(a3, 8uLL) )
          {
            v8 = 0;
          }
          else
          {
            v42 = -1LL;
            v8 = -1073741675;
          }
          if ( v8 < 0 )
            goto LABEL_100;
          if ( v5 < v42 )
            v8 = -1073741811;
          if ( v8 < 0 )
          {
LABEL_100:
            this = (DirectComposition::CApplicationChannel *)v41;
            goto LABEL_101;
          }
          v43 = (const unsigned __int64 *)a2;
          a2 = (unsigned int *)((char *)a2 + v42);
          v5 -= v42;
          AnimationTime = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                            v7,
                            v41[1],
                            v41[2],
                            v43,
                            a3);
        }
      }
    }
    else if ( v9 == 10 )
    {
      v29 = a2;
      if ( v5 < 0x18 )
        goto LABEL_98;
      a2 += 6;
      v5 -= 24;
      AnimationTime = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                        v7,
                        v29[1],
                        v29[2],
                        *((void **)v29 + 2));
    }
    else if ( v9 > 5 )
    {
      v22 = v9 - 6;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 1 )
              goto LABEL_98;
            v25 = (char *)a2;
            if ( v5 < 0x10 )
              goto LABEL_98;
            a2 += 4;
            v5 -= 16;
            AnimationTime = DirectComposition::CApplicationChannel::SetResourceFloatProperty(
                              v7,
                              *((_DWORD *)v25 + 1),
                              *((unsigned int *)v25 + 2),
                              *((float *)v25 + 3));
          }
          else
          {
            v26 = a2;
            if ( v5 < 0x18 )
              goto LABEL_98;
            a2 += 6;
            v5 -= 24;
            AnimationTime = DirectComposition::CApplicationChannel::SetResourceIntegerProperty(v7, v26[1], v26[2]);
          }
        }
        else
        {
          v27 = a2;
          if ( v5 < 0xC )
            goto LABEL_98;
          a2 += 3;
          v5 -= 12;
          AnimationTime = DirectComposition::CApplicationChannel::SetResourceCallbackId(v7, v27[1], v27[2]);
        }
      }
      else
      {
        v28 = a2;
        if ( v5 < 0x10 )
          goto LABEL_98;
        a2 += 4;
        v5 -= 16;
        AnimationTime = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(v7, v28[1], (void **)v28 + 1);
      }
    }
    else if ( v9 == 5 )
    {
      if ( v5 < 0x18 )
        goto LABEL_98;
      a2 += 6;
      v5 -= 24;
      AnimationTime = DirectComposition::CApplicationChannel::CapturePointer(
                        v7,
                        *((unsigned int *)this + 1),
                        *((unsigned int *)this + 2),
                        *((unsigned int *)this + 3),
                        *((_QWORD *)this + 2));
    }
    else
    {
      if ( !v9 )
      {
        v17 = 0LL;
        v18 = 0;
        v19 = 0LL;
        v20 = a2;
        if ( v5 < 0x18 || !a4 || (a2 += 6, v5 -= 24, v17 = (const void *)*((_QWORD *)v20 + 1), (v18 = v20[4]) == 0) )
          v8 = -1073741811;
        if ( v8 >= 0 )
        {
          v19 = (void *)Win32AllocPoolWithQuota((NSInstrumentation::CLeakTrackingAllocator *)v18, 1717715780);
          if ( !v19 )
            v8 = -1073741801;
          if ( v8 >= 0 )
          {
            v21 = (ULONG64)v17 + v18;
            if ( v21 < (unsigned __int64)v17 || v21 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v19, v17, v18);
          }
        }
        if ( v8 >= 0 )
          v8 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(v53, v19, v18, 0, a5);
        if ( v19 )
          Win32FreePool((char *)v19);
        goto LABEL_40;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_98;
            v13 = a2;
            if ( v5 < 0x18 )
              goto LABEL_98;
            a2 += 6;
            v5 -= 24;
            AnimationTime = DirectComposition::CApplicationChannel::GetAnimationTime(
                              v7,
                              v13[1],
                              *((_QWORD *)v13 + 1),
                              (__int64 *)v13 + 2);
          }
          else
          {
            v15 = a2;
            if ( v5 < 8 )
              goto LABEL_98;
            a2 += 2;
            v5 -= 8;
            AnimationTime = DirectComposition::CApplicationChannel::ReleaseResource(v7, v15[1]);
          }
        }
        else
        {
          if ( v5 < 0x18 )
            goto LABEL_98;
          v16 = a2[4];
          if ( v16 - 1 > 0xCD )
            goto LABEL_98;
          a2 += 6;
          v5 -= 24;
          AnimationTime = DirectComposition::CApplicationChannel::OpenSharedResource(
                            v7,
                            *((_DWORD *)this + 1),
                            *((void **)this + 1),
                            v16,
                            *((_DWORD *)this + 5) != 0);
        }
      }
      else
      {
        if ( v5 < 0x10 )
          goto LABEL_98;
        a3 = a2[2];
        if ( (unsigned int)(a3 - 1) > 0xCD )
          goto LABEL_98;
        a2 += 4;
        v5 -= 16;
        AnimationTime = DirectComposition::CApplicationChannel::CreateResource(
                          v7,
                          *((_DWORD *)this + 1),
                          a3,
                          *((_DWORD *)this + 3) != 0);
      }
    }
    v8 = AnimationTime;
LABEL_40:
    v7 = v53;
    this = v52;
LABEL_101:
    a4 = v54;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qx_EtwWriteTransfer(this, &DCompCommandType, a3, *(unsigned int *)this, v8);
      v7 = v53;
      a4 = v54;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, a3, *a5);
  if ( v8 >= 0 && v5 )
    return (unsigned int)-1073741811;
  return (unsigned int)v8;
}
