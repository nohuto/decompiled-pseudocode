/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0079660
 * Callers:
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0079BB0 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0242F70 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C0248DD8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        unsigned int a3,
        unsigned int a4,
        struct tagWND *a5)
{
  struct tagWND *v5; // r12
  unsigned int v6; // ebx
  unsigned int v8; // edi
  InteractiveControlDevice **v11; // rdi
  __int64 v12; // r15
  InteractiveControlDevice *v13; // rcx
  struct tagWND *v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+C0h] [rbp+50h] BYREF
  int v19; // [rsp+C8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = 0;
  v8 = a3;
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    v15 = a5;
    v16[0] = (__int64)"InteractiveControlManager::AcquireDeviceBackgroundAccess entry";
    LODWORD(v17) = a4;
    v18 = a3;
    v19 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)this,
      (unsigned int)&unk_1C031F2CE,
      a3,
      a4,
      (__int64)v16,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v15);
  }
  while ( v8 <= a4 )
    v6 |= 1 << (v8++ + 24);
  v11 = (InteractiveControlDevice **)((char *)this + 40);
  v12 = 5LL;
  do
  {
    v13 = *v11;
    if ( *v11 && (!a2 || a2 == *((_DWORD *)v13 + 2)) )
      InteractiveControlDevice::SetBackgroundAccessor(v13, v5, v6);
    ++v11;
    --v12;
  }
  while ( v12 );
  if ( !a2 )
  {
    if ( v5 == *((struct tagWND **)this + 2) )
    {
      *((_DWORD *)this + 6) |= v6;
    }
    else
    {
      *((_DWORD *)this + 6) = v6;
      v16[0] = (__int64)this + 16;
      v16[1] = (__int64)v5;
      HMAssignmentLock(v16, 0LL);
    }
  }
  if ( (unsigned int)dword_1C0357150 > 4 )
  {
    LODWORD(v17) = 0;
    v16[0] = (__int64)"InteractiveControlManager::AcquireDeviceBackgroundAccess exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0357150,
      (__int64)v16,
      (__int64)&v17);
  }
  return 0LL;
}
