/*
 * XREFs of PopFanReadFanNoiseInfo @ 0x140856150
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PopFanUpdateStatistics @ 0x140994754 (PopFanUpdateStatistics.c)
 */

__int64 __fastcall PopFanReadFanNoiseInfo(int a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  int v8; // esi
  __int64 i; // rdi
  int v11; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+34h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-78h] BYREF
  int *v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  int *v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 400);
    if ( *(_BYTE *)(i + 88) )
    {
      if ( !v8 )
      {
        if ( a1 == 84 )
        {
          if ( a3 != 160 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128) + 2;
          PopFanUpdateStatistics(i);
          memmove((void *)(a2 + 8), (const void *)(i + 216), 8LL * (unsigned int)(*(_DWORD *)(i + 128) + 2));
        }
        else
        {
          if ( a1 != 85 )
            return (unsigned int)-1073741637;
          if ( a3 != 88 )
            return (unsigned int)-1073741811;
          *(_DWORD *)a2 = *(_DWORD *)(i + 128);
          *(_OWORD *)(a2 + 4) = *(_OWORD *)(i + 132);
          *(_OWORD *)(a2 + 20) = *(_OWORD *)(i + 148);
          *(_OWORD *)(a2 + 36) = *(_OWORD *)(i + 164);
          *(_OWORD *)(a2 + 52) = *(_OWORD *)(i + 180);
          *(_DWORD *)(a2 + 68) = *(_DWORD *)(i + 196);
          *(_OWORD *)(a2 + 72) = *(_OWORD *)(i + 112);
        }
      }
      ++v8;
    }
    PopReleaseRwLock(i + 400);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  if ( v8 != 1 )
  {
    if ( (unsigned int)dword_140C03928 > 2 )
    {
      v11 = a1;
      v15 = 4LL;
      v14 = &v11;
      v17 = 4LL;
      v16 = &v12;
      v12 = v8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)byte_140031299,
        0LL,
        0LL,
        4u,
        &v13);
    }
    return (unsigned int)-1073741823;
  }
  return v6;
}
