/*
 * XREFs of ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000C088
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x18000DC80 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000C840 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000F01C (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoUnduck(
        CDuckingManager *this,
        const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  SIZE_T v7; // r15
  HANDLE ProcessHeap; // rax
  unsigned __int16 *v9; // rax
  ATL::CAtlException *v10; // rbx
  HANDLE v11; // rax
  ATL::CAtlException *v13[4]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v14; // [rsp+40h] [rbp-28h]
  ATL::CAtlException *v15; // [rsp+70h] [rbp+8h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v4 = *(_QWORD *)&v3[1].LockCount;
  LeaveCriticalSection(v3);
  if ( v4 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, a2);
    }
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    v6 = 2 * v5 + 2;
    v7 = 2 * v5 + 74;
    ProcessHeap = GetProcessHeap();
    v9 = (unsigned __int16 *)HeapAlloc(ProcessHeap, 0, v7);
    v10 = (ATL::CAtlException *)v9;
    v15 = (ATL::CAtlException *)v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v7;
      *((_DWORD *)v9 + 1) = 512;
      *((_DWORD *)v9 + 6) = v6;
      *((_BYTE *)v9 + 60) = 0;
      *((_DWORD *)v9 + 14) = 0;
      StringCbCopyW(v9 + 36, v6, a2);
      try
      {
        v13[1] = (ATL::CAtlException *)&CGenerateDuckingNotification::`vftable';
        v13[2] = v10;
        v13[3] = 0LL;
        v14 = 0;
        CLockedList<CDuckingNotification,1,0>::ForEachEntry(v3);
      }
      catch ( ATL::CAtlException *v13 )
      {
        if ( *(_DWORD *)v13[0] == -1073741571 )
          _o__resetstkoflw();
        v10 = v15;
      }
    }
    v11 = GetProcessHeap();
    HeapFree(v11, 0, v10);
  }
  return 0LL;
}
