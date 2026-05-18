/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004154
 * Callers:
 *     DwmpUpdateUserSettings @ 0x180003E4C (DwmpUpdateUserSettings.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180003D0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004100 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004440 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000446C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x1800049CC (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x1800049F8 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  CApiPortClient *v4; // rcx
  CApiPortClient *v5; // rcx
  int IsConnected; // esi
  int v7; // eax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  __int16 v10; // r9
  unsigned int v11; // ebp
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx

  v3 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v4);
  if ( !byte_18000B7B8 )
  {
    do
    {
      v7 = CApiPortClient::EnsureConnected(v5);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v7, 0x6Du);
        goto LABEL_16;
      }
      v9 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 14, 1u);
      LeaveCriticalSection(&CriticalSection);
      v11 = CPortClient::SendComplexAsyncRequest((CPortClient *)v9, *a2, a2, v10);
      if ( v9 && _InterlockedExchangeAdd(v9 + 14, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v9)(v9, 1LL);
      EnterCriticalSection(&CriticalSection);
      v5 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 14, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v5);
      if ( v11 != -805306313 )
        break;
      v12 = IsConnected--;
    }
    while ( v12 > 0 );
    v13 = CApiPortClient::Translate(v11);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v13, 0x86u);
  }
LABEL_16:
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
