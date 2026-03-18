/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0273230
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01C9964 (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CCA80 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  int v12; // edi
  __int128 v13; // xmm1
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // rbx
  int v17; // ecx
  __int64 v18; // rdx
  HANDLE v19; // rcx
  PVOID v21; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v23[112]; // [rsp+58h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+47h] BYREF

  v12 = -1073741823;
  if ( Object )
  {
    if ( !gbInVideoPnpCallout )
    {
      memset(v23, 0, sizeof(v23));
      *(_DWORD *)v23 = 7340104;
      *(_WORD *)&v23[4] = 0x8000;
      *(_DWORD *)&v23[44] = a7;
      *(_QWORD *)&v23[104] = a6;
      *(_DWORD *)&v23[40] = 1073741928;
      *(_QWORD *)&v23[88] = a3;
      *(_QWORD *)&v23[96] = a4;
      v13 = *(_OWORD *)(a5 + 16);
      *(_OWORD *)&v23[48] = *(_OWORD *)a5;
      *(_QWORD *)&v23[80] = *(_QWORD *)(a5 + 32);
      *(_OWORD *)&v23[64] = v13;
      EtwUpdateEvent(0LL);
      v22 = 112LL;
      v14 = LpcSendWaitReceivePort(Object, 0x20000LL, v23, v23, &v22, 0LL);
      v12 = SyncLpcCheckNtStatus(v14, (struct _PORT_MESSAGE *)v23);
      if ( v12 >= 0 )
      {
        v15 = *(_DWORD *)&v23[44];
        v16 = a8;
        *a8 = *(_DWORD *)&v23[44];
        if ( v15 < 0 )
        {
          v16[1] = 0;
          v16[2] = 0;
        }
        else
        {
          v17 = *(_DWORD *)&v23[48];
          v16[1] = *(_DWORD *)&v23[64];
          *(_QWORD *)(v16 + 3) = *(_QWORD *)&v23[68];
          v16[5] = *(_DWORD *)&v23[76];
          v16[2] = v17;
          if ( v17 )
          {
            v18 = *(_QWORD *)&v23[52];
            Handle = 0LL;
            v16[9] = *(_DWORD *)&v23[60];
            if ( (int)ObDuplicateObject(a2, v18, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
            {
              v21 = 0LL;
              ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v21, 0LL);
              v19 = Handle;
              *((_QWORD *)v16 + 5) = v21;
              ZwClose(v19);
            }
          }
          else
          {
            *((_QWORD *)v16 + 5) = 0LL;
            v16[9] = 0;
          }
          v12 = 0;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v12;
}
