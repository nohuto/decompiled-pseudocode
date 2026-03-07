__int64 __fastcall VidSchExitIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        _DWORD *a8,
        struct _LUID DestinationLuid)
{
  _DWORD *v9; // rbx
  _QWORD *v11; // rdi
  __int64 result; // rax
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  char v15; // [rsp+50h] [rbp-30h]
  _QWORD v16[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF

  v9 = a8;
  v11 = (_QWORD *)DestinationLuid;
  *a8 = 0;
  *v11 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    v18 = 0LL;
    v17 = 0;
    v16[0] = a1 + 1728;
    LOBYTE(a8) = 0;
    AcquireSpinLock::Acquire((Acquire *)v16);
    v15 = 0;
    v14[1] = v14;
    v14[0] = v14;
    ((void (__fastcall *)(_QWORD *, __int64, struct _LUID *, __int64, int, char, _DWORD **, __int64 *))VidSchExitIndependentFlipInternal)(
      v14,
      a1,
      &DestinationLuid,
      a4,
      a6,
      a7,
      &a8,
      &v18);
    if ( !v15 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v14);
    AcquireSpinLock::Release((AcquireSpinLock *)v16);
    *v9 = (unsigned __int8)a8;
    result = v18;
    *v11 = v18;
  }
  return result;
}
