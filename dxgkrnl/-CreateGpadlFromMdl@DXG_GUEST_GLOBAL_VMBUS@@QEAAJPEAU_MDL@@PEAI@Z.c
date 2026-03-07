__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
        struct _KTHREAD **this,
        struct _MDL *a2,
        unsigned int *a3)
{
  struct _KTHREAD *v6; // rcx
  _BYTE v8[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 2, 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v6 = *this;
  v10 = 1;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, struct _MDL *, _QWORD, _DWORD, unsigned int *))qword_1C013CE28)(
                  v6,
                  0LL,
                  a2,
                  0LL,
                  0,
                  a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (unsigned int)a3;
}
