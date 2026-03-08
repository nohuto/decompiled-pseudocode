/*
 * XREFs of ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C02E7C90
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0046C10 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsWithoutDestroy(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        int a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 26, 0);
  v12 = 0LL;
  v13 = 0;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v12, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive(v15);
    v16 = 2;
  }
  v8 = (unsigned int)(a4 - 1);
  v9 = (_QWORD *)((char *)a3 + 56);
  v10 = *((_QWORD *)a3 + 7);
  if ( a4 != 1 )
  {
    do
    {
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      --v8;
    }
    while ( v8 );
  }
  v11 = *((_QWORD *)a3 + 8);
  if ( v10 )
  {
    *v9 = 0LL;
    *((_QWORD *)a3 + 8) = 0LL;
    *(_QWORD *)(v10 + 64) = v11;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = v10;
  }
  else
  {
    if ( a2 )
      *((_QWORD *)a2 + 3) = v11;
    else
      this[6] = (struct _KTHREAD *)v11;
    *((_QWORD *)a3 + 8) = 0LL;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = 0LL;
  }
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
