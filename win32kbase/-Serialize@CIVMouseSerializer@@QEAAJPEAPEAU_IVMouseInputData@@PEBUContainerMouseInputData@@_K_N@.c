/*
 * XREFs of ?Serialize@CIVMouseSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C02334BC
 * Callers:
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSerializer@@@Z @ 0x1C021D8E8 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAVCIVMouseSer.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0228090 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVMouseSerializer::Serialize(
        CIVMouseSerializer *this,
        struct _IVMouseInputData **a2,
        const struct ContainerMouseInputData *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rsi
  int v7; // edx
  __int64 v10; // r14
  struct _IVMouseInputData *v11; // rcx
  _WORD *v12; // rcx
  _WORD *v13; // rdx
  __int16 v14; // ax

  v6 = a4;
  v7 = 48 * a4;
  if ( a5 )
  {
    *((_DWORD *)this + 2) += v7;
  }
  else
  {
    v10 = *((unsigned int *)this + 3);
    if ( !CIVSerializer::Ensure(this, v7) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 257);
    v11 = (struct _IVMouseInputData *)(*((_QWORD *)this + 2) + v10);
    *a2 = v11;
    if ( v6 )
    {
      v12 = (_WORD *)((char *)v11 + 8);
      v13 = (_WORD *)((char *)a3 + 4);
      do
      {
        *(v12 - 4) = *(v13 - 2);
        *(v12 - 2) = *(v13 - 1);
        v14 = *v13;
        v13 += 32;
        *v12 = v14;
        v12 += 24;
        *(v12 - 22) = *(v13 - 31);
        *((_DWORD *)v12 - 10) = *((_DWORD *)v13 - 15);
        *((_DWORD *)v12 - 9) = *((_DWORD *)v13 - 14);
        *((_DWORD *)v12 - 8) = *((_DWORD *)v13 - 13);
        *((_DWORD *)v12 - 7) = *((_DWORD *)v13 - 12);
        *((_QWORD *)v12 - 3) = *(_QWORD *)(v13 - 6);
        *((_DWORD *)v12 - 4) = *((_DWORD *)v13 - 5);
        --v6;
      }
      while ( v6 );
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)*a2 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}
