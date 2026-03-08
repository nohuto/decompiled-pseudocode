/*
 * XREFs of DpiReportAdapter @ 0x1C020B4D4
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00270C0 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x1C005DBC0 (McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  _QWORD *Pool2; // rdi
  _QWORD *v6; // r14
  __int64 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  _OWORD *v11; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _DWORD *, _QWORD, unsigned int); // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _DWORD v31[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 2736) )
      v4 = *(_DWORD *)(v3 + 2736);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v4, 1953656900LL);
    if ( Pool2 )
    {
      if ( *(_DWORD *)(v3 + 2736) )
      {
        v18 = Pool2;
        v19 = *(_QWORD *)(v3 + 2728) - (_QWORD)Pool2;
        v20 = *(unsigned int *)(v3 + 2736);
        do
        {
          *v18 = *(_QWORD *)(*(_QWORD *)((char *)v18 + v19) + 64LL);
          ++v18;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        *Pool2 = v3;
      }
      v6 = Pool2;
      v7 = v4;
      do
      {
        v8 = 0;
        memset(v31, 0, sizeof(v31));
        v10 = *v6;
        v31[1025] = *(_DWORD *)(*v6 + 500LL);
        v31[1026] = *(_DWORD *)(v10 + 504);
        LOBYTE(v31[1027]) = *(_BYTE *)(v10 + 508);
        v11 = (_OWORD *)(v10 + 1112);
        if ( *(_QWORD *)(v10 + 1112) )
        {
          v14 = 2LL;
          v15 = v31;
          v9 = 128LL;
          do
          {
            *v15 = *v11;
            v15[1] = v11[1];
            v15[2] = v11[2];
            v15[3] = v11[3];
            v15[4] = v11[4];
            v15[5] = v11[5];
            v15[6] = v11[6];
            v15 += 8;
            v16 = v11[7];
            v11 += 8;
            *(v15 - 1) = v16;
            --v14;
          }
          while ( v14 );
          v31[1024] = 256;
          v8 = 64;
        }
        v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, unsigned int))(v10 + 616);
        if ( v12 )
        {
          v17 = v12(*(_QWORD *)(v10 + 568), 0LL, &v31[v8], v8 * 4, 4096 - v8 * 4);
          v13 = (unsigned int)(v17 + v31[1024]);
        }
        else
        {
          v13 = 0LL;
        }
        v31[1024] = v13;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v30) = *(_DWORD *)(v10 + 1140);
            LODWORD(v29) = *(_DWORD *)(v10 + 1136);
            LODWORD(v28) = *(_DWORD *)(v10 + 1132);
            LODWORD(v27) = *(_DWORD *)(v10 + 1128);
            LODWORD(v26) = *(_DWORD *)(v10 + 1124);
            LODWORD(v25) = *(_DWORD *)(v10 + 1120);
            LODWORD(v24) = LOBYTE(v31[1027]);
            LODWORD(v23) = v31[1026];
            LODWORD(v22) = v31[1025];
            LODWORD(v21) = v13;
            McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(
              LOBYTE(v31[1027]),
              v13,
              v9,
              a2,
              v21,
              v31,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              *(_QWORD *)(a2 + 404));
          }
        }
        ++v6;
        --v7;
      }
      while ( v7 );
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      WdLogSingleEntry1(6LL, -1073741801LL);
    }
  }
}
