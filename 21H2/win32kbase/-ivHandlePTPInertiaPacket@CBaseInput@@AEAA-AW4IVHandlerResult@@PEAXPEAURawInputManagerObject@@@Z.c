/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B89F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C01526CC (WPP_RECORDER_SF_s.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AA5C4 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B4DA4 (-IVDeSerializeIVPTPInertiaPacket@@YAJPEAU_IVPTPInertiaPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BA520 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BA774 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rbx
  unsigned int v6; // edi
  __int64 RimDevByName; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  CHidInput *v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  __int64 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  char v17; // [rsp+60h] [rbp-38h]
  char v18; // [rsp+A8h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      a2,
      12,
      52,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
      (__int64)"IV_PACKET_TYPE_PTP_INERTIA");
  v5 = 0LL;
  v13 = a2;
  v6 = 1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 1;
  if ( (int)IVDeSerializeIVPTPInertiaPacket((struct _IVPTPInertiaPacket *)a2, (struct CIVSerializer *)v12) >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v18, 1, 0);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      *(_QWORD *)(a3 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
      v6 = 2;
    }
    else
    {
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
      *(_QWORD *)(a3 + 112) = 0LL;
      v8 = a3 + 104;
      v9 = RimDevByName;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        v10 = *(CHidInput **)(v9 + 480);
        if ( v10 && *((_DWORD *)v10 + 6) == 7 )
        {
          if ( *(_QWORD *)(v9 + 32) != -88LL )
            v5 = *(void **)(*(_QWORD *)(v9 + 32) + 88LL);
          CHidInput::ProcessPTPInertiaActions(v10, v5, *(_QWORD *)(a2 + 16));
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 12, 53, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
        v6 = 0;
      }
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return v6;
}
