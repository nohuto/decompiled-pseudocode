/*
 * XREFs of USBHwSelectStreamingMIDIInterface @ 0x1C002E090
 * Callers:
 *     USBDeviceSetPowerState @ 0x1C002C880 (USBDeviceSetPowerState.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0031240 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     memmove @ 0x1C0013540 (memmove.c)
 *     memset @ 0x1C0013800 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C002C98C (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002C9E0 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBMidiInPipePrimer @ 0x1C00339BC (USBMidiInPipePrimer.c)
 */

__int64 __fastcall USBHwSelectStreamingMIDIInterface(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v6; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  USHORT v10; // bp
  struct _URB *v11; // r12
  int i; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  USBD_CONFIGURATION_HANDLE *p_ConfigurationHandle; // r14
  __int64 v18; // rdx
  ULONG *p_MaximumTransferSize; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r9
  ULONG NumberOfPipes; // eax
  void *v24; // rbx
  PVOID v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  struct _URB *PoolWithTag; // [rsp+78h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD **)(v3 + 72);
  if ( *(_BYTE *)(v3 + 64) )
    return 3221226166LL;
  if ( *(_BYTE *)(a2 + 16) )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(unsigned __int8 *)(v8 + 4);
  if ( !*(_BYTE *)(v8 + 4) )
    return 3221225858LL;
  v10 = 24 * (v9 + 1);
  PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(24 * v9 + 56), 0x41627845u);
  v11 = PoolWithTag;
  i = -1073741670;
  if ( PoolWithTag )
  {
    v13 = v6[5];
    v14 = 0LL;
    for ( i = -1073741808; (unsigned int)v14 < *(unsigned __int8 *)(v13 + 4); v14 = (unsigned int)(v14 + 1) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * (unsigned int)v14) + 2LL) == *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
        break;
    }
    v15 = v6[2];
    v16 = 2 * v14;
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 8 * v16) + 2LL) != *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
      goto LABEL_38;
    p_ConfigurationHandle = &PoolWithTag->UrbSelectConfiguration.ConfigurationHandle;
    memmove(&PoolWithTag->UrbOSFeatureDescriptorRequest.Reserved0, *(const void **)(v15 + 8 * v16 + 8), v10);
    PoolWithTag->UrbSelectInterface.Interface.Length = v10;
    PoolWithTag->UrbSelectInterface.Interface.AlternateSetting = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 3LL);
    if ( (_DWORD)v9 )
    {
      v18 = 0LL;
      p_MaximumTransferSize = &PoolWithTag->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize;
      v20 = v9;
      do
      {
        v21 = *(_QWORD *)(v18 + *(_QWORD *)(a2 + 48));
        v18 += 8LL;
        *p_MaximumTransferSize = *(unsigned __int16 *)(v21 + 4);
        p_MaximumTransferSize += 6;
        --v20;
      }
      while ( v20 );
    }
    PoolWithTag->UrbHeader.Length = 24 * v9 + 56;
    PoolWithTag->UrbHeader.Function = 1;
    PoolWithTag->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v6[3];
    i = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), PoolWithTag, 0LL);
    if ( PoolWithTag->UrbHeader.Status < 0 )
      i = -1073741668;
    if ( i < 0 )
      goto LABEL_38;
    if ( PoolWithTag->UrbSelectInterface.Interface.NumberOfPipes > (unsigned int)v9 )
      i = -1073741668;
    if ( i < 0 )
      goto LABEL_38;
    *(_BYTE *)(a2 + 16) = 1;
    NumberOfPipes = PoolWithTag->UrbSelectInterface.Interface.NumberOfPipes;
    if ( a3 )
    {
      *(_DWORD *)(a2 + 32) = NumberOfPipes;
      v24 = *(void **)(a1 + 8);
      v25 = ExAllocatePoolWithTag((POOL_TYPE)512, 168 * NumberOfPipes, 0x41627845u);
      *(_QWORD *)(a2 + 40) = v25;
      if ( v25 )
        i = USBHwAllocateAndBag((PVOID *)(a2 + 40), v24);
      else
        i = -1073741670;
      if ( i < 0 )
      {
LABEL_38:
        ExFreePool(v11);
        return (unsigned int)i;
      }
      memset(*(void **)(a2 + 40), 0, 168LL * *(unsigned int *)(a2 + 32));
    }
    else if ( *(_DWORD *)(a2 + 32) != NumberOfPipes )
    {
      i = -1073741438;
    }
    if ( i >= 0 )
    {
      v26 = 0;
      if ( *(_DWORD *)(a2 + 32) )
      {
        do
        {
          if ( i < 0 )
            break;
          v27 = *(_QWORD *)(a2 + 40);
          v28 = 168LL * v26;
          *(_OWORD *)(v27 + v28) = *(_OWORD *)&p_ConfigurationHandle[3 * v26 + 3];
          *(_QWORD *)(v27 + v28 + 16) = p_ConfigurationHandle[3 * v26 + 5];
          if ( a3 )
          {
            v29 = (_QWORD *)(v28 + *(_QWORD *)(a2 + 40) + 48LL);
            v29[1] = v29;
            *v29 = v29;
          }
          if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v26) + 2LL) < 0 )
          {
            LOBYTE(v22) = a3;
            i = USBMidiInPipePrimer(a1, a2, v26, v22);
          }
          ++v26;
        }
        while ( v26 < *(_DWORD *)(a2 + 32) );
        v11 = PoolWithTag;
      }
    }
    goto LABEL_38;
  }
  return (unsigned int)i;
}
