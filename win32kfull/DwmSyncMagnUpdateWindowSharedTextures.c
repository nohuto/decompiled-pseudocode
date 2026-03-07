__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        int a7,
        int *a8)
{
  int v12; // edi
  __int128 v13; // xmm1
  int v14; // eax
  int v15; // eax
  int *v16; // rbx
  int v17; // ecx
  __int64 v18; // rdx
  HANDLE v19; // rcx
  PVOID v21; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  struct _PORT_MESSAGE v23; // [rsp+58h] [rbp-49h] BYREF
  int v24; // [rsp+80h] [rbp-21h]
  int v25; // [rsp+84h] [rbp-1Dh]
  __int128 v26; // [rsp+88h] [rbp-19h]
  __int128 v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  __int64 v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  HANDLE Handle; // [rsp+E8h] [rbp+47h] BYREF

  v12 = -1073741823;
  if ( Object )
  {
    v12 = DwmSyncLPCAllowed();
    if ( v12 >= 0 )
    {
      memset_0(&v23, 0, 0x70uLL);
      v23.u1.Length = 7340104;
      v23.u2.s2.Type = 0x8000;
      v25 = a7;
      v31 = a6;
      v24 = 1073741928;
      v29 = a3;
      v30 = a4;
      v13 = a5[1];
      v26 = *a5;
      v28 = *((_QWORD *)a5 + 4);
      v27 = v13;
      EtwUpdateEvent(0LL, 1073741928LL);
      v22 = 112LL;
      v14 = LpcSendWaitReceivePort(Object, 0x20000LL, &v23, &v23, &v22, 0LL);
      v12 = SyncLpcCheckNtStatus(v14, &v23);
      if ( v12 >= 0 )
      {
        v15 = v25;
        v16 = a8;
        *a8 = v25;
        if ( v15 < 0 )
        {
          v16[1] = 0;
          v16[2] = 0;
        }
        else
        {
          v17 = v26;
          v16[1] = v27;
          *(_QWORD *)(v16 + 3) = *(_QWORD *)((char *)&v27 + 4);
          v16[5] = HIDWORD(v27);
          v16[2] = v17;
          if ( v17 )
          {
            v18 = *(_QWORD *)((char *)&v26 + 4);
            Handle = 0LL;
            v16[9] = HIDWORD(v26);
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
