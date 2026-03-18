/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C007C648
 * Callers:
 *     UmfdUnloadFontFile @ 0x1C007C570 (UmfdUnloadFontFile.c)
 *     UmfdLoadFontFile @ 0x1C007ECF0 (UmfdLoadFontFile.c)
 * Callees:
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C007EE40 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C007EF30 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C007FC30 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0080D84 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
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
  FontDriverDdiRequest::FontDriverDdiRequest(v9, 5LL);
  v9[5] = a1;
  v9[0] = &UnloadFontFileRequest::`vftable';
  v10 = 0;
  v4 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), v9);
  v5 = v10;
  if ( v4 < 0 )
    return 0;
  return v5;
}
