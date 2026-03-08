/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C007685C
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0077368 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001790 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C0001D10 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C0001D8C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001F80 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // r11d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  int v13; // r10d
  char v14; // bp
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  const EVENT_DESCRIPTOR *v18; // rdx
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  void *Pool2; // rax
  void *v24; // rbp
  __int64 v25; // [rsp+20h] [rbp-B8h]
  __int64 v26; // [rsp+28h] [rbp-B0h]
  __int64 v27; // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+40h] [rbp-98h]
  __int64 v29; // [rsp+48h] [rbp-90h]
  __int64 v30; // [rsp+50h] [rbp-88h]
  __int64 v31; // [rsp+58h] [rbp-80h]
  __int64 v32; // [rsp+60h] [rbp-78h]
  __int64 v33; // [rsp+68h] [rbp-70h]
  __int64 v34; // [rsp+70h] [rbp-68h]
  __int64 v35; // [rsp+78h] [rbp-60h]
  __int64 v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  void *Src[2]; // [rsp+90h] [rbp-48h] BYREF
  int v39; // [rsp+E8h] [rbp+10h]
  int v40; // [rsp+E8h] [rbp+10h]
  int v41; // [rsp+F0h] [rbp+18h]
  int v42; // [rsp+F0h] [rbp+18h]
  int v43; // [rsp+F8h] [rbp+20h]
  int v44; // [rsp+F8h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 2216) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_DWORD *)(a2 + 2600));
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      McTemplateK0pnq_EtwWriteTransfer(
        a2 + 1180,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 248),
        12,
        a2 + 1180,
        *(_DWORD *)(a2 + 2600));
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    McTemplateK0pnq_EtwWriteTransfer(
      a2 + 1180,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 248),
      71,
      a2 + 1180,
      *(_DWORD *)(a2 + 2600));
  }
  result = *(_QWORD *)(a2 + 2360);
  v7 = result - 248;
  while ( a2 + 2360 != result )
  {
    v8 = *(_DWORD *)(v7 + 1256);
    if ( v8 == 3000 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
        goto LABEL_42;
      v9 = *(_DWORD *)(a2 + 168);
      if ( v9 == 1 )
      {
        v10 = *(_DWORD *)(a2 + 188);
        v11 = *(_DWORD *)(a2 + 192);
        v12 = *(_DWORD *)(a2 + 196);
        v44 = *(_DWORD *)(a2 + 176);
        v42 = *(_DWORD *)(a2 + 180);
        v40 = *(unsigned __int16 *)(a2 + 184);
      }
      else
      {
        v10 = 0;
        v44 = 0x7FFFFFFF;
        v11 = 0;
        v42 = 0x7FFFFFFF;
        v12 = 0;
        v40 = 0;
      }
      v13 = *(_DWORD *)(v7 + 204) >> 1;
      if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
        v14 = *(_BYTE *)(v7 + 1341);
      else
        v14 = 0;
      v20 = 0LL;
      if ( v9 == 2 )
        v20 = a2 + 186;
      v21 = 0LL;
      v37 = v20;
      if ( v9 == 2 )
        v21 = a2 + 181;
      v17 = 0LL;
      v36 = v21;
      v18 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V1;
      if ( v9 == 2 )
        v17 = a2 + 176;
      v35 = v17;
      LODWORD(v34) = v40;
      LODWORD(v33) = v42;
      v19 = v44;
    }
    else
    {
      if ( v8 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
        goto LABEL_42;
      v9 = *(_DWORD *)(a2 + 168);
      if ( v9 == 1 )
      {
        v10 = *(_DWORD *)(a2 + 188);
        v11 = *(_DWORD *)(a2 + 192);
        v12 = *(_DWORD *)(a2 + 196);
        v43 = *(_DWORD *)(a2 + 176);
        v41 = *(_DWORD *)(a2 + 180);
        v39 = *(unsigned __int16 *)(a2 + 184);
      }
      else
      {
        v10 = 0;
        v43 = 0x7FFFFFFF;
        v11 = 0;
        v41 = 0x7FFFFFFF;
        v12 = 0;
        v39 = 0;
      }
      v13 = *(_DWORD *)(v7 + 204) >> 1;
      if ( (*(_DWORD *)(v7 + 204) & 2) != 0 )
        v14 = *(_BYTE *)(v7 + 1341);
      else
        v14 = 0;
      v15 = 0LL;
      if ( v9 == 2 )
        v15 = a2 + 186;
      v16 = 0LL;
      v37 = v15;
      if ( v9 == 2 )
        v16 = a2 + 181;
      v17 = 0LL;
      v36 = v16;
      v18 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V1;
      if ( v9 == 2 )
        v17 = a2 + 176;
      v35 = v17;
      LODWORD(v34) = v39;
      LODWORD(v33) = v41;
      v19 = v43;
    }
    LODWORD(v32) = v19;
    LODWORD(v31) = v12;
    LODWORD(v30) = v11;
    LODWORD(v29) = v10;
    LODWORD(v28) = v9;
    LOBYTE(v27) = v14;
    LOBYTE(v26) = v13 & 1;
    LODWORD(v25) = *(unsigned __int16 *)(v7 + 200);
    McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer(
      v17,
      v18,
      a1,
      *(_QWORD *)(a2 + 248),
      v25,
      v26,
      v27,
      *(_QWORD *)(v7 + 1416),
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
LABEL_42:
    if ( (*(_DWORD *)(v7 + 204) & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      LODWORD(v26) = 12;
      LODWORD(v25) = *(unsigned __int16 *)(v7 + 200);
      McTemplateK0pqn_EtwWriteTransfer(
        *(unsigned __int16 *)(v7 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
        a1,
        *(_QWORD *)(a2 + 248),
        v25,
        v26,
        v7 + 1340);
    }
    if ( (*(_DWORD *)(v7 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      LODWORD(v26) = 16;
      LODWORD(v25) = *(unsigned __int16 *)(v7 + 200);
      McTemplateK0pqn_EtwWriteTransfer(
        *(unsigned __int16 *)(v7 + 200),
        &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
        a1,
        *(_QWORD *)(a2 + 248),
        v25,
        v26,
        v7 + 1352);
    }
    if ( (*(_DWORD *)(v7 + 204) & 0x800) != 0 )
    {
      v22 = *(_QWORD *)(v7 + 1464);
      *(_OWORD *)Src = 0LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v22,
        Src);
      Pool2 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      v24 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Src[1], LOWORD(Src[0]));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        {
          LODWORD(v25) = *(unsigned __int16 *)(v7 + 200);
          McTemplateK0pqz_EtwWriteTransfer(
            *(unsigned __int16 *)(v7 + 200),
            &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_DSD_USB4,
            a1,
            *(_QWORD *)(a2 + 248),
            v25,
            v24);
        }
        ExFreePoolWithTag(v24, 0x64334855u);
      }
    }
    result = *(_QWORD *)(v7 + 248);
    v7 = result - 248;
  }
  return result;
}
