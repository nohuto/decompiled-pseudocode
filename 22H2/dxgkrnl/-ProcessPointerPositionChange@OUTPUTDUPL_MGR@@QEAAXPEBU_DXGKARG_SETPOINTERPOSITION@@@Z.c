/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0231FB0
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C0338AF0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0231E20 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C032C914 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C03330CC (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  __int64 VidPnSourceId; // rdx
  struct DXGFASTMUTEX *v5; // rbx
  OUTPUTDUPL_CONTEXT **v6; // rbx
  unsigned int v7; // ebp
  int v8; // r14d
  OUTPUTDUPL_CONTEXT *v9; // r8
  OUTPUTDUPL_MGR *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
  }
  else
  {
    v5 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72 * VidPnSourceId);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, v5, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v6 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v5 + 6);
    v7 = 0;
    v8 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v9 = *v6;
        if ( *v6 && *((_DWORD *)v9 + 79) )
        {
          if ( v8 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v10, a2);
              v9 = *v6;
            }
            v8 = 0;
          }
          v11 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v9, a2);
          if ( v11 < 0 )
            break;
        }
        ++v7;
        ++v6;
        if ( v7 >= *((_DWORD *)this + 2) )
          goto LABEL_13;
      }
      v12 = v11;
      WdLogSingleEntry3(2LL, a2->VidPnSourceId, v7, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Process pointer position failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
        a2->VidPnSourceId,
        v7,
        v12,
        0LL,
        0LL);
    }
LABEL_13:
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
}
