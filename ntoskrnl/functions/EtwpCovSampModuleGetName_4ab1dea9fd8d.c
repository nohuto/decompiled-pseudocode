__int64 __fastcall EtwpCovSampModuleGetName(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a2 + 48);
  v12 = 0LL;
  v11 = 0LL;
  StringOut = 0LL;
  if ( v4
    && FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(v4, 512LL, &v11, &v12) >= 0 )
  {
    v6 = 0;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v11 + 1);
    *(_WORD *)(a1 + 120) = (unsigned __int16)v11 >> 1;
    v7 = v12 | 1;
    v12 = 0LL;
    *(_QWORD *)(a1 + 104) = v7;
  }
  else
  {
    if ( a3 && a3->Length )
    {
      v6 = RtlDuplicateUnicodeString(0, a3, &StringOut);
      if ( v6 >= 0 )
      {
        Buffer = StringOut.Buffer;
        v6 = 0;
        *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
        *(_QWORD *)(a1 + 112) = Buffer;
        *(_QWORD *)(a1 + 104) = Buffer;
        StringOut = 0LL;
      }
    }
    else
    {
      v6 = -1073741275;
    }
    if ( v12 )
      (*(void (**)(void))(FltMgrCallbacks + 32))();
  }
  RtlFreeUnicodeString(&StringOut);
  return (unsigned int)v6;
}
