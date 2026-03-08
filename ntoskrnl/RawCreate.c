/*
 * XREFs of RawCreate @ 0x1406F3164
 * Callers:
 *     RawDispatch @ 0x1406F2E80 (RawDispatch.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14028DD58 (RawInitiateDeleteVolume.c)
 *     IoCheckLinkShareAccess @ 0x1406B2FA0 (IoCheckLinkShareAccess.c)
 *     IoSetLinkShareAccess @ 0x1406F34E0 (IoSetLinkShareAccess.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_Resource; // r13
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  int v10; // r14d
  int v11; // r15d
  bool v12; // zf
  NTSTATUS v13; // edi

  p_Resource = (struct _FAST_MUTEX *)&AdvancedHeader[2].Resource;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].Resource);
  v7 = *(_QWORD *)(a3 + 48);
  if ( v7 && (*(_WORD *)(v7 + 88) || *(_QWORD *)(v7 + 64))
    || (v8 = *(_DWORD *)(a3 + 16), (v8 & 0xFF000000) != 0x1000000)
    || (v8 & 1) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_16;
  }
  v9 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v9 & 1) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_16;
  }
  if ( (v9 & 2) != 0 )
  {
    v13 = -1073741202;
    goto LABEL_16;
  }
  v10 = *(unsigned __int16 *)(a3 + 26);
  v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v13 = IoCheckLinkShareAccess(v11, v10, v7, (_DWORD *)&AdvancedHeader[1].Resource + 1, 0LL, 1);
    if ( v13 >= 0 )
    {
      v12 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
      goto LABEL_9;
    }
LABEL_16:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_12;
  }
LABEL_9:
  if ( v12 )
    IoSetLinkShareAccess(v11, v10, *(_QWORD *)(a3 + 48), (_DWORD)AdvancedHeader + 124, 0LL, 0);
  ++*(_DWORD *)&AdvancedHeader[1].Flags;
  v13 = 0;
  ++LODWORD(AdvancedHeader[1].Resource);
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = AdvancedHeader[1].FileContextSupportPointer;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_12:
  if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 1) )
    ExReleaseFastMutex(p_Resource);
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v13;
}
