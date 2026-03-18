/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1C016C18C
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C001ED50 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00DA4C8 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0167F3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(int a1, char a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v16) = a2;
  v4 = 1;
  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v6, v5, v8);
      if ( a3 || (LODWORD(v11) = *((_DWORD *)W32ProcessFromId + 15), (int)v11 < gProcessHandleQuota) )
      {
        HmgpIncProcessHandleCountEx(W32ProcessFromId);
      }
      else
      {
        v12 = *((_DWORD *)W32ProcessFromId + 72);
        v4 = 0;
        if ( (v12 & 8) == 0 )
        {
          *((_DWORD *)W32ProcessFromId + 72) = v12 | 8;
          if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
          {
            v15[0] = 0x1000000LL;
            v16 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (__int64)&dword_1C028D6F0,
              byte_1C025C0BC,
              v11,
              v13,
              (__int64)&v16,
              (__int64)v15);
          }
        }
      }
      GreReleaseHmgrSemaphore(v10, v9, v11);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v4;
}
