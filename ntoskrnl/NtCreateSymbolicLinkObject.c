__int64 __fastcall NtCreateSymbolicLinkObject(unsigned __int64 a1, int a2, __int64 a3, UNICODE_STRING *a4)
{
  char PreviousMode; // r9
  __m128i v9; // xmm1
  UNICODE_STRING *v10; // rax
  unsigned __int16 v11; // di
  unsigned int SymbolicLink; // ebx
  REGHANDLE v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  wchar_t *v25; // r8
  wchar_t *v26; // r8
  __int16 v27; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING v28; // [rsp+38h] [rbp-F0h] BYREF
  int v29; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING *v32; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-98h] BYREF

  v28 = 0LL;
  DestinationString = 0LL;
  HIDWORD(v33) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = 0x7FFFFFFF0000LL;
    v32 = *(UNICODE_STRING **)(a3 + 16);
    if ( v32 )
    {
      DestinationString = *v32;
      v24 = _mm_cvtsi128_si32((__m128i)DestinationString);
      if ( v24 )
      {
        v25 = (wchar_t *)((char *)DestinationString.Buffer + v24);
        if ( (unsigned __int64)v25 > 0x7FFFFFFF0000LL || v25 < DestinationString.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v28 = *a4;
    if ( v28.MaximumLength )
    {
      v26 = (wchar_t *)((char *)v28.Buffer + v28.MaximumLength);
      if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < v28.Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a1 < 0x7FFFFFFF0000LL )
      v23 = a1;
    *(_QWORD *)v23 = *(_QWORD *)v23;
    v9 = (__m128i)v28;
  }
  else
  {
    v9 = *(__m128i *)a4;
    v28 = *a4;
    v10 = *(UNICODE_STRING **)(a3 + 16);
    if ( v10 )
      DestinationString = *v10;
  }
  if ( (v9.m128i_i8[2] & 1) != 0 )
  {
    v28.MaximumLength = v9.m128i_i16[1] & 0xFFFE;
    v9 = (__m128i)v28;
  }
  if ( !v28.MaximumLength )
    return 3221225485LL;
  v11 = _mm_cvtsi128_si32(v9);
  if ( v11 > v28.MaximumLength || (_mm_cvtsi128_si32(v9) & 1) != 0 )
    return 3221225485LL;
  v33 = 4LL;
  v34 = v9;
  SymbolicLink = ObCreateSymbolicLink(a1, a2, a3, (unsigned int)&v33, PreviousMode);
  v30 = SymbolicLink;
  v29 = a2;
  v13 = EtwApiCallsProvRegHandle;
  if ( EtwApiCallsProvRegHandle )
  {
    v27 = 0;
    v14 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v14 = 1;
    }
    v15 = v14;
    UserData[v15].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v15].Size = 2LL;
    v16 = v14 + 1;
    if ( v28.Buffer )
    {
      v17 = v16;
      UserData[v17].Ptr = (ULONGLONG)v28.Buffer;
      UserData[v17].Size = v11;
      *(&UserData[0].Reserved + 1 * v17) = 0;
      ++v16;
    }
    v18 = v16;
    UserData[v18].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    v19 = v16 + 1;
    v20 = v19;
    UserData[v20].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v20].Size = 4LL;
    v21 = ++v19;
    UserData[v21].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v21].Size = 4LL;
    EtwWrite(v13, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v19 + 1, UserData);
  }
  return SymbolicLink;
}
