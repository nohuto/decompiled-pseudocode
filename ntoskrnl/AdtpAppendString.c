/*
 * XREFs of AdtpAppendString @ 0x140A58AA0
 * Callers:
 *     AdtpAppendZString @ 0x140A58C38 (AdtpAppendZString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140A59130 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpAppendString(__int64 a1, __int64 a2, UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  unsigned __int16 Length; // si
  unsigned int v8; // edi
  wchar_t *Buffer; // r14
  _BYTE *i; // r12
  UNICODE_STRING *v11; // rcx
  unsigned __int16 v12; // dx
  bool v13; // zf
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned int v16; // r13d
  void *Pool2; // rax
  const void *v18; // rdx
  UNICODE_STRING Source; // [rsp+20h] [rbp-48h] BYREF
  void *v20; // [rsp+80h] [rbp+18h]

  v4 = (unsigned int)*a4;
  Source = *a3;
  if ( (_DWORD)v4 )
    return 0LL;
  Length = Source.Length;
  v8 = 0;
  if ( Source.Length )
  {
    Buffer = Source.Buffer;
    for ( i = (_BYTE *)(v4 + a2); ; *i = 1 )
    {
      if ( *i )
      {
        v11 = (UNICODE_STRING *)(a1 + 16 * v4);
        if ( v11->Length != 0xFFFE )
        {
          v12 = v11->MaximumLength - v11->Length;
          v13 = *Buffer == 37;
          Source = 0LL;
          if ( !v13 || v12 >= Length )
          {
            Source.Buffer = Buffer;
            v14 = Length;
            if ( v12 < Length )
              v14 = v12;
            Source.Length = v14;
            Length -= v14;
            Buffer = (wchar_t *)((char *)Buffer + v14);
            RtlAppendUnicodeStringToString(v11, &Source);
          }
        }
      }
      if ( !Length )
        break;
      v15 = *(unsigned __int16 *)(a1 + 16 * v4);
      if ( (unsigned __int16)v15 >= 0xFFFEu || *Buffer == 37 && (unsigned int)Length + v15 >= 0xFFFE )
        break;
      v16 = Length;
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024 > Length )
        v16 = *(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024;
      if ( v16 >= 0xFFFE )
        v16 = 65534;
      Pool2 = (void *)ExAllocatePool2(256LL, v16, 1799447891LL);
      v20 = Pool2;
      if ( !Pool2 )
      {
        v8 = -1073741801;
        break;
      }
      v18 = *(const void **)(a1 + 16 * v4 + 8);
      if ( v18 )
      {
        memmove(Pool2, v18, *(unsigned __int16 *)(a1 + 16 * v4));
        if ( *i )
          ExFreePoolWithTag(*(PVOID *)(a1 + 16 * v4 + 8), 0);
        Pool2 = v20;
      }
      *(_QWORD *)(a1 + 16 * v4 + 8) = Pool2;
      *(_WORD *)(a1 + 16 * v4 + 2) = v16;
    }
  }
  result = v8;
  *a4 = 0;
  return result;
}
