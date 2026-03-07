DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct ADAPTER_RENDER *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  DXGK_VIRTUAL_GPU_PARAV *result; // rax

  DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(this, a2, 1);
  *(_QWORD *)v2 = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  *(_BYTE *)(v2 + 173) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v2 + 176, 0);
  *(_QWORD *)(v3 + 72) = v4;
  *(_QWORD *)(v3 + 80) = v4;
  *(_DWORD *)(v3 + 96) = -1;
  *(_DWORD *)(v3 + 88) = v4;
  *(_DWORD *)(v3 + 92) = 63;
  *(_BYTE *)(v3 + 104) = v4;
  *(_QWORD *)(v5 + 288) = v4;
  *(_QWORD *)(v5 + 296) = v4;
  *(_DWORD *)(v5 + 304) = v4;
  *(_DWORD *)(v5 + 308) = 17;
  *(_DWORD *)(v5 + 312) = -1;
  *(_QWORD *)(v5 + 336) = v4;
  *(_OWORD *)(v5 + 344) = 0LL;
  *(_QWORD *)(v5 + 360) = 0LL;
  *(_DWORD *)(v5 + 368) = 1;
  *(_DWORD *)(v5 + 384) = 0;
  *(_QWORD *)(v5 + 328) = v5 + 320;
  *(_QWORD *)(v5 + 320) = v5 + 320;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 16) + 24LL));
  *(_DWORD *)(v5 + 384) |= 1u;
  result = (DXGK_VIRTUAL_GPU_PARAV *)v5;
  *(_QWORD *)(v5 + 376) = -1LL;
  return result;
}
