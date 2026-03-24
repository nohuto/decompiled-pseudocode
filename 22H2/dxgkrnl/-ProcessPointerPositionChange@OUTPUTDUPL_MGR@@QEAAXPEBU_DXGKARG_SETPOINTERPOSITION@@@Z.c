/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0163550
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C014ECAC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C029AD70 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C029B36C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C02A21D4 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  OUTPUTDUPL_CONTEXT **v7; // rbx
  unsigned int v8; // ebp
  int v9; // r15d
  OUTPUTDUPL_CONTEXT *v10; // r8
  __int64 v11; // rax
  OUTPUTDUPL_MGR *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  _QWORD *v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v11 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v5 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, *(struct DXGFASTMUTEX *const *)v5, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v7 = *(OUTPUTDUPL_CONTEXT ***)(v5 + 8);
    v8 = 0;
    v9 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v10 = *v7;
        if ( *v7 && *((_DWORD *)v10 + 79) )
        {
          if ( v9 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v12, a2);
              v10 = *v7;
            }
            v9 = 0;
          }
          v13 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v10, a2);
          v15 = v13;
          if ( v13 < 0 )
            break;
        }
        ++v8;
        ++v7;
        if ( v8 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v6);
      v16[3] = a2->VidPnSourceId;
      v16[4] = v8;
      v16[5] = v15;
      WdLogEvent5_WdError(v16);
    }
LABEL_5:
    if ( v17[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v6);
  }
}
