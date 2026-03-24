/*
 * XREFs of ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02BAA10
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B9D28 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z @ 0x1C021BE74 (-DdiGetDisplayStateIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_INTRUSIVE@@@Z.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  _QWORD *v11; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  int DisplayStateIntrusive; // ebp
  _QWORD *v23; // rax
  __int64 v24; // rdx
  char *v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  __int64 v27; // rdx
  _DWORD v29[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v30; // [rsp+28h] [rbp-20h]
  __int64 v31; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 1379LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2[337] + 11);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
  v9 = *(_QWORD **)(v8 + 80);
  v10 = 0;
  v11 = (_QWORD *)v9[3];
  if ( v11 != v9 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v9, i) )
    {
      if ( v10 >= 4 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v13 = 264LL * v10++;
        *(_DWORD *)((char *)this + v13 + 228) = *((_DWORD *)i + 6);
        *(_DWORD *)((char *)this + v13 + 472) = -1;
        *(_DWORD *)((char *)this + v13 + 476) = -1;
      }
    }
  }
  v14 = operator new[](8 * v10, 0x4B677844u, PagedPool);
  v19 = v14;
  if ( v14 )
  {
    memset(v14, 0, 8 * v10);
    if ( v10 )
    {
      v23 = v19;
      v24 = v10;
      v25 = (char *)this + 228;
      do
      {
        *v23 = v25;
        v25 += 264;
        ++v23;
        --v24;
      }
      while ( v24 );
    }
    v26 = a2[337];
    v29[0] = v10;
    v29[1] = 264;
    v30 = v19;
    DisplayStateIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateIntrusive(
                              v26,
                              (struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE *)v29,
                              264LL);
    if ( DisplayStateIntrusive >= 0 )
      *((_DWORD *)this + 321) = v10;
    operator delete[](v19);
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = 8 * v10;
    WdLogEvent5_WdLowResource(v20);
    DisplayStateIntrusive = -1073741801;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v9 + 8), v21);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40), v27);
  return (unsigned int)DisplayStateIntrusive;
}
