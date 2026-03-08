/*
 * XREFs of _tlgEnableCallback @ 0x1C00B0400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall tlgEnableCallback(
        const _GUID *pSourceId,
        __int64 callbackType,
        __int64 level,
        unsigned __int64 keywordAny,
        unsigned __int64 keywordAll,
        _EVENT_FILTER_DESCRIPTOR *pFilterData,
        _QWORD *pCallbackContext)
{
  int v7; // eax
  void (__fastcall *v8)(const _GUID *, __int64, __int64, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, _QWORD); // rax

  if ( pCallbackContext )
  {
    if ( (_DWORD)callbackType )
    {
      if ( (_DWORD)callbackType == 1 )
      {
        if ( (_BYTE)level )
          v7 = (unsigned __int8)level + 1;
        else
          v7 = 256;
        *(_DWORD *)pCallbackContext = v7;
        pCallbackContext[2] = keywordAny;
        pCallbackContext[3] = keywordAll;
      }
    }
    else
    {
      *(_DWORD *)pCallbackContext = 0;
    }
    v8 = (void (__fastcall *)(const _GUID *, __int64, __int64, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, _QWORD))pCallbackContext[5];
    if ( v8 )
      v8(pSourceId, callbackType, level, keywordAny, keywordAll, pFilterData, pCallbackContext[6]);
  }
}
