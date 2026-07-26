/*
 * XREFs of PdcTaskClientRequest @ 0x1C012A440
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1C0093600 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0095868 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C01206A0 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0040B00 (memset.c)
 *     PdcPortSendMessageSynchronously @ 0x1C00C6A40 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C012A5C4 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edx
  _DWORD v9[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive(a1 + 8);
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_15:
      *(_QWORD *)(a1 + 16) = 0LL;
      ExReleasePushLockEx(a1 + 8, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v4;
    }
    v5 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v5 )
        goto LABEL_12;
    }
    else if ( v5 != 1 )
    {
      goto LABEL_12;
    }
    v6 = *(_QWORD *)(a1 + 40);
    v9[10] = 7;
    LOBYTE(v9[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v6, (__int64)v9);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
LABEL_12:
    v7 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      *(_DWORD *)(a1 + 48) = v7 + 1;
    else
      *(_DWORD *)(a1 + 48) = v7 - 1;
    goto LABEL_15;
  }
  return (unsigned int)-1073741585;
}
