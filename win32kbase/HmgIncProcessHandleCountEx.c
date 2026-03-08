/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C004FEB0
 * Callers:
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C008B288 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(__int64 a1, char a2, int a3)
{
  void *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r15
  struct _ERESOURCE *v13; // r14
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  unsigned int v18; // r9d
  int v19; // r8d
  int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r8d
  struct _ERESOURCE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *ProcessWin32Process; // rax
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  int v34; // r8d
  int v35; // r9d
  _QWORD v36[2]; // [rsp+30h] [rbp-38h] BYREF
  int v37; // [rsp+78h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v37) = a2;
  v4 = (void *)(int)a1;
  v5 = 1;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(_DWORD)v4 || (_DWORD)v4 == -2147483630 )
    return v5;
  Process = 0LL;
  if ( (_DWORD)v4 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v10 = 0LL;
LABEL_7:
    if ( v10 )
    {
      v12 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
      v13 = *(struct _ERESOURCE **)(v12 + 1912);
      if ( v13 )
      {
        PsEnterPriorityRegion(v11);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
      }
      v14 = *(_QWORD *)(v12 + 1912);
      v16 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
      if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v16, v15, v17, v14, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      if ( a3 || v10[15] < *(_DWORD *)(v6 + 2376) )
      {
        v18 = v10[16];
        v19 = v10[15] + 1;
        v10[15] = v19;
        v20 = v18;
        if ( v19 > v18 )
          v20 = v19;
        v16 = (unsigned int)(1000 * (v19 / 1000));
        if ( v19 == (_DWORD)v16
          && v18 != v20
          && (unsigned int)dword_1C02C93D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
        {
          v36[0] = 0x1000000LL;
          v37 = v34;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C02C93D8,
            (unsigned int)&unk_1C02955F8,
            v34,
            v35,
            (__int64)&v37,
            (__int64)v36);
        }
        v10[16] = v20;
      }
      else
      {
        v31 = v10[72];
        v5 = 0;
        if ( (v31 & 0x20) == 0 )
        {
          v10[72] = v31 | 0x20;
          if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
          {
            v36[0] = 0x1000000LL;
            v37 = v32;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C02C93D8,
              (unsigned int)&unk_1C029563A,
              v32,
              v33,
              (__int64)&v37,
              (__int64)v36);
          }
        }
      }
      v21 = *(_QWORD *)(SGDGetSessionState(v16) + 24);
      v22 = *(_QWORD *)(v21 + 1912);
      v24 = *(_QWORD *)(SGDGetSessionState(v23) + 24);
      if ( *(_DWORD *)(v24 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v24, (unsigned int)&LockRelease, v25, v22, (__int64)L"GreBaseGlobals.hsemHmgr");
      v26 = *(struct _ERESOURCE **)(v21 + 1912);
      if ( v26 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v26);
        PsLeavePriorityRegion(v28, v27);
      }
    }
    goto LABEL_20;
  }
  if ( PsLookupProcessByProcessId(v4, &Process) >= 0 )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
    v10 = ProcessWin32Process;
    if ( ProcessWin32Process && !*ProcessWin32Process )
      v10 = 0LL;
    goto LABEL_7;
  }
LABEL_20:
  if ( Process )
    ObfDereferenceObject(Process);
  return v5;
}
