__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  struct DXGADAPTER *v9; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v9 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( *((_BYTE *)v9 + 209) )
  {
    Global = DXGGLOBAL::GetGlobal();
    return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((_QWORD *)Global + 214), a4, a3, a5);
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v9, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL) >= 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(a2 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v20 = *(_QWORD *)(a1 + 32);
      v13 = *(_QWORD *)(a1 + 16);
      v19 = a3;
      v18 = 0;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, char))(*(_QWORD *)(*(_QWORD *)(v13 + 736) + 8LL) + 640LL))(
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              &v20,
              0,
              &v19,
              v18);
      v12 = v14;
      if ( v14 >= 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qpx_EtwWriteTransfer(v16, v15, v17, 0, v20, v19);
        LODWORD(v12) = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v21[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
    }
    else
    {
      WdLogSingleEntry1(4LL, 1256LL);
      LODWORD(v12) = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    return (unsigned int)v12;
  }
}
