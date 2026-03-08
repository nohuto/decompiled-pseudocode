/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14070E820
 * Callers:
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14070C774 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x1409344AC (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(PRKPROCESS PROCESS, __int64 a2, void *a3, char *a4)
{
  char v4; // di
  unsigned __int64 v6; // rbx
  __int64 v10; // rcx
  int v11; // ebp
  __int16 v12; // ax
  unsigned __int64 SecureHandle; // rbp
  char v14; // bp
  _QWORD v15[14]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = 0;
  PROCESS[1].Affinity.StaticBitmap[29] = 0LL;
  v6 = (unsigned __int64)a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 1400) )
      goto LABEL_3;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v6 = *(_QWORD *)(a2 + 1400);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 2) != 0 )
        v6 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1400));
    }
    ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
    if ( !v6 )
      goto LABEL_3;
  }
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  if ( !PsTestProtectedProcessIncompatibility(v10, a2, (__int64)PROCESS) )
  {
    if ( (*(_DWORD *)(v6 + 96) & 4) != 0 )
    {
      if ( !PROCESS[1].Affinity.StaticBitmap[30]
        || (v12 = WORD2(PROCESS[2].Affinity.StaticBitmap[20]), v12 != 332) && v12 != 452 )
      {
        v11 = -1073741637;
        goto LABEL_20;
      }
    }
    SecureHandle = PROCESS->SecureState.SecureHandle;
    if ( (SecureHandle & 1) != 0 )
    {
      memset(v15, 0, 0x68uLL);
      v15[1] = SecureHandle;
      v15[2] = 1LL;
      v11 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v15);
      if ( v11 < 0 )
        goto LABEL_20;
    }
    v14 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v6 + 24));
    if ( (*(_DWORD *)(v6 + 96) & 1) != 0 )
      v14 = 1;
    else
      PROCESS[1].Affinity.StaticBitmap[29] = v6;
    ExReleaseFastMutex((PFAST_MUTEX)(v6 + 24));
    if ( v14 )
    {
      ObfDereferenceObject((PVOID)v6);
    }
    else
    {
      DbgkpMarkProcessPeb(PROCESS);
      v4 = 1;
    }
LABEL_3:
    *a4 = v4;
    return 0LL;
  }
  v11 = -1073740014;
LABEL_20:
  ObfDereferenceObject((PVOID)v6);
  return (unsigned int)v11;
}
