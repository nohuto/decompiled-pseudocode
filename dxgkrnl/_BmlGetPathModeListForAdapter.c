__int64 __fastcall BmlGetPathModeListForAdapter(
        __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r14
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int PathModeListForPath; // edi
  int v21; // r15d
  __int64 v22; // r8
  struct DMMVIDPN *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rcx
  bool v27; // zf
  int v28; // eax
  struct DMMVIDPN *v30; // [rsp+90h] [rbp+50h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  *(_BYTE *)a8 = 0;
  if ( !*(_WORD *)(a3 + 20) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a4 + 2920);
  a8 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, (__int64)v14);
  v30 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v30);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v21 = a6;
    v22 = a3;
    v23 = v30;
    PathModeListForPath = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v30, v22, a1, a2, a6, a7);
    if ( PathModeListForPath >= 0 )
    {
      LODWORD(v26) = (_DWORD)a8;
      if ( *(_BYTE *)a8 <= 1u
        || (--*(_BYTE *)a8,
            PathModeListForPath = BmlFunctionalizeVidPn(a8, v23, v24, v25),
            ++*(_BYTE *)a8,
            v26 = (unsigned __int8 *)a8,
            PathModeListForPath >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((_DWORD)v26, (_DWORD)v23);
      }
      else
      {
        v27 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v27 )
        {
          if ( v23 )
          {
            v28 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v14, v21, (__int64)v23, v26);
            if ( v28 < 0 )
              WdLogSingleEntry3(3LL, v23, a8, v28);
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
  if ( a8 )
    operator delete(a8);
  return (unsigned int)PathModeListForPath;
}
