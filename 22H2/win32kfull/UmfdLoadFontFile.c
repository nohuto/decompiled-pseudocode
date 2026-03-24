/*
 * XREFs of UmfdLoadFontFile @ 0x1C00FD9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C009A580 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00FDCD4 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     UmfdUnloadFontFile @ 0x1C00FDD70 (UmfdUnloadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FDDA8 (UmfdUnloadFontFileInternal.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00FDF38 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

PVOID __fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  PVOID v12; // rbx
  __int64 v13; // rcx
  PVOID v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h] BYREF
  int v17; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+3Ch] [rbp-CCh]
  _QWORD v19[5]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+CCh] [rbp-3Ch]
  int v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  __int64 v27; // [rsp+140h] [rbp+38h]
  int v28; // [rsp+148h] [rbp+40h]
  PVOID pv; // [rsp+150h] [rbp+48h]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest(v19, 4LL);
  v27 = 0LL;
  v28 = -1;
  pv = 0LL;
  v19[0] = &LoadFontFileRequest::`vftable';
  v26 = a5;
  LODWORD(v20) = v10;
  v12 = 0LL;
  v24 = a6;
  v25 = a7;
  v21 = a2;
  v22 = a3;
  v23 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, (__int64)v19) >= 0 && (v12 = pv, (v15 = pv) != 0LL) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v16, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(v13, &v15, &v15) )
    {
      UmfdUnloadFontFile(v12);
      v12 = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
  }
  else if ( v27 )
  {
    v18 = 0;
    v16 = v27;
    v17 = v28;
    UmfdUnloadFontFileInternal(&v16);
  }
  return v12;
}
