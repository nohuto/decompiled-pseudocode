/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C00150F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x1C0015284 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0015590 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     Feature_CursorDeadzoneJump__private_ReportDeviceUsage @ 0x1C00DFECC (Feature_CursorDeadzoneJump__private_ReportDeviceUsage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C020A654 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

__int64 __fastcall CCursorClip::BoundPoint(_DWORD *a1, __int64 a2, unsigned int a3, int a4, struct tagPOINT *a5)
{
  struct tagPOINT *v9; // r15
  unsigned int v10; // r12d
  int v11; // esi
  const char *v12; // rax
  LONG x; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+50h] BYREF

  v18 = a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 8));
  v9 = a5;
  v10 = 0;
  *a5 = (struct tagPOINT)a2;
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      Feature_CursorDeadzoneJump__private_ReportDeviceUsage();
      if ( dword_1C02CAB10 )
        a3 |= 4u;
    }
    if ( CCursorClip::ApplyAppClip((CCursorClip *)a1, *v9, v9) )
      v10 = 1;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySystemClips)(
                            a1,
                            *v9,
                            a3,
                            v9) )
      v10 = 2;
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 64LL) )
  {
    LODWORD(v19) = a1[64];
    LODWORD(a5) = a3;
    if ( a4 )
    {
      v11 = a4 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v12 = "ActiveCursorTracking";
        else
          v12 = "UNKNOWN";
      }
      else
      {
        v12 = "SetCursorPos";
      }
    }
    else
    {
      v12 = "MouseInput";
    }
    v16 = (__int64)v12;
    LODWORD(v17) = v9->y;
    x = v9->x;
    LODWORD(v18) = HIDWORD(v18);
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&x,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&a5,
      (__int64)&v19);
  }
  CPushLock::ReleaseLock((CPushLock *)(a1 + 8));
  return v10;
}
