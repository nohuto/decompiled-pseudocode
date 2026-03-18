/*
 * XREFs of ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1C0154140 (NtMITConfigureVirtualTouchpad.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C01F3340 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 *     ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x1C01F3788 (-FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PE.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F40F8 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C01F4164 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
        struct _LIST_ENTRY *this,
        struct VPTP_ID *a2,
        const struct tagVIRTUAL_PTP_CONFIG *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  struct VPTPTouchpad *v10; // rdi
  int RimDevice; // esi
  __int128 v12; // xmm1
  _OWORD *v13; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  int v31; // eax
  char v32; // dl
  VirtualTouchpadProcessor *v33; // rcx
  struct RawInputManagerDeviceObject *v34; // rbx
  struct VPTPTouchpad *v35; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v36[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[80]; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[80]; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+170h] [rbp+70h]
  __int128 v46; // [rsp+180h] [rbp+80h]
  __int128 v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+A0h]

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v35 = 0LL;
  result = VirtualTouchpadProcessor::FindTouchpadForConfig(this, a2, a3, &v35);
  v10 = v35;
  RimDevice = result;
  if ( v35 )
  {
    v12 = *((_OWORD *)a3 + 1);
    v13 = (_OWORD *)((char *)v35 + 40);
    Buf1 = *(_OWORD *)a3;
    v14 = *((_QWORD *)a3 + 18);
    v15 = *((_OWORD *)a3 + 2);
    *(_OWORD *)v44 = v12;
    v16 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v44[16] = v15;
    v17 = *((_OWORD *)a3 + 4);
    *(_OWORD *)&v44[32] = v16;
    v18 = *((_OWORD *)a3 + 5);
    *(_OWORD *)&v44[48] = v17;
    v19 = *((_OWORD *)a3 + 6);
    *(_OWORD *)&v44[64] = v18;
    v20 = *((_OWORD *)a3 + 8);
    v45 = v19;
    v46 = *((_OWORD *)a3 + 7);
    v21 = *(_OWORD *)((char *)v35 + 40);
    v47 = v20;
    v48 = v14;
    v22 = *(_OWORD *)((char *)v35 + 56);
    v23 = *((_QWORD *)v35 + 23);
    Buf2 = v21;
    v24 = *(_OWORD *)((char *)v35 + 72);
    *(_OWORD *)v38 = v22;
    v25 = *(_OWORD *)((char *)v35 + 88);
    *(_OWORD *)&v38[16] = v24;
    v26 = *(_OWORD *)((char *)v35 + 104);
    *(_OWORD *)&v38[32] = v25;
    v27 = *(_OWORD *)((char *)v35 + 120);
    *(_OWORD *)&v38[48] = v26;
    v28 = *(_OWORD *)((char *)v35 + 136);
    *(_OWORD *)&v38[64] = v27;
    v29 = *(_OWORD *)((char *)v35 + 152);
    v39 = v28;
    v30 = *(_OWORD *)((char *)v35 + 168);
    v40 = v29;
    v41 = v30;
    v42 = v23;
    memset(v36, 0, sizeof(v36));
    *(_OWORD *)&v44[4] = v36[0];
    *(_OWORD *)&v44[20] = v36[1];
    *(_OWORD *)&v44[36] = v36[2];
    *(_OWORD *)&v44[52] = v36[3];
    memset(v36, 0, sizeof(v36));
    *(_OWORD *)&v38[4] = v36[0];
    *(_OWORD *)&v38[20] = v36[1];
    *(_OWORD *)&v38[36] = v36[2];
    *(_OWORD *)&v38[52] = v36[3];
    if ( !*(_DWORD *)a3 || !*((_QWORD *)v35 + 4) || (v31 = memcmp(&Buf1, &Buf2, 0x98uLL), v32 = 1, v31) )
      v32 = 0;
    v33 = (struct VPTPTouchpad *)((char *)v10 + 168);
    *v13 = *(_OWORD *)a3;
    *(_OWORD *)((char *)v10 + 56) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)v10 + 72) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)v10 + 88) = *((_OWORD *)a3 + 3);
    *(_OWORD *)((char *)v10 + 104) = *((_OWORD *)a3 + 4);
    *(_OWORD *)((char *)v10 + 120) = *((_OWORD *)a3 + 5);
    *(_OWORD *)((char *)v10 + 136) = *((_OWORD *)a3 + 6);
    *(_OWORD *)((char *)v10 + 152) = *((_OWORD *)a3 + 7);
    *(_OWORD *)((char *)v10 + 168) = *((_OWORD *)a3 + 8);
    *((_QWORD *)v10 + 23) = *((_QWORD *)a3 + 18);
    if ( !v32 )
    {
      v34 = (struct RawInputManagerDeviceObject *)*((_QWORD *)v10 + 4);
      *((_QWORD *)v10 + 4) = 0LL;
      if ( !*(_DWORD *)v13 )
        goto LABEL_14;
      RimDevice = VirtualTouchpadProcessor::CreateRimDevice((VirtualTouchpadProcessor *)this, v10);
      if ( RimDevice < 0 )
        *(_DWORD *)v13 = 0;
      if ( !*(_DWORD *)v13 )
      {
LABEL_14:
        VirtualTouchpadProcessor::RemoveTouchpad(v33, v10);
        *(_DWORD *)a2 = 0;
      }
      if ( v34 )
        VirtualTouchpadProcessor::RemoveRimDevice(v33, v34);
    }
    return (unsigned int)RimDevice;
  }
  else
  {
    *(_DWORD *)a2 = 0;
  }
  return result;
}
