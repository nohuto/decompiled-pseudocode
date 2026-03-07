char __fastcall PopFxScheduleDeviceIdleTimer(__int64 a1)
{
  char v2; // r10
  ULONGLONG v3; // rax
  ULONGLONG v4; // rcx
  ULONG v5; // edx
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 504);
    v4 = v3 + *(_QWORD *)(a1 + 496);
    if ( v4 >= v3 )
    {
      pullResult = v4;
      if ( MEMORY[0xFFFFF78000000008] < v4 && RtlULongLongSub(v4, MEMORY[0xFFFFF78000000008], &pullResult) >= 0 )
      {
        v5 = -1;
        if ( pullResult / 0x186A0 <= 0xFFFFFFFF )
          v5 = pullResult / 0x186A0;
        KeSetCoalescableTimer((PKTIMER)(a1 + 368), (LARGE_INTEGER)-(__int64)pullResult, 0, v5, (PKDPC)(a1 + 432));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 4u);
        return 1;
      }
    }
  }
  return v2;
}
