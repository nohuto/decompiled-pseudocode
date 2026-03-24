/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C02759A0
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01CCB00 (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C002EB28 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        ULONG a7,
        ULONG a8,
        ULONG *a9,
        ULONG *a10)
{
  signed int v14; // edi
  __int128 v15; // xmm1
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  signed int ZeroInit; // ecx
  ULONG *v20; // rbx
  ULONG DoNotUseThisField_low; // ecx
  __int64 v22; // rdx
  HANDLE v23; // rcx
  PVOID v25; // [rsp+48h] [rbp-79h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h] BYREF
  struct _PORT_MESSAGE v27[3]; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+37h] BYREF

  v14 = -1073741823;
  if ( Object )
  {
    v14 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v27, 0, 0x74uLL);
      v27[0].u1.Length = 7602252;
      v27[0].u2.s2.Type = 0x8000;
      v27[1].u2.ZeroInit = a7;
      v27[2].CallbackId = a8;
      *(_QWORD *)&v27[2].MessageId = a6;
      v27[1].u1.Length = 1073741924;
      v27[2].ClientId.UniqueProcess = a3;
      v27[2].ClientId.UniqueThread = a4;
      v15 = *(_OWORD *)(a5 + 16);
      v27[1].8 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)a5;
      *(_QWORD *)&v27[2].u1.s1.DataLength = *(_QWORD *)(a5 + 32);
      *(_OWORD *)&v27[1].MessageId = v15;
      EtwUpdateEvent(0LL, 1073741924LL, v16, v17);
      v26 = 116LL;
      v18 = LpcSendWaitReceivePort(Object, 0x20000LL, v27, v27, &v26, 0LL);
      v14 = SyncLpcCheckNtStatus(v18, v27);
      if ( v14 >= 0 )
      {
        ZeroInit = v27[1].u2.ZeroInit;
        v20 = a9;
        *a9 = v27[1].u2.ZeroInit;
        if ( ZeroInit < 0 )
        {
          v20[1] = 0;
          v20[2] = 0;
        }
        else
        {
          DoNotUseThisField_low = LODWORD(v27[1].DoNotUseThisField);
          v20[1] = v27[1].MessageId;
          *(_QWORD *)(v20 + 3) = *(_QWORD *)(&v27[1].MessageId + 1);
          v20[5] = *(&v27[1].CallbackId + 1);
          v20[2] = DoNotUseThisField_low;
          if ( DoNotUseThisField_low )
          {
            v22 = *(_QWORD *)((char *)&v27[1].DoNotUseThisField + 4);
            Handle = 0LL;
            v20[9] = *((_DWORD *)&v27[1].DoNotUseThisField + 3);
            if ( (int)ObDuplicateObject(a2, v22, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
            {
              v25 = 0LL;
              ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v25, 0LL);
              v23 = Handle;
              *((_QWORD *)v20 + 5) = v25;
              ZwClose(v23);
            }
          }
          else
          {
            *((_QWORD *)v20 + 5) = 0LL;
            v20[9] = 0;
          }
          v14 = 0;
          *a10 = v27[2].u1.Length;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v14;
}
