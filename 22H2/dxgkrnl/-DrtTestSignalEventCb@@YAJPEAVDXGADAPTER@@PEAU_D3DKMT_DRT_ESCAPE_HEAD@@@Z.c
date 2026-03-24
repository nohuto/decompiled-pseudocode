/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025FBF4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkSignalEventCB @ 0x1C0041E80 (DxgkSignalEventCB.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0043DC8 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0248A54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(
        struct DXGADAPTER *a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *a2,
        __int64 a3,
        __int64 a4)
{
  HANDLE *Current; // rax
  UINT v7; // ebx
  unsigned int HostProcess; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // eax
  size_t v17; // [rsp+38h] [rbp-40h]
  _DXGKARGCB_SIGNALEVENT v18; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_DWORD *)a2 + 1) >= 0x20u )
  {
    *(_QWORD *)&v18.0 = 0LL;
    Current = (HANDLE *)DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, a4);
    if ( a1 )
    {
      if ( Current )
      {
        if ( *((_BYTE *)a1 + 209) )
        {
          v7 = *((_DWORD *)a1 + 1078);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
          LODWORD(v17) = *((_DWORD *)a2 + 1);
          v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                 (struct DXGADAPTER *)((char *)a1 + 4240),
                 HostProcess,
                 v7,
                 0,
                 0,
                 D3DKMT_ESCAPE_DRT_TEST,
                 0,
                 v17,
                 (unsigned __int8 *)a2);
          v12 = v9;
          if ( v9 < 0 )
          {
            v13 = WdLogNewEntry5_WdError(v11, v10);
            *(_QWORD *)(v13 + 24) = v12;
            WdLogEvent5_WdError(v13);
          }
          return (unsigned int)v12;
        }
        v18.hDxgkProcess = Current[8];
        if ( v18.hDxgkProcess )
        {
          v14 = *((_BYTE *)a2 + 24) == 0;
          v18.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
          if ( v14 )
            v15 = DxgkSignalEventCB(&v18);
          else
            v15 = CallDxgkSignalEventCbAtDispatch(&v18);
          LODWORD(v12) = v15;
          return (unsigned int)v12;
        }
      }
    }
  }
  return 3221225485LL;
}
