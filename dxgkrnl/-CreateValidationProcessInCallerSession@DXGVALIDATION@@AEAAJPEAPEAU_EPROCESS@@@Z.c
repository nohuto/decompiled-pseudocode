/*
 * XREFs of ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C005A008
 * Callers:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0016FA4 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DXGVALIDATION::CreateValidationProcessInCallerSession(DXGVALIDATION *this, PVOID *a2)
{
  __int64 v3; // rax
  void *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID Ptr; // rcx
  _EX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h]
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v14; // [rsp+90h] [rbp-78h]
  __int64 v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A8h] [rbp-60h]
  int v18; // [rsp+ACh] [rbp-5Ch]
  __int128 v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  _BYTE v21[80]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+128h] [rbp+20h]
  __int64 v23; // [rsp+130h] [rbp+28h]
  __int64 v24; // [rsp+138h] [rbp+30h]
  const wchar_t *v25; // [rsp+140h] [rbp+38h]
  __int64 v26; // [rsp+148h] [rbp+40h]

  v26 = 0LL;
  v14.GrantedAccess = 0;
  v18 = 0;
  RunRef.Count = 0LL;
  Handle = 0LL;
  *(_QWORD *)&SourceString.Length = 2883626LL;
  SourceString.Buffer = L"\\SystemRoot\\System32\\";
  v3 = operator new[](0x474uLL, 0x4B677844u, 256LL);
  v4 = (void *)v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = 1140;
    *(_DWORD *)v3 = 1140;
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 64) = v3 + 1096;
    *(_WORD *)(v3 + 58) = SourceString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 56), &SourceString);
    memset(v21, 0, sizeof(v21));
    v26 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v25 = L"\\SystemRoot\\System32\\csrss.exe";
    v20 = 88LL;
    v22 = 40LL;
    v23 = 131077LL;
    v24 = 60LL;
    v14.HandleAttributes = 48;
    v17 = 576;
    v19 = 0LL;
    LOBYTE(v6) = ZwCreateUserProcess(&RunRef);
    v5 = v6;
    if ( v6 >= 0 )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(RunRef.Ptr, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      Ptr = RunRef.Ptr;
      v5 = v7;
      *a2 = Object;
      ZwTerminateProcess(Ptr, -1);
      ZwClose(RunRef.Ptr);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
