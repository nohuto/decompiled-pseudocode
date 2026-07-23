/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140906D4C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x1406AB960 (MmCreateSection.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14077ABC4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PspSiloInitializeSuiteMask @ 0x140906B3C (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140906BAC (PspSiloInitializeSystemRootBuffer.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  struct _DMA_ADAPTER *v3; // rbx
  NTSTATUS v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v6; // r14
  int NtProductTypeFromRegistry; // ebx
  __int64 v8; // rsi
  PVOID Section; // [rsp+78h] [rbp+38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+48h] BYREF

  MappedBase = 0LL;
  Section = 0LL;
  ViewSize = 624LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = (struct _DMA_ADAPTER *)Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[141] = MappedBase;
      ServerSiloGlobals[142] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[141] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer((__int64)a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[141];
        LODWORD(Section) = 0;
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&Section);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = (_DWORD)Section;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[141]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[141] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      HalPutDmaAdapter(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
