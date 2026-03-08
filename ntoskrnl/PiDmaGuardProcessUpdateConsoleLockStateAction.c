/*
 * XREFs of PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140967F1C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140968954 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096BFB4 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 */

__int64 __fastcall PiDmaGuardProcessUpdateConsoleLockStateAction(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rcx
  _WORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rsi
  _WORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rsi
  _WORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = -1073741823;
  if ( !v1 )
    goto LABEL_31;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 16), (PVOID)*(unsigned __int16 *)(v1 + 2));
    v16 = *(_QWORD *)(v1 + 8);
    if ( v16 )
    {
      IoAddTriageDumpDataBlock(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
      v17 = (_WORD *)(*(_QWORD *)(v1 + 8) + 56LL);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 56LL));
      }
    }
    v18 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v18 )
    {
      v19 = (unsigned __int16 *)(v18 + 40);
      IoAddTriageDumpDataBlock(v18, (PVOID)0x388);
      if ( *v19 )
      {
        IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v19 + 1), (PVOID)*v19);
      }
      v20 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL);
      if ( *v20 )
      {
        IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL));
      }
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
      if ( v21 && *(_WORD *)(v21 + 56) )
      {
        IoAddTriageDumpDataBlock(v21 + 56, (PVOID)2);
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, v1, 0LL, 0LL);
  }
  if ( PipDmaGuardPolicy == 3 )
  {
    IoAddTriageDumpDataBlock(v1, (PVOID)*(unsigned __int16 *)(v1 + 2));
    v4 = *(_QWORD *)(v1 + 8);
    if ( v4 )
    {
      IoAddTriageDumpDataBlock(v4, (PVOID)(unsigned int)*(__int16 *)(v4 + 2));
      v5 = (_WORD *)(*(_QWORD *)(v1 + 8) + 56LL);
      if ( *v5 )
      {
        IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 56LL));
      }
    }
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      IoAddTriageDumpDataBlock(v6, (PVOID)0x388);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), (PVOID)*v7);
      }
      v8 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 56LL));
      }
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
      if ( v9 )
      {
        if ( *(_WORD *)(v9 + 56) )
        {
          IoAddTriageDumpDataBlock(v9 + 56, (PVOID)2);
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v10 + 64), (PVOID)*(unsigned __int16 *)(v10 + 56));
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, v1, 0LL, 0LL);
  }
  v11 = *(_QWORD *)(v3 + 720);
  if ( v11 )
  {
    LOBYTE(v13) = (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v11, 3221225473LL) == 0;
    return (unsigned int)PipDmgSetIommuDomainPolicyAndNotifyHal(v14, *(unsigned int *)(v12 + 32), v13);
  }
  return v2;
}
