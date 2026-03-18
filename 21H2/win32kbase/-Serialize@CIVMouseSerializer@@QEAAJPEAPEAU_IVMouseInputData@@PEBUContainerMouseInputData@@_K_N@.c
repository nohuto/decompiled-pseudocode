/*
 * XREFs of ?Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01FD1A0
 * Callers:
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSerializer@@@Z @ 0x1C01ECC6C (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSer.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01F5F98 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C01FD114 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CIVMouseSerializer::Serialize(
        CIVMouseSerializer *this,
        struct _IVMouseInputData **a2,
        const struct ContainerMouseInputData *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rsi
  int v8; // edx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _IVMouseInputData *v14; // rdx
  _WORD *v15; // rdx
  _WORD *v16; // rcx
  __int16 v17; // ax

  v6 = a4;
  v8 = 48 * a4;
  if ( a5 )
  {
    *((_DWORD *)this + 2) += v8;
  }
  else
  {
    v10 = *((unsigned int *)this + 3);
    if ( !CIVSerializer::Ensure(this, v8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = (struct _IVMouseInputData *)(*((_QWORD *)this + 2) + v10);
    *a2 = v14;
    if ( v6 )
    {
      v15 = (_WORD *)((char *)v14 + 8);
      v16 = (_WORD *)((char *)a3 + 4);
      do
      {
        *(v15 - 4) = *(v16 - 2);
        *(v15 - 2) = *(v16 - 1);
        v17 = *v16;
        v16 += 32;
        *v15 = v17;
        v15 += 24;
        *(v15 - 22) = *(v16 - 31);
        *((_DWORD *)v15 - 10) = *((_DWORD *)v16 - 15);
        *((_DWORD *)v15 - 9) = *((_DWORD *)v16 - 14);
        *((_DWORD *)v15 - 8) = *((_DWORD *)v16 - 13);
        *((_DWORD *)v15 - 7) = *((_DWORD *)v16 - 12);
        *((_QWORD *)v15 - 3) = *(_QWORD *)(v16 - 6);
        *((_DWORD *)v15 - 4) = *((_DWORD *)v16 - 5);
        --v6;
      }
      while ( v6 );
      v14 = *a2;
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)v14 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}
