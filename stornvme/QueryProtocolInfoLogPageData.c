/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C001944C
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0013B68 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // r10
  __int64 v5; // r13
  char v6; // r12
  __int64 SrbDataBuffer; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int *v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // ebx
  int v14; // esi
  bool v15; // al
  char v16; // cl
  const void *v17; // rdx
  char v18; // cl
  int v19; // eax
  unsigned __int8 v20; // cl
  unsigned int v22; // r13d
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  bool v24; // [rsp+D0h] [rbp+50h]
  unsigned int ControllerMaxTransferSize; // [rsp+D8h] [rbp+58h]

  v2 = 0;
  GetSrbExtension(a2);
  v5 = *(_QWORD *)(v4 + 1840);
  v6 = 1;
  v24 = 1;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)v4);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v23);
  v11 = (unsigned int *)(SrbDataBuffer + 28);
  v12 = *(_DWORD *)(SrbDataBuffer + 44);
  if ( v12 > 0xD )
  {
    if ( v12 == 128 )
    {
      v13 = 64;
      goto LABEL_35;
    }
    if ( v12 == 129 )
    {
      v13 = 512;
      goto LABEL_35;
    }
    if ( v12 == 192 || v12 == 193 || v12 == 194 || v12 == 196 || v12 == 197 || v12 - 200 < 2 )
    {
      v13 = *(_DWORD *)(SrbDataBuffer + 56);
      goto LABEL_13;
    }
LABEL_34:
    v13 = *(_DWORD *)(SrbDataBuffer + 56);
LABEL_35:
    v14 = 0;
    goto LABEL_14;
  }
  switch ( v12 )
  {
    case 0xDu:
      v13 = *(_DWORD *)(SrbDataBuffer + 56);
      v16 = *(_BYTE *)(v5 + 261) >> 4;
      v24 = v13 >= 0x200;
      if ( (*(_BYTE *)(v5 + 261) & 0x10) != 0 )
        v10 = (unsigned __int64)*(unsigned int *)(v5 + 352) << 16;
      goto LABEL_23;
    case 1u:
      v13 = *(_DWORD *)(SrbDataBuffer + 56);
      v14 = -1;
      v15 = v13 >= 0x40;
      goto LABEL_40;
    case 2u:
      v13 = 512;
      v14 = -((*(_BYTE *)(v5 + 261) & 1) == 0);
      goto LABEL_14;
    case 3u:
      goto LABEL_12;
    case 4u:
      v13 = 4096;
      goto LABEL_13;
    case 5u:
      v13 = 4096;
      v16 = *(_BYTE *)(v5 + 261) >> 1;
LABEL_23:
      v14 = -1;
      goto LABEL_24;
    case 6u:
      v13 = 564;
      goto LABEL_13;
  }
  if ( v12 != 7 && v12 != 8 )
  {
    if ( v12 == 9 )
    {
LABEL_12:
      v13 = 512;
LABEL_13:
      v14 = -1;
LABEL_14:
      v15 = 1;
      goto LABEL_40;
    }
    goto LABEL_34;
  }
  v13 = *(_DWORD *)(SrbDataBuffer + 56);
  v14 = -1;
  v16 = *(_BYTE *)(v5 + 261) >> 3;
  v24 = v13 >= 0x200;
LABEL_24:
  if ( (v16 & 1) == 0 )
  {
    v2 = -1056964606;
LABEL_60:
    v6 = 6;
    goto LABEL_61;
  }
  v15 = v24;
LABEL_40:
  if ( v11[7] >= v13 && v13 && v15 )
  {
    if ( v12 == 5 )
    {
      v17 = *(const void **)(v9 + 3992);
      if ( v17 )
      {
        memmove((char *)v11 + v11[6] + 8, v17, v13);
LABEL_61:
        *(_BYTE *)(a2 + 3) = v6;
        return v2;
      }
      goto LABEL_59;
    }
    if ( v14 != -1 )
    {
      v18 = *(_BYTE *)(a2 + 2);
      v19 = v18 == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
      if ( (v19 & 1) == 0 )
      {
        if ( v18 == 40 )
          v20 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v20 = *(_BYTE *)(a2 + 7);
        GetNamespaceId(v9, v20);
      }
    }
    if ( (*(_BYTE *)(v5 + 261) & 4) != 0 )
      v8 = v11[5] | ((unsigned __int64)v11[9] << 32);
    if ( v10 )
    {
      if ( v8 >= v10 )
      {
LABEL_59:
        v2 = -1056964602;
        goto LABEL_60;
      }
      if ( v13 > (int)v10 - (int)v8 )
        v13 = v10 - v8;
    }
    v22 = v13;
    if ( v13 > ControllerMaxTransferSize )
      v22 = ControllerMaxTransferSize;
    NVMeAllocateDmaBuffer(v9, v22);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
