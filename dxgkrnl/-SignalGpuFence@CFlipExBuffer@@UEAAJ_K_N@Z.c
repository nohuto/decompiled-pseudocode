/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C007DD00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C034E2AC (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // ebx
  int SessionTokenManager; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_13;
    v13 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v13);
    v7 = v13;
    v3 = SessionTokenManager;
    if ( SessionTokenManager >= 0 )
    {
      if ( *((_DWORD *)this + 159)
        && ((v8 = *((_QWORD *)this + 85),
             *((_BYTE *)this + 688) = 1,
             v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8),
             v9 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7))
          ? (v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 85) + 48LL))(
                    *((_QWORD *)this + 85),
                    *((unsigned int *)this + 164),
                    *((_QWORD *)this + 43),
                    a2))
          : (v3 = -1073741823),
            --*((_DWORD *)this + 159),
            v3 >= 0) )
      {
        *((_BYTE *)this + 688) = 0;
      }
      else
      {
        v13 = 0LL;
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 152LL))(
               v7,
               *((_QWORD *)this + 45),
               &v13);
        if ( v3 >= 0 )
        {
          LOBYTE(v10) = *((_DWORD *)this + 164) == 0;
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 16LL))(
                 v13,
                 *((_QWORD *)this + 43),
                 a2,
                 v10);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v3 < 0 )
    {
LABEL_13:
      v11 = *((_QWORD *)this + 43);
      v3 = -1073741637;
      if ( v11 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v11, a2);
    }
  }
  return (unsigned int)v3;
}
