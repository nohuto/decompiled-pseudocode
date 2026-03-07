__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  int v15; // r8d
  struct DXGKVMB_COMMAND_BASE *v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  _OWORD *v20; // rdx
  int v21; // eax
  int v22; // r8d
  _OWORD *v23; // r8
  __int64 v24; // rax
  __int128 v25; // xmm1
  bool v26; // zf
  int v27; // edx
  struct _MDL *v29; // [rsp+20h] [rbp-158h]
  struct DXGKVMB_COMMAND_BASE *v30[2]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-138h]

  if ( a7 )
    v15 = *(_DWORD *)(a7 + 8);
  else
    v15 = 0;
  v31 = 0;
  *(_OWORD *)v30 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v30, a1, v15 + 1160, 0LL, 0LL, 0LL);
  v16 = v30[0];
  if ( v30[0] )
  {
    v18 = *(_DWORD *)(a2 + 504);
    *(_QWORD *)v30[0] = 0LL;
    *((_DWORD *)v16 + 5) = 0;
    *((_BYTE *)v16 + 12) = 0;
    *((_DWORD *)v16 + 3) &= 0x1FFu;
    *((_DWORD *)v16 + 2) = v18;
    *((_DWORD *)v16 + 4) = 64;
    if ( a3 )
      v19 = *(_DWORD *)(a3 + 28);
    else
      v19 = 0;
    v20 = a6;
    *((_DWORD *)v16 + 6) = v19;
    *((_QWORD *)v16 + 4) = a5;
    v21 = a8;
    *((_QWORD *)v16 + 6) = a7;
    *((_QWORD *)v16 + 5) = a6;
    *((_QWORD *)v16 + 7) = a4;
    if ( a8 )
      v21 = *(_DWORD *)(a8 + 84);
    *((_DWORD *)v16 + 16) = v21;
    if ( a9 )
      v22 = *(_DWORD *)(a9 + 20);
    else
      v22 = 0;
    *((_DWORD *)v16 + 17) = v22;
    v23 = (_OWORD *)((char *)v16 + 72);
    v24 = 8LL;
    do
    {
      *v23 = *v20;
      v23[1] = v20[1];
      v23[2] = v20[2];
      v23[3] = v20[3];
      v23[4] = v20[4];
      v23[5] = v20[5];
      v23[6] = v20[6];
      v23 += 8;
      v25 = v20[7];
      v20 += 8;
      *(v23 - 1) = v25;
      --v24;
    }
    while ( v24 );
    *v23 = *v20;
    v23[1] = v20[1];
    v23[2] = v20[2];
    *((_QWORD *)v23 + 6) = *((_QWORD *)v20 + 6);
    v26 = *((_DWORD *)v16 + 18) == 2;
    *((_QWORD *)v16 + 10) = a11;
    if ( v26 )
    {
      *((_QWORD *)v16 + 17) = 0LL;
      *((_DWORD *)v16 + 33) &= ~0x2000000u;
      *((_QWORD *)v16 + 15) = 0LL;
      *((_QWORD *)v16 + 12) = a10;
      *((_QWORD *)v16 + 18) = 0LL;
    }
    if ( a7 )
      v27 = *(_DWORD *)(a7 + 8);
    else
      v27 = 0;
    *((_DWORD *)v16 + 288) = v27;
    if ( a7 )
      memmove((char *)v16 + 1160, (const void *)(a7 + 16), *(unsigned int *)(a7 + 8));
    v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (unsigned __int8 *)v30[1], v30[0], v31, v29);
  }
  else
  {
    v17 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
  return v17;
}
