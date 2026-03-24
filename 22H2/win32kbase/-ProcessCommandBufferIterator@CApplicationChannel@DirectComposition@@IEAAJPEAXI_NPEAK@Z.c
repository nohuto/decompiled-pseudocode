/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007F5B4
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C007F360 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007F5B4 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0027020 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0027148 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C00272BC (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0027434 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0027560 (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C00275F8 (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z @ 0x1C00276C8 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBX_K@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C002778C (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C0029990 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C004BE9C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C006093C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007F5B4 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0083CF4 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0084040 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C00926E8 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C0098CEC (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C0099C6C (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C009D134 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C01276A8 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01D4728 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C01D4A9C (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01D518C (-SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z.c)
 *     McTemplateK0qx_EtwWriteTransfer @ 0x1C01D57F0 (McTemplateK0qx_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        DirectComposition::CApplicationChannel *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        char a5)
{
  unsigned __int128 v5; // rax
  unsigned int v6; // edi
  unsigned int *v7; // rsi
  DirectComposition::CApplicationChannel *v8; // r11
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int *v14; // rax
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
  unsigned int *v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int *v34; // rax
  const unsigned int *v35; // r9
  int *v36; // rax
  unsigned int v37; // ecx
  unsigned int *v38; // r9
  unsigned int *v39; // r10
  unsigned __int64 v40; // rcx
  const unsigned __int64 *v41; // r9
  unsigned int *v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int *v46; // rax
  unsigned int *v47; // rax
  DirectComposition::CApplicationChannel *v49; // [rsp+38h] [rbp-50h]
  DirectComposition::CApplicationChannel *v50; // [rsp+90h] [rbp+8h]
  char v51; // [rsp+A8h] [rbp+20h]

  *((_QWORD *)&v5 + 1) = a2;
  v51 = a5;
  v50 = this;
  v6 = a3;
  v7 = (unsigned int *)*((_QWORD *)&v5 + 1);
  v8 = this;
  v9 = 0;
  while ( v9 >= 0 && v6 >= 4 )
  {
    ++*a4;
    this = (DirectComposition::CApplicationChannel *)v7;
    v49 = (DirectComposition::CApplicationChannel *)v7;
    v10 = *v7;
    if ( *v7 > 0xA )
    {
      if ( v10 > 0x10 )
      {
        v43 = v10 - 17;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 != 1 || (v46 = v7, v6 < 0xC) )
              {
LABEL_98:
                v9 = -1073741811;
                goto LABEL_101;
              }
              v7 += 3;
              v6 -= 12;
              LODWORD(v5) = DirectComposition::CApplicationChannel::RemoveVisualChild(v8, v46[1], v46[2]);
            }
            else
            {
              v47 = v7;
              if ( v6 < 0x10 )
                goto LABEL_98;
              v7 += 4;
              v6 -= 16;
              LODWORD(v5) = DirectComposition::CApplicationChannel::SetVisualInputSink(v8, v47[1], *((void **)v47 + 1));
            }
          }
          else
          {
            *((_QWORD *)&v5 + 1) = v7;
            if ( v6 < 0x48 )
              goto LABEL_98;
            v7 += 18;
            v6 -= 72;
            LODWORD(v5) = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                            v8,
                            *(_DWORD *)(*((_QWORD *)&v5 + 1) + 4LL),
                            *(HWND *)(*((_QWORD *)&v5 + 1) + 8LL),
                            (const struct tagMsgRoutingInfo *)((*((_QWORD *)&v5 + 1) + 32LL) & -(__int64)(*(_DWORD *)(*((_QWORD *)&v5 + 1) + 24LL) != 0)),
                            *(_DWORD *)(*((_QWORD *)&v5 + 1) + 16LL),
                            *(_DWORD *)(*((_QWORD *)&v5 + 1) + 20LL));
          }
        }
        else
        {
          if ( v6 < 0x14 )
            goto LABEL_98;
          v7 += 5;
          v6 -= 20;
          LODWORD(v5) = DirectComposition::CApplicationChannel::AddVisualChild(
                          v8,
                          *((_DWORD *)this + 1),
                          *((_DWORD *)this + 2),
                          *((_DWORD *)this + 3),
                          *((_DWORD *)this + 4));
        }
      }
      else if ( v10 == 16 )
      {
        v42 = v7;
        if ( v6 < 0x10 )
          goto LABEL_98;
        v7 += 4;
        v6 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                        v8,
                        v42[1],
                        *((_QWORD *)v42 + 1));
      }
      else
      {
        v30 = v10 - 11;
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
                v34 = v7;
                if ( v6 < 0x10 )
                  goto LABEL_98;
                v7 += 4;
                v6 -= 16;
                LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
                                v8,
                                v34[1],
                                v34[2],
                                v34[3]);
              }
              else
              {
                if ( v6 < 0x10 )
                  goto LABEL_98;
                v7 += 4;
                v6 -= 16;
                a3 = *((unsigned int *)this + 3);
                *((_QWORD *)&v5 + 1) = 4 * a3;
                if ( v6 < 4 * a3 )
                  goto LABEL_98;
                v35 = v7;
                v7 = (unsigned int *)((char *)v7 + *((_QWORD *)&v5 + 1));
                v6 -= DWORD2(v5);
                LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                                v8,
                                *((_DWORD *)this + 1),
                                *((_DWORD *)this + 2),
                                v35,
                                a3);
              }
            }
            else
            {
              v36 = (int *)v7;
              if ( v6 < 0x10 )
                goto LABEL_98;
              v7 += 4;
              v6 -= 16;
              LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
                              v8,
                              v36[1],
                              v36[2],
                              v36[3]);
            }
          }
          else
          {
            *((_QWORD *)&v5 + 1) = v7;
            if ( v6 < 0x10 )
              goto LABEL_98;
            v7 += 4;
            v6 -= 16;
            a3 = *(unsigned int *)(*((_QWORD *)&v5 + 1) + 12LL);
            v37 = (a3 + 3) & 0xFFFFFFFC;
            if ( v37 < (unsigned int)a3 || v6 < v37 )
            {
              v9 = -1073741811;
              this = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v5 + 1);
              goto LABEL_101;
            }
            v38 = v7;
            v7 = (unsigned int *)((char *)v7 + v37);
            v6 -= v37;
            LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceBufferProperty(
                            v8,
                            *(_DWORD *)(*((_QWORD *)&v5 + 1) + 4LL),
                            *(_DWORD *)(*((_QWORD *)&v5 + 1) + 8LL),
                            v38,
                            a3);
          }
        }
        else
        {
          v39 = v7;
          if ( v6 < 0x10 )
            goto LABEL_98;
          v7 += 4;
          v6 -= 16;
          a3 = v39[3];
          v5 = v39[3] * (unsigned __int128)8uLL;
          v40 = 8 * a3;
          if ( is_mul_ok(a3, 8uLL) )
          {
            v9 = 0;
          }
          else
          {
            v40 = -1LL;
            v9 = -1073741675;
          }
          if ( v9 < 0 )
            goto LABEL_100;
          if ( v6 < v40 )
            v9 = -1073741811;
          if ( v9 < 0 )
          {
LABEL_100:
            this = (DirectComposition::CApplicationChannel *)v39;
            goto LABEL_101;
          }
          v41 = (const unsigned __int64 *)v7;
          v7 = (unsigned int *)((char *)v7 + v40);
          v6 -= v40;
          LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
                          v8,
                          v39[1],
                          v39[2],
                          v41,
                          a3);
        }
      }
    }
    else if ( v10 == 10 )
    {
      v29 = v7;
      if ( v6 < 0x18 )
        goto LABEL_98;
      v7 += 6;
      v6 -= 24;
      LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                      v8,
                      v29[1],
                      v29[2],
                      *((void **)v29 + 2));
    }
    else if ( v10 > 5 )
    {
      v22 = v10 - 6;
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
            v25 = v7;
            if ( v6 < 0x10 )
              goto LABEL_98;
            v7 += 4;
            v6 -= 16;
            LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceFloatProperty(
                            v8,
                            v25[1],
                            v25[2],
                            *((float *)v25 + 3));
          }
          else
          {
            v26 = v7;
            if ( v6 < 0x18 )
              goto LABEL_98;
            v7 += 6;
            v6 -= 24;
            LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceIntegerProperty(v8, v26[1], v26[2]);
          }
        }
        else
        {
          v27 = v7;
          if ( v6 < 0xC )
            goto LABEL_98;
          v7 += 3;
          v6 -= 12;
          LODWORD(v5) = DirectComposition::CApplicationChannel::SetResourceCallbackId(v8, v27[1], v27[2]);
        }
      }
      else
      {
        v28 = v7;
        if ( v6 < 0x10 )
          goto LABEL_98;
        v7 += 4;
        v6 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(v8, v28[1], (void **)v28 + 1);
      }
    }
    else if ( v10 == 5 )
    {
      if ( v6 < 0x18 )
        goto LABEL_98;
      v7 += 6;
      v6 -= 24;
      LODWORD(v5) = DirectComposition::CApplicationChannel::CapturePointer(
                      v8,
                      *((unsigned int *)this + 1),
                      *((unsigned int *)this + 2),
                      *((unsigned int *)this + 3),
                      *((_QWORD *)this + 2));
    }
    else
    {
      if ( !v10 )
      {
        v17 = 0LL;
        v18 = 0;
        v19 = 0LL;
        v20 = v7;
        if ( v6 < 0x18 || !a5 || (v7 += 6, v6 -= 24, v17 = (const void *)*((_QWORD *)v20 + 1), (v18 = v20[4]) == 0) )
          v9 = -1073741811;
        if ( v9 >= 0 )
        {
          v19 = (void *)Win32AllocPoolWithQuota(v18, 0x66624344u);
          if ( !v19 )
            v9 = -1073741801;
          if ( v9 >= 0 )
          {
            v21 = (ULONG64)v17 + v18;
            if ( v21 < (unsigned __int64)v17 || v21 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v19, v17, v18);
          }
        }
        if ( v9 >= 0 )
          v9 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(v50, v19, v18, 0, a4);
        if ( v19 )
          Win32FreePool((__int64)v19);
        goto LABEL_40;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              goto LABEL_98;
            v14 = v7;
            if ( v6 < 0x18 )
              goto LABEL_98;
            v7 += 6;
            v6 -= 24;
            LODWORD(v5) = DirectComposition::CApplicationChannel::GetAnimationTime(
                            v8,
                            v14[1],
                            *((_QWORD *)v14 + 1),
                            (__int64 *)v14 + 2);
          }
          else
          {
            v15 = v7;
            if ( v6 < 8 )
              goto LABEL_98;
            v7 += 2;
            v6 -= 8;
            LODWORD(v5) = DirectComposition::CApplicationChannel::ReleaseResource(v8, v15[1]);
          }
        }
        else
        {
          if ( v6 < 0x18 )
            goto LABEL_98;
          v16 = v7[4];
          if ( v16 - 1 > 0xCC )
            goto LABEL_98;
          v7 += 6;
          v6 -= 24;
          LODWORD(v5) = DirectComposition::CApplicationChannel::OpenSharedResource(
                          v8,
                          *((_DWORD *)this + 1),
                          *((void **)this + 1),
                          v16,
                          *((_DWORD *)this + 5) != 0);
        }
      }
      else
      {
        if ( v6 < 0x10 )
          goto LABEL_98;
        a3 = v7[2];
        if ( (unsigned int)(a3 - 1) > 0xCC )
          goto LABEL_98;
        v7 += 4;
        v6 -= 16;
        LODWORD(v5) = DirectComposition::CApplicationChannel::CreateResource(
                        v8,
                        *((_DWORD *)this + 1),
                        a3,
                        *((_DWORD *)this + 3) != 0);
      }
    }
    v9 = v5;
LABEL_40:
    v8 = v50;
    this = v49;
LABEL_101:
    a5 = v51;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    {
      McTemplateK0qx_EtwWriteTransfer(this, *((_QWORD *)&v5 + 1), a3, *(unsigned int *)this, v9);
      v8 = v50;
      a5 = v51;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    McTemplateK0x_EtwWriteTransfer(this, &DCompCommandsInBatch, a3, *a4);
  if ( v9 >= 0 && v6 )
    return (unsigned int)-1073741811;
  return (unsigned int)v9;
}
