void __fastcall VidSchConfirmToken(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-48h] BYREF
  char v13; // [rsp+38h] [rbp-38h]
  _QWORD v14[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v15; // [rsp+60h] [rbp-10h]

  if ( a2 != -1 )
  {
    v6 = *a4;
    v15 = 0;
    v14[0] = (char *)a1 + 1728;
    v8 = a3;
    v9 = a2;
    AcquireSpinLock::Acquire((Acquire *)v14);
    v13 = 0;
    v12[1] = v12;
    v12[0] = v12;
    v10 = *(int *)(*((_QWORD *)a1 + v9 + 400) + 288 * v8 + 188);
    if ( (int)v10 <= -1
      || (v11 = *((_QWORD *)a1 + 416) + 160 * v10) == 0
      || *(_DWORD *)(v11 + 112) != 1
      || !*(_BYTE *)(v11 + 97)
      || *(_QWORD *)v11 != v6
      || *(_QWORD *)(v11 + 8) != a5
      || *(_QWORD *)(v11 + 88) != a6
      || (*(_BYTE *)(v11 + 98) = 1, VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v12, a1, v9, v8), !v13) )
    {
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v12);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v14);
  }
}
