/*
 * XREFs of CmpNameFromAttributes @ 0x1406BD314
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryObject @ 0x140412510 (ZwQueryObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140944030 (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int16 v8; // si
  wchar_t *Pool2; // rax
  __int64 result; // rax
  NTSTATUS v11; // r15d
  __m128i v12; // xmm0
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 Length; // rax
  wchar_t *Buffer; // rcx
  ULONG ReturnLength; // [rsp+34h] [rbp-294h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-290h]
  void *Src[2]; // [rsp+40h] [rbp-288h] BYREF
  UNICODE_STRING *v20; // [rsp+50h] [rbp-278h]
  UNICODE_STRING Source; // [rsp+58h] [rbp-270h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-260h] BYREF
  __int128 v23; // [rsp+78h] [rbp-250h]
  __int128 v24; // [rsp+88h] [rbp-240h]
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-228h] BYREF

  v20 = a3;
  Source = 0LL;
  v6 = 0;
  ReturnLength = 0;
  v18 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v7 = 0x7FFFFFFF0000LL;
  }
  *(_OWORD *)Handle = *a1;
  v23 = a1[1];
  v24 = a1[2];
  *(_OWORD *)Src = *(_OWORD *)v23;
  if ( a2 == 1 )
  {
    v8 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v8 = (unsigned __int16)Src[0];
  }
  if ( (v8 & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !v8 )
      return 3221225531LL;
    a3->Length = v8;
    a3->MaximumLength = v8;
    Pool2 = (wchar_t *)ExAllocatePool2(257LL, v8, 1852198211LL);
    a3->Buffer = Pool2;
    if ( Pool2 )
      memmove(Pool2, Src[1], v8);
    else
      return (unsigned int)-1073741670;
    return v6;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && v8 >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  LOBYTE(a4) = 1;
  LOBYTE(v7) = a2;
  result = IoConvertFileHandleToKernelHandle(Handle[1], v7, 32LL, a4, &Handle[1]);
  if ( (int)result >= 0 )
  {
    v11 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, &ReturnLength);
    ZwClose(Handle[1]);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v13 = (unsigned __int16)_mm_cvtsi128_si32(v12) + 2 + v8;
    v18 = v13;
    if ( v13 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v13;
    v14 = ExAllocatePool2(257LL, (unsigned __int16)v13, 1852198211LL);
    a3->Buffer = (wchar_t *)v14;
    if ( !v14 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    Length = a3->Length;
    if ( (_WORD)Length )
    {
      Buffer = a3->Buffer;
      if ( *(wchar_t *)((char *)Buffer + Length - 2) != 92 )
      {
        *(wchar_t *)((char *)Buffer + Length) = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}
