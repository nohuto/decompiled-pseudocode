unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // esi
  struct DXGPROCESS *Current; // rbx
  _QWORD *v3; // r8
  unsigned int v4; // eax
  DXGKEYEDMUTEX *v5; // rdi
  unsigned int HostHandle; // ebp
  unsigned int v7; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 3923LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3923LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
  v3 = (_QWORD *)((char *)Current + 280);
  v4 = (v1 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)Current + 74)
    && ((v1 >> 25) & 0x60) == (*(_BYTE *)(*v3 + 16LL * v4 + 8) & 0x60)
    && (*(_DWORD *)(*v3 + 16LL * v4 + 8) & 0x1F) == 9
    && (v5 = *(DXGKEYEDMUTEX **)(*v3 + 16LL * v4)) != 0LL )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    if ( *((_BYTE *)v5 + 176) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v5, v1);
      if ( HostHandle )
      {
        v7 = *((_DWORD *)Current + 126);
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), v7, HostHandle);
        DXGKEYEDMUTEX::FreeHostHandle(v5, v1);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
