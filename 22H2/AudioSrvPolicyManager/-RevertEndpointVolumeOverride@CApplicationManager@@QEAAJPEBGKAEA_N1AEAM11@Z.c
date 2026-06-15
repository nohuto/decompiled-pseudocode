/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800201E0
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180025490 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_dS @ 0x18001A918 (WPP_SF_dS.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        bool *a4,
        bool *a5,
        float *a6,
        bool *a7,
        bool *a8)
{
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  bool *v12; // r14
  bool *v13; // r15
  bool *v14; // rsi
  int v15; // eax
  signed int v16; // ebx
  struct TSSession *v18; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+20h]

  v18 = this;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, a3, a2);
  }
  v18 = 0LL;
  *a4 = 0;
  v12 = a5;
  *a5 = 0;
  v13 = a7;
  *a7 = 0;
  v14 = (bool *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  a5 = v14;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, a3, a2);
  }
  v15 = TsSessionFromSessionId(a3, 1, 0LL, &v18);
  if ( v15 )
  {
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = v15;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, bool *, bool *, float *, bool *, bool *))(**((_QWORD **)v18 + 32) + 40LL))(
            *((_QWORD *)v18 + 32),
            a2,
            a4,
            v12,
            a6,
            v13,
            a8);
  }
  if ( v16 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, v16);
    }
    AudPolicyLogError("TsSessionIdReleaseEndpointVolumeReference", 2500, v16);
  }
  if ( v14 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v14);
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
