/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B7140
 * Callers:
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B52C8 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B58E0 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B4B94 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVMouseInputData **a2,
        const struct ContainerMouseInputData *a3,
        __int64 a4,
        bool a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v10; // rbp
  struct _IVMouseInputData *v11; // rcx
  _WORD *v12; // rcx
  _WORD *v13; // rdx
  __int16 v14; // ax

  v6 = (36 * a4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = a4;
  if ( a5 )
  {
    *((_QWORD *)this + 4) += v6;
  }
  else
  {
    v10 = *((_QWORD *)this + 5);
    if ( !CIVSerializer::Ensure(this, v6) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2823);
    v11 = (struct _IVMouseInputData *)(v10 + *((_QWORD *)this + 2));
    *a2 = v11;
    if ( v7 )
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
        v12 += 18;
        *(v12 - 16) = *(v13 - 31);
        *((_DWORD *)v12 - 7) = *((_DWORD *)v13 - 15);
        *((_DWORD *)v12 - 6) = *((_DWORD *)v13 - 14);
        *((_DWORD *)v12 - 5) = *((_DWORD *)v13 - 13);
        *((_DWORD *)v12 - 4) = *((_DWORD *)v13 - 12);
        *((_DWORD *)v12 - 3) = *((_DWORD *)v13 - 5);
        --v7;
      }
      while ( v7 );
      v11 = *a2;
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)v11 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}
