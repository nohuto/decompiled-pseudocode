__int64 __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140C31888;
  v12 = 0;
  v7 = ((unsigned int)*(_QWORD *)(qword_140C31888 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v8, v7);
  v9 = ((unsigned int)*(_QWORD *)(qword_140C31888 + 8) >> 4) & 0x1FF;
  v13 = v8;
  result = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2) + 8LL * (v7 ^ (1 << v8)) + 8);
  if ( *(_DWORD *)(result + 8 * v9 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 8 * v9 + 304));
  }
  else
  {
    result = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      result = EtwpCovSampCaptureBufferGet(qword_140C31888);
      v4 = result;
      if ( result )
      {
        EtwpCovSampCaptureBufferAddIP(result, a1);
        if ( !*(_DWORD *)(v5 + 1292) )
          EtwpCovSampCaptureKernelStack(v11, a2);
        result = EtwpCovSampCaptureBufferQueue(v5, v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
      if ( (result & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          result = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)result && !CurrentThread->SuspendCount )
          {
            result = EtwpCovSampSafeForUserAddressCapture(0, &v12);
            if ( (int)result >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
              {
                result = EtwpCovSampCaptureUserAddresses(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
              }
            }
            else if ( !v12 )
            {
              result = EtwpCovSampCaptureQueueApc(a1);
            }
          }
        }
      }
    }
    if ( v4 )
      return EtwpCovSampCaptureReleaseToLookaside(v5, *(_QWORD *)(v4 + 48), (struct _SLIST_ENTRY *)v4);
  }
  return result;
}
