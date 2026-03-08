/*
 * XREFs of OpRegion @ 0x1C0050D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     MapUnmapPhysMem @ 0x1C004BF40 (MapUnmapPhysMem.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 */

__int64 __fastcall OpRegion(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int NameSpaceObject; // edi
  __int64 v6; // rax
  unsigned int *v7; // rbx
  char v8; // al

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (__int64 *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 66LL) = 10;
    *(_DWORD *)(*(_QWORD *)v2 + 88LL) = 48;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1196576584, *(_DWORD *)(*(_QWORD *)v2 + 88LL));
    *(_QWORD *)(*(_QWORD *)v2 + 96LL) = v6;
    if ( v6 )
    {
      memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
      v7 = *(unsigned int **)(*(_QWORD *)v2 + 96LL);
      *((_BYTE *)v7 + 12) = *(_BYTE *)(*(_QWORD *)(a2 + 80) + 56LL);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v7[2] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 136LL);
      KeInitializeSpinLock((PKSPIN_LOCK)v7 + 3);
      *((_QWORD *)v7 + 5) = v7 + 8;
      *((_QWORD *)v7 + 4) = v7 + 8;
      v8 = *((_BYTE *)v7 + 12);
      if ( v8 )
      {
        if ( v8 == 1 )
          *(_QWORD *)v7 = *v7;
      }
      else
      {
        NameSpaceObject = MapUnmapPhysMem(a1, *(void **)v7, v7[2], (__int64 *)v7);
        if ( !NameSpaceObject )
          *((_BYTE *)v7 + 13) |= 1u;
      }
      if ( ghCreate )
        ghCreate(10LL, *(_QWORD *)v2 + 120LL);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(116, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return NameSpaceObject;
}
