/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C00EA118
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00E9FA0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C00EA0E0 (UmfdUnloadFontFile.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C001B9B8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C001BC7C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00EA1C0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-50h] BYREF
  struct _SLIST_ENTRY v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp-18h]

  v6 = a1;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(v2, &v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 5);
  v9 = a1;
  v8[0].Next = (struct _SLIST_ENTRY *)&UnloadFontFileRequest::`vftable';
  v10 = 0;
  v3 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), v8);
  v4 = v10;
  if ( v3 < 0 )
    return 0;
  return v4;
}
