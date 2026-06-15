/*
 * XREFs of ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140063C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140061004 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x140064AF4 (McTemplateU0pqqx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddAudioHistoryPacket(
        CCrossProcessServerOutputEndpoint *this,
        int a2,
        struct AE_CURRENT_POSITION *a3,
        enum APO_BUFFER_FLAGS a4,
        void *Src)
{
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // edi
  CCrossProcessBaseEndpoint *v12; // rcx
  __int64 v13; // rdx
  int v15; // edx
  int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int v19; // edi
  void *v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this - 51) + 180LL) == -1 )
    _InterlockedExchange(
      (volatile __int32 *)(*((_QWORD *)this - 51) + 180LL),
      *(_DWORD *)(*((_QWORD *)this - 50) + 168LL));
  v9 = *(unsigned int *)(*((_QWORD *)this - 51) + 188LL);
  v10 = *(_DWORD *)(*((_QWORD *)this - 51) + 184LL);
  v11 = *(_DWORD *)(*((_QWORD *)this - 50) + 148LL);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *(_DWORD *)(*((_QWORD *)this - 51) + 188LL), v11) )
  {
    v13 = 787LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpserveroutputendpoint.cpp",
      (const char *)0x887C0045LL);
    return 2289827909LL;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(v12, v10, v11) )
  {
    v13 = 788LL;
    goto LABEL_5;
  }
  v16 = *((_DWORD *)this - 98);
  if ( (_DWORD)v9 )
  {
    v18 = *(_DWORD *)(((unsigned __int64)(unsigned int)(v9 - 1) << 6) + *((_QWORD *)this - 44) + 4)
        + v16 * *(_DWORD *)(((unsigned __int64)(unsigned int)(v9 - 1) << 6) + *((_QWORD *)this - 44) + 56);
    v17 = *((_QWORD *)this - 50);
  }
  else
  {
    v17 = *((_QWORD *)this - 50);
    v18 = *(_DWORD *)(v17 + 172);
  }
  v19 = a2 * v16;
  if ( v19 + v18 <= *(_DWORD *)(v17 + 176) && a4 )
  {
    if ( (byte_140090541 & 4) != 0 )
      McTemplateU0pqqx_EventWriteTransfer(v17, v15, (_DWORD)this - 480, a2, a4, a3->hnsQPCPosition);
    v20 = (void *)(*((_QWORD *)this - 51) + v18);
    if ( a4 == BUFFER_SILENT )
      memset_0(v20, 0, v19);
    else
      memcpy_0(v20, Src, v19);
    v21 = *(_OWORD *)&a3->u64DevicePosition;
    v22 = v9 << 6;
    v23 = *(_OWORD *)&a3->u64PaddingFrames;
    *(_DWORD *)(v22 + *((_QWORD *)this - 44)) = 1;
    *(_DWORD *)(v22 + *((_QWORD *)this - 44) + 4) = v18;
    *(_DWORD *)(v22 + *((_QWORD *)this - 44) + 56) = a2;
    v24 = *((_QWORD *)this - 44);
    *(_OWORD *)(v22 + v24 + 16) = v21;
    *(_QWORD *)&v21 = *(_QWORD *)&a3->f32FramesPerSecond;
    *(_OWORD *)(v22 + v24 + 32) = v23;
    *(_QWORD *)(v22 + v24 + 48) = v21;
    *(_DWORD *)(v22 + *((_QWORD *)this - 44) + 8) = a4;
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 51) + 188LL), v9 + 1);
  }
  return 0LL;
}
