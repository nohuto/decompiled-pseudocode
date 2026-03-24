/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189704
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     IsPTPIVEnabled @ 0x1C00A9640 (IsPTPIVEnabled.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage @ 0x1C00CD378 (Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00CD540 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C0182DD8 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C019ED04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     IsPenIVEnabled @ 0x1C01BA73C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA78C (IsTouchIVEnabled.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BAF8C (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BC8DC (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  int v7; // ebx
  CTouchProcessor *v8; // rcx
  unsigned int v9; // esi
  _DWORD *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r13d
  __int128 v17; // xmm1
  __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rcx
  size_t v21; // r12
  __int64 v22; // rsi
  int v23; // r9d
  unsigned int v24; // r15d
  _WORD *v25; // r14
  int v26; // eax
  unsigned int v27; // ebx
  struct CContainerPointerInput *v28; // rdx
  unsigned int v29; // r12d
  unsigned int v30; // r15d
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rbx
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  struct DEVICEINFO *v36; // rax
  struct CPTPProcessor *Processor; // rax
  unsigned int v38; // [rsp+34h] [rbp-95h]
  size_t v39; // [rsp+38h] [rbp-91h]
  _QWORD v40[2]; // [rsp+40h] [rbp-89h] BYREF
  int v41; // [rsp+50h] [rbp-79h]
  int v42; // [rsp+54h] [rbp-75h]
  _QWORD v43[16]; // [rsp+60h] [rbp-69h] BYREF

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 15372);
  v7 = *(_DWORD *)(*((_QWORD *)a2 + 17) + 168LL);
  if ( v7 == 2 && (unsigned __int8)IsTouchIVEnabled()
    || v7 == 3 && (unsigned __int8)IsPenIVEnabled()
    || v7 == 5 && IsPTPIVEnabled() )
  {
    v9 = 0;
    v10 = (_DWORD *)*((_QWORD *)a2 + 17);
    v11 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      do
      {
        if ( CTouchProcessor::ShouldGenerateMessagesForNode(v8, a2, (const struct CPointerInfoNode *)v10, a4) )
        {
          Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage();
          if ( CInputDest::IsContainer((CInputDest *)(v10 + 88)) )
          {
            *v10 |= 0x1000u;
            ++v9;
            v8 = (CTouchProcessor *)(unsigned int)v10[115];
            v10[1] |= 0x2000u;
            v10[118] = (_DWORD)v8;
          }
        }
        ++v11;
        v10 += 120;
      }
      while ( v11 < *((_DWORD *)a2 + 12) );
      if ( v9 )
      {
        memset(v43, 0, sizeof(v43));
        v12 = *((unsigned int *)a2 + 14);
        if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
          if ( a3 )
            v14 = *(_QWORD *)(v13 + 24);
          else
            v14 = *(_QWORD *)(v13 + 16);
          v43[4] = v14;
        }
        v15 = *((_QWORD *)a2 + 16);
        HIDWORD(v43[11]) = 0;
        v43[12] = 0LL;
        v43[14] = 0LL;
        v16 = 24 * v12 + 128;
        v43[10] = a3;
        HIDWORD(v43[3]) = v12;
        v17 = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)&v43[5] = *(_OWORD *)((char *)a2 + 72);
        v43[9] = *((_QWORD *)a2 + 13);
        *(_OWORD *)&v43[7] = v17;
        if ( (_DWORD)v12 )
        {
          v18 = v12;
          do
          {
            v19 = *(_DWORD *)(v15 + 8);
            v15 = *(_QWORD *)(v15 + 24);
            v16 += (v19 + 7) & 0xFFFFFFF8;
            --v18;
          }
          while ( v18 );
        }
        v20 = 192LL * v9;
        if ( v20 > 0xFFFFFFFF )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 331;
          goto LABEL_48;
        }
        v21 = (unsigned int)v20;
        v39 = (unsigned int)v20;
        v22 = Win32AllocPool((unsigned int)v20, 0x6E705649u);
        if ( !v22 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v23 = 332;
LABEL_48:
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 7, v23, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
          return;
        }
        v24 = 0;
        v38 = 0;
        if ( *((_DWORD *)a2 + 12) )
        {
          v25 = (_WORD *)(*((_QWORD *)a2 + 17) + 472LL);
          do
          {
            v26 = *((_DWORD *)v25 - 117);
            if ( (v26 & 0x2000) != 0 && (v26 & 0x4000) == 0 )
            {
              v27 = 0;
              memset((void *)v22, 0, v21);
              v29 = v24;
              if ( v24 < *((_DWORD *)a2 + 12) )
              {
                v30 = 0;
                do
                {
                  v31 = *((_QWORD *)a2 + 17);
                  v32 = 480LL * v29;
                  v28 = (struct CContainerPointerInput *)*(unsigned int *)(v32 + v31 + 4);
                  if ( ((unsigned __int16)v28 & 0x2000) != 0
                    && ((unsigned __int16)v28 & 0x4000) == 0
                    && *v25 == *(_WORD *)(v32 + v31 + 472)
                    && v25[1] == *(_WORD *)(v32 + v31 + 474) )
                  {
                    *(_DWORD *)(v32 + v31 + 4) = (unsigned int)v28 | 0x4000;
                    v33 = v22 + 192LL * v30;
                    *(_DWORD *)v33 = *(_DWORD *)(v32 + v31 + 156);
                    v34 = (_OWORD *)(v32 + v31 + 160);
                    *(_OWORD *)(v33 + 8) = *v34;
                    *(_OWORD *)(v33 + 24) = v34[1];
                    *(_OWORD *)(v33 + 40) = v34[2];
                    *(_OWORD *)(v33 + 56) = v34[3];
                    *(_OWORD *)(v33 + 72) = v34[4];
                    *(_OWORD *)(v33 + 88) = v34[5];
                    *(_OWORD *)(v33 + 104) = v34[6];
                    v35 = v34[7];
                    v34 += 8;
                    *(_OWORD *)(v33 + 120) = v35;
                    *(_OWORD *)(v33 + 136) = *v34;
                    *(_OWORD *)(v33 + 152) = v34[1];
                    *(_OWORD *)(v33 + 168) = v34[2];
                    *(_QWORD *)(v33 + 184) = *((_QWORD *)v34 + 6);
                    *(_DWORD *)(v33 + 28) &= 0xFF87FFFE;
                    Feature_InputVirtualizationDesktopSpecific__private_ReportDeviceUsage();
                    CDesktopInputTransform::TransformPointerCoordinates((struct tagRIMPOINTERINFONODE *)v33);
                    ++v30;
                  }
                  ++v29;
                }
                while ( v29 < *((_DWORD *)a2 + 12) );
                v27 = v30;
                v24 = v38;
              }
              v42 = 0;
              v16 += 192 * v27;
              LODWORD(v43[3]) = v27;
              v43[15] = v22;
              v40[0] = v43;
              LODWORD(v43[0]) = v16;
              v41 = *(_DWORD *)v25;
              v40[1] = a2;
              IVRootDeliver::Pointer::SendTouchInput((IVRootDeliver::Pointer *)v40, v28);
              if ( (*(_DWORD *)(v22 + 28) & 0x10000) != 0 )
              {
                v36 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(v22 + 32), 19);
                Processor = CPTPProcessorFactory::GetProcessor(v36);
                v21 = v39;
                if ( Processor )
                {
                  *((_DWORD *)Processor + 95) |= 2u;
                  *((_DWORD *)Processor + 94) = v41;
                }
              }
              else
              {
                v21 = v39;
              }
            }
            ++v24;
            v25 += 240;
            v38 = v24;
          }
          while ( v24 < *((_DWORD *)a2 + 12) );
        }
        Win32FreePool(v22);
      }
    }
  }
}
