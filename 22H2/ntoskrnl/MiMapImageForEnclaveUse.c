/*
 * XREFs of MiMapImageForEnclaveUse @ 0x1408D3A0C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1408D30E8 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MiDereferenceControlAreaFile @ 0x1402D7994 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MmMapViewOfSection @ 0x1406128D0 (MmMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     MiValidateSectionCreate @ 0x14066B20C (MiValidateSectionCreate.c)
 */

NTSTATUS __fastcall MiMapImageForEnclaveUse(void *a1, __int64 a2, KPROCESSOR_MODE a3, _QWORD *a4, ULONG_PTR *a5)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v8; // r14
  unsigned __int64 v9; // rax
  _DWORD *v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // edi
  ULONG_PTR v13; // rbx
  PVOID Object; // [rsp+50h] [rbp-31h] BYREF
  __int64 v15; // [rsp+58h] [rbp-29h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-21h] BYREF

  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  result = ObReferenceObjectByHandle(a1, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = (struct _DMA_ADAPTER *)Object;
    v9 = MiSectionControlArea((__int64)Object);
    v11 = v9;
    if ( ((__int64)v8[3].DmaOperations & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v13 = MiReferenceControlAreaFile(v9);
        v12 = MiValidateSectionCreate(v13, v11, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v11, v13);
        if ( v12 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v11 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v16, v10);
          v15 = 0LL;
          Object = 0LL;
          v12 = MmMapViewOfSection(
                  (int)v8,
                  PsSecureSystemProcess,
                  a4,
                  0LL,
                  0,
                  (__int64)&v15,
                  (__int64 *)&Object,
                  1,
                  0,
                  2);
          KiUnstackDetachProcess((__int64)v16, 0);
          *a5 = v11;
          goto LABEL_10;
        }
      }
      v12 = -1073740760;
    }
    else
    {
      v12 = -1073741751;
    }
LABEL_10:
    HalPutDmaAdapter(v8);
    return v12;
  }
  return result;
}
