/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C020ACF8
 * Callers:
 *     DxgkStartPnPTransition @ 0x1C020ACBC (DxgkStartPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C020AE58 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

_QWORD *__fastcall DXGSESSIONMGR::StartPnPTransition(DXGSESSIONMGR *this, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdi
  DXGSESSIONDATA *v9; // rcx
  _DWORD *v11; // rax
  _QWORD *v12; // rax
  DXGSESSIONMGR *v13; // rax
  DXGSESSIONMGR **v14; // rdx
  DXGSESSIONDATA *v15; // rcx
  _BYTE v16[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  if ( !a2 )
  {
    v11 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
    a2 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry1(6LL, 5324LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate a new PnP transition token.",
        5324LL,
        0LL,
        0LL,
        0LL,
        0LL);
      a2 = 0LL;
      goto LABEL_14;
    }
    v11[1] = 0;
    *v11 = 1349407855;
    *((_QWORD *)v11 + 5) = 0x300000000LL;
    v12 = v11 + 6;
    v12[1] = v12;
    *v12 = v12;
    v13 = (DXGSESSIONMGR *)(a2 + 1);
    v14 = (DXGSESSIONMGR **)*((_QWORD *)this + 41);
    if ( *v14 != (DXGSESSIONMGR *)((char *)this + 320) )
      __fastfail(3u);
    *(_QWORD *)v13 = (char *)this + 320;
    a2[2] = v14;
    *v14 = v13;
    *((_QWORD *)this + 41) = v13;
  }
  if ( a3 != 0x300000000LL )
  {
    if ( a3 == 0x200000000LL )
    {
      a3 = 0x100000000LL;
      if ( *((_DWORD *)this + 36) != -1 )
        a3 = *((unsigned int *)this + 36);
    }
    v6 = a2[5];
    if ( v6 == 0x300000000LL )
    {
      a2[5] = a3;
    }
    else if ( v6 != a3 )
    {
      a2[5] = 0x100000000LL;
    }
    v7 = *((_DWORD *)this + 20);
    if ( a3 == 0x100000000LL )
    {
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          v9 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v8);
          if ( v9 )
            DXGSESSIONDATA::StartPnPTransitionOnSession(v9, (struct _PNP_TRANS_TOKEN *)a2);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 20) );
      }
    }
    else if ( (unsigned int)a3 < v7 )
    {
      v15 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8LL * (unsigned int)a3);
      if ( v15 )
        DXGSESSIONDATA::StartPnPTransitionOnSession(v15, (struct _PNP_TRANS_TOKEN *)a2);
    }
  }
LABEL_14:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return a2;
}
