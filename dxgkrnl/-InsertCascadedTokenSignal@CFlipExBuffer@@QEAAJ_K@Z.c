/*
 * XREFs of ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C007D7AC
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C007BE28 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C034E2AC (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::InsertCascadedTokenSignal(CFlipExBuffer *this, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = -1073741823;
  if ( *((_QWORD *)this + 80) )
  {
    v8 = 0LL;
    if ( (int)DxgkGetSessionTokenManager(&v8) < 0 )
      return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 80), a2);
    v5 = v8;
    v7 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 152LL))(
           v8,
           *((_QWORD *)this + 45),
           &v7);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v7 + 16LL))(
             v7,
             *((_QWORD *)this + 80),
             a2,
             0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v4 < 0 )
      return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 80), a2);
  }
  return (unsigned int)v4;
}
