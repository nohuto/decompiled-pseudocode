__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  bool v9; // zf
  unsigned int v10; // ebx
  DXGGLOBAL *Global; // rax
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v9 = *((_BYTE *)this + 68) == 0;
  v15 = 1;
  if ( v9 )
    goto LABEL_6;
  if ( a3 > 0x20000 || *a5 > 0x20000 )
  {
    WdLogSingleEntry1(3LL, 15726LL);
LABEL_6:
    v10 = -1073741811;
    goto LABEL_7;
  }
  v10 = ((__int64 (__fastcall *)(struct _KTHREAD *, void *, _QWORD, _QWORD, int, void *, unsigned int *, _QWORD))qword_1C013CEC0)(
          this[1],
          a2,
          a3,
          0LL,
          1,
          a4,
          a5,
          0LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::CheckDebugBreak(Global);
LABEL_7:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v10;
}
