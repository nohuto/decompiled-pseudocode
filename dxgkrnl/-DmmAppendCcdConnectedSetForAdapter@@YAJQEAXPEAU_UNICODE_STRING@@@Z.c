/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C0171724
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C01B3160 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C01718C0 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned int v9; // esi
  DXGMONITOR *v10; // r12
  __int64 v11; // rax
  unsigned int Length; // eax
  unsigned int MaximumLength; // r8d
  int CCDMonitorID; // eax
  unsigned int v16; // ebp
  unsigned __int16 v17; // r8
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]
  unsigned __int16 *v21; // [rsp+88h] [rbp+20h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)a1 + 365);
  if ( !v4 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v18, v5);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
  v6 = *(_QWORD *)(v5 + 120);
  v7 = *(_QWORD *)(v6 + 24);
  if ( v7 == v6 + 24 || (v8 = v7 - 8) == 0 )
  {
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  v9 = -1073741789;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v8 + 92) )
    {
      v10 = *(DXGMONITOR **)(v8 + 112);
      if ( v10 )
        break;
    }
LABEL_10:
    v11 = *(_QWORD *)(v8 + 8);
    v8 = v11 - 8;
    if ( v11 == v6 + 24 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_13;
  }
  Length = a2->Length;
  MaximumLength = a2->MaximumLength;
  if ( (unsigned __int16)Length >= (unsigned __int16)MaximumLength )
    goto LABEL_14;
  v21 = &a2->Buffer[(unsigned __int64)a2->Length >> 1];
  v20 = (MaximumLength - (unsigned __int64)Length) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(v10, v20, v21);
  v16 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    v19 = 0LL;
    RtlStringCchLengthW(v21, (unsigned int)v20, &v19);
    v17 = a2->Length + 2 * v19;
    a2->Length = v17;
    if ( v17 >= a2->MaximumLength )
      goto LABEL_14;
    a2->Buffer[(unsigned __int64)v17 >> 1] = 94;
    a2->Length += 2;
    goto LABEL_10;
  }
  WdLogSingleEntry2(3LL, v10, CCDMonitorID);
  v9 = v16;
LABEL_14:
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v18[0] + 40LL));
  return v9;
}
