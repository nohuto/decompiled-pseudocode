/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C0121FD8
 * Callers:
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C0121FA0 (UmfdUnloadFontFile.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C011D930 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0121ECC (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+60h] [rbp-18h]

  v7 = a1;
  AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)v8);
  v3 = SGDGetSessionState(v2);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(
    *(_QWORD *)(*(_QWORD *)(v3 + 32) + 23480LL),
    &v7);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v9, 5);
  v9[5] = a1;
  v9[0] = &UnloadFontFileRequest::`vftable';
  v10 = 0;
  v4 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), (__int64)v9);
  v5 = v10;
  if ( v4 < 0 )
    return 0;
  return v5;
}
