/*
 * XREFs of ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C0099B84
 * Callers:
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x1C00969F0 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1C0099B50 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 *     UserKSTInitialize @ 0x1C009A090 (UserKSTInitialize.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall CKernelSensorThread::DestroyEventHandles(CKernelSensorThread *this)
{
  char *v1; // rbx
  HANDLE *v3; // rdi
  __int64 v4; // rsi

  v1 = (char *)this + 8;
  RIMLockExclusive((__int64)this + 8);
  v3 = (HANDLE *)((char *)this + 56);
  v4 = 5LL;
  do
  {
    if ( *v3 )
    {
      ZwClose(*v3);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
