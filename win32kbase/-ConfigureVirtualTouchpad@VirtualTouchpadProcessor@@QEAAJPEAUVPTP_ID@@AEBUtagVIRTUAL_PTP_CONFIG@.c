__int64 __fastcall VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
        struct _LIST_ENTRY *this,
        struct VPTP_ID *a2,
        const struct tagVIRTUAL_PTP_CONFIG *a3)
{
  __int64 result; // rax
  struct VPTPTouchpad *v7; // rdi
  int RimDevice; // esi
  __int128 v9; // xmm1
  _OWORD *v10; // r14
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // eax
  char v29; // dl
  VirtualTouchpadProcessor *v30; // rcx
  struct RawInputManagerDeviceObject *v31; // rbx
  struct VPTPTouchpad *v32; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v33[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[80]; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  __int128 Buf1; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v41[80]; // [rsp+120h] [rbp+20h]
  __int128 v42; // [rsp+170h] [rbp+70h]
  __int128 v43; // [rsp+180h] [rbp+80h]
  __int128 v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+1A0h] [rbp+A0h]

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 202);
  }
  v32 = 0LL;
  result = VirtualTouchpadProcessor::FindTouchpadForConfig(this, a2, a3, &v32);
  v7 = v32;
  RimDevice = result;
  if ( v32 )
  {
    v9 = *((_OWORD *)a3 + 1);
    v10 = (_OWORD *)((char *)v32 + 40);
    Buf1 = *(_OWORD *)a3;
    v11 = *((_QWORD *)a3 + 18);
    v12 = *((_OWORD *)a3 + 2);
    *(_OWORD *)v41 = v9;
    v13 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v41[16] = v12;
    v14 = *((_OWORD *)a3 + 4);
    *(_OWORD *)&v41[32] = v13;
    v15 = *((_OWORD *)a3 + 5);
    *(_OWORD *)&v41[48] = v14;
    v16 = *((_OWORD *)a3 + 6);
    *(_OWORD *)&v41[64] = v15;
    v17 = *((_OWORD *)a3 + 8);
    v42 = v16;
    v43 = *((_OWORD *)a3 + 7);
    v18 = *(_OWORD *)((char *)v32 + 40);
    v44 = v17;
    v45 = v11;
    v19 = *(_OWORD *)((char *)v32 + 56);
    v20 = *((_QWORD *)v32 + 23);
    Buf2 = v18;
    v21 = *(_OWORD *)((char *)v32 + 72);
    *(_OWORD *)v35 = v19;
    v22 = *(_OWORD *)((char *)v32 + 88);
    *(_OWORD *)&v35[16] = v21;
    v23 = *(_OWORD *)((char *)v32 + 104);
    *(_OWORD *)&v35[32] = v22;
    v24 = *(_OWORD *)((char *)v32 + 120);
    *(_OWORD *)&v35[48] = v23;
    v25 = *(_OWORD *)((char *)v32 + 136);
    *(_OWORD *)&v35[64] = v24;
    v26 = *(_OWORD *)((char *)v32 + 152);
    v36 = v25;
    v27 = *(_OWORD *)((char *)v32 + 168);
    v37 = v26;
    v38 = v27;
    v39 = v20;
    memset(v33, 0, sizeof(v33));
    *(_OWORD *)&v41[4] = v33[0];
    *(_OWORD *)&v41[20] = v33[1];
    *(_OWORD *)&v41[36] = v33[2];
    *(_OWORD *)&v41[52] = v33[3];
    memset(v33, 0, sizeof(v33));
    *(_OWORD *)&v35[4] = v33[0];
    *(_OWORD *)&v35[20] = v33[1];
    *(_OWORD *)&v35[36] = v33[2];
    *(_OWORD *)&v35[52] = v33[3];
    if ( !*(_DWORD *)a3 || !*((_QWORD *)v32 + 4) || (v28 = memcmp(&Buf1, &Buf2, 0x98uLL), v29 = 1, v28) )
      v29 = 0;
    v30 = (struct VPTPTouchpad *)((char *)v7 + 168);
    *v10 = *(_OWORD *)a3;
    *(_OWORD *)((char *)v7 + 56) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)v7 + 72) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)v7 + 88) = *((_OWORD *)a3 + 3);
    *(_OWORD *)((char *)v7 + 104) = *((_OWORD *)a3 + 4);
    *(_OWORD *)((char *)v7 + 120) = *((_OWORD *)a3 + 5);
    *(_OWORD *)((char *)v7 + 136) = *((_OWORD *)a3 + 6);
    *(_OWORD *)((char *)v7 + 152) = *((_OWORD *)a3 + 7);
    *(_OWORD *)((char *)v7 + 168) = *((_OWORD *)a3 + 8);
    *((_QWORD *)v7 + 23) = *((_QWORD *)a3 + 18);
    if ( !v29 )
    {
      v31 = (struct RawInputManagerDeviceObject *)*((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = 0LL;
      if ( !*(_DWORD *)v10 )
        goto LABEL_14;
      RimDevice = VirtualTouchpadProcessor::CreateRimDevice((VirtualTouchpadProcessor *)this, v7);
      if ( RimDevice < 0 )
        *(_DWORD *)v10 = 0;
      if ( !*(_DWORD *)v10 )
      {
LABEL_14:
        VirtualTouchpadProcessor::RemoveTouchpad(v30, v7);
        *(_DWORD *)a2 = 0;
      }
      if ( v31 )
        VirtualTouchpadProcessor::RemoveRimDevice(v30, v31);
    }
    return (unsigned int)RimDevice;
  }
  else
  {
    *(_DWORD *)a2 = 0;
  }
  return result;
}
