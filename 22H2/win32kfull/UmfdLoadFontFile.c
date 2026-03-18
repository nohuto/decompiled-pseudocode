/*
 * XREFs of UmfdLoadFontFile @ 0x1C007ECF0
 * Callers:
 *     <none>
 * Callees:
 *     UmfdUnloadFontFile @ 0x1C007C570 (UmfdUnloadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C007C648 (UmfdUnloadFontFileInternal.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C007EE40 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C007EF30 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C007FC30 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C0080554 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void *__fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  void *v12; // rdi
  void *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v17; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h] BYREF
  int v19; // [rsp+38h] [rbp-D0h]
  int v20; // [rsp+3Ch] [rbp-CCh]
  _QWORD v21[5]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+CCh] [rbp-3Ch]
  int v27; // [rsp+D0h] [rbp-38h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  __int64 v29; // [rsp+140h] [rbp+38h]
  int v30; // [rsp+148h] [rbp+40h]
  void *v31; // [rsp+150h] [rbp+48h]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest(v21, 4LL);
  v29 = 0LL;
  v30 = -1;
  v31 = 0LL;
  v21[0] = &LoadFontFileRequest::`vftable';
  v28 = a5;
  v23 = a2;
  v12 = 0LL;
  v26 = a6;
  LODWORD(v22) = v10;
  v13 = 0LL;
  v27 = a7;
  v24 = a3;
  v25 = a4;
  v17 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(2LL, v21) >= 0 )
  {
    v12 = v31;
    v17 = v31;
    v13 = v31;
  }
  if ( v13 )
  {
    AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v18);
    v15 = SGDGetSessionState(v14);
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(
                             *(_QWORD *)(*(_QWORD *)(v15 + 32) + 23480LL),
                             &v17,
                             &v17) )
    {
      UmfdUnloadFontFile(v12);
      v13 = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v18);
  }
  else if ( v29 )
  {
    v20 = 0;
    v18 = v29;
    v19 = v30;
    UmfdUnloadFontFileInternal((__int64)&v18);
  }
  return v13;
}
