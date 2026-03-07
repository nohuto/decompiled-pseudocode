__int64 __fastcall TraceLoggingStartingRecalc(int a1, __int64 a2, int a3, int a4, __int64 a5, int a6, int a7)
{
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+98h] [rbp-21h] BYREF
  int v21; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v22; // [rsp+A0h] [rbp-19h] BYREF
  int v23; // [rsp+A4h] [rbp-15h] BYREF
  int v24; // [rsp+A8h] [rbp-11h] BYREF
  int v25; // [rsp+ACh] [rbp-Dh] BYREF
  int v26; // [rsp+B0h] [rbp-9h] BYREF
  int v27; // [rsp+B4h] [rbp-5h] BYREF
  int v28; // [rsp+B8h] [rbp-1h] BYREF
  int v29; // [rsp+BCh] [rbp+3h] BYREF
  int v30; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+1Fh] BYREF
  __int128 v34; // [rsp+E0h] [rbp+27h]

  v34 = 0LL;
  result = qword_1C0361330;
  qword_1C0361330 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    result = tlgKeywordOn(&dword_1C0357098, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v20 = a7;
      v21 = a6;
      v22 = v12;
      v25 = (v13 >> 4) & 1;
      v31 = v14;
      v26 = (v13 >> 3) & 1;
      v23 = a4;
      v27 = (v13 >> 2) & 1;
      v24 = a3;
      v28 = (v13 >> 1) & 1;
      v29 = v13 & 1;
      v30 = a1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)CurrentProcessWin32Process);
      v33 = 50331648LL;
      v32 = ProcessImageFileName;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v17,
               (unsigned int)&unk_1C031DB26,
               v18,
               v19,
               (__int64)&v33,
               (__int64)&v32,
               (__int64)&v30,
               (__int64)&v29,
               (__int64)&v28,
               (__int64)&v27,
               (__int64)&v26,
               (__int64)&v25,
               (__int64)&v24,
               (__int64)&v23,
               (__int64)&v31,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v20);
    }
  }
  return result;
}
