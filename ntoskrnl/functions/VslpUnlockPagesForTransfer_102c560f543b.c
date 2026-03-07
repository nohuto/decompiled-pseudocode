void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  int v2; // eax
  struct _MDL *v3; // rdi
  struct _MDL *v4; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  v2 = *((_DWORD *)a1 + 16);
  if ( (v2 & 8) != 0 )
  {
    v3 = (struct _MDL *)*a1;
    while ( v3 )
    {
      if ( (v3->MdlFlags & 2) != 0 )
        MmUnlockPages(v3);
      v2 = *((_DWORD *)a1 + 16);
      v4 = v3;
      v3 = v3->Next;
      if ( (v2 & 0x20) == 0 )
      {
        ExFreePoolWithTag(v4, 0);
        v2 = *((_DWORD *)a1 + 16);
      }
    }
  }
  if ( (v2 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
