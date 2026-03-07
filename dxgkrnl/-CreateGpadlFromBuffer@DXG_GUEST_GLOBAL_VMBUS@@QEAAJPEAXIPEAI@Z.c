__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct _KTHREAD *v8; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v8 = *this;
  v12 = 1;
  LODWORD(a4) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, void *, _QWORD, unsigned int *))qword_1C013CE20)(
                  v8,
                  0LL,
                  a2,
                  a3,
                  a4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return (unsigned int)a4;
}
