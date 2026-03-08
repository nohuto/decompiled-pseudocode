/*
 * XREFs of ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C032E68C
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0223A10 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0223924 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C03261D4 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C032EA6C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerPosition(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        __int64 a4)
{
  int updated; // ebx
  _QWORD v8[10]; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 2012LL;
    return 0LL;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, a3);
    if ( updated >= 0 )
    {
      memset(v8, 0, 0x48uLL);
      v8[1] = 0LL;
      v8[3] = 0LL;
      LODWORD(v8[0]) = 1;
      v8[4] = a2;
      LODWORD(v8[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v8);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + *((unsigned int *)this + 11) + 6), this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open local mutex of TYPE_OTHER for global mutex 0x%I64x in OUTPUTDUPL_CONTEXT 0x%I64x",
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        (__int64)this,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)updated;
  }
}
