/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x1C02F83B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C0022908 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0049A68 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C00561C4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F50BC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAXXZ @ 0x1C030DD34 (-EndProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAXXZ.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0310C84 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1)
{
  int v2; // r12d
  struct DXGGLOBAL *Global; // r15
  struct DXGGLOBAL *v4; // rax
  unsigned __int8 started; // al
  char *v6; // rbx
  bool v7; // bp
  int v8; // r14d
  int v9; // eax
  bool v10; // si
  int v11; // eax
  char *v12; // rbx
  char *v13; // rax
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  __int64 result; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGGLOBAL::GetGlobal();
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
              (struct DXGGLOBAL *)((char *)v4 + 1840),
              (struct DISPLAY_CALLOUT_ENTRY **)&P);
  v6 = (char *)P;
  v7 = started;
  if ( P )
  {
    v8 = 0;
    while ( 1 )
    {
      *(_OWORD *)(a1 + 24) = *((_OWORD *)v6 + 4);
      *(_OWORD *)(a1 + 40) = *((_OWORD *)v6 + 5);
      *(_OWORD *)(a1 + 56) = *((_OWORD *)v6 + 6);
      *(_OWORD *)(a1 + 72) = *((_OWORD *)v6 + 7);
      *(_QWORD *)(a1 + 88) = *((_QWORD *)v6 + 16);
      v9 = *((_DWORD *)v6 + 4);
      if ( v9 == 1 )
      {
        v2 = DxgkHandleMonitorEvent(
               *(struct _LUID *)(v6 + 24),
               *((_DWORD *)v6 + 8),
               *((_DWORD *)v6 + 9),
               *((_QWORD *)v6 + 5),
               (_BYTE *)a1);
        v10 = v2 < 0 || (*(_BYTE *)a1 & 0x44) == 68;
        v8 = 1;
      }
      else if ( v9 == 2 )
      {
        *(_BYTE *)a1 |= 4u;
        v11 = *((_DWORD *)v6 + 12);
        v10 = 1;
        *(_BYTE *)a1 &= ~0x80u;
        *(_DWORD *)(a1 + 4) = v11;
        *(_DWORD *)(a1 + 8) = *((_DWORD *)v6 + 10);
        *(_QWORD *)(a1 + 16) = *((_QWORD *)v6 + 3);
        RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305192, 2u, *((_QWORD *)v6 + 3));
        v8 = 1;
      }
      else
      {
        v10 = v9 == 3;
      }
      if ( v6[20] )
        break;
      DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)v6);
      if ( v10 )
        goto LABEL_21;
      v12 = (char *)DXGGLOBAL::GetGlobal() + 1840;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)v12, 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v13 = v12 + 48;
      v6 = (char *)*((_QWORD *)v12 + 6);
      if ( v6 == v13 )
      {
        DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v17);
        v7 = 0;
        goto LABEL_21;
      }
      if ( *((char **)v6 + 1) != v13 || (v14 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      v7 = *(_QWORD *)v13 != (_QWORD)v13;
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    }
    *(_QWORD *)(a1 + 136) = v6 + 56;
LABEL_21:
    if ( v8 && (*(_BYTE *)a1 & 4) != 0 )
      RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
        (struct DXGGLOBAL *)((char *)Global + 305192),
        1u,
        (enum _DXGK_RAPID_HPD_TYPE *)(a1 + 96),
        (struct _GUID *)(a1 + 100),
        (struct _DXGK_RAPID_HPD_DIAG *)(a1 + 120));
    v15 = DXGGLOBAL::GetGlobal();
    DXGDISPLAYCALLOUTQUEUE::EndProcessingBatch((struct DXGGLOBAL *)((char *)v15 + 1840));
  }
  result = (unsigned int)v2;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v7;
  return result;
}
