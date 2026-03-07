__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  result = a1;
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 68) = 16842752;
  return result;
}
