/*
 * XREFs of AslPathWildcardFindFirst @ 0x140A52910
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140A4D6E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyNW @ 0x14039301C (RtlStringCbCopyNW.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     AslDoesFileExistNtPath @ 0x140A514E0 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x140A521B8 (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x140A52E68 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A539A4 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x140A53BC8 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x140A53C98 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x140A53CE4 (AslpPathWildcardMakeLeaves.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int64 a2,
        const wchar_t *a3,
        _QWORD *a4)
{
  WCHAR *v8; // r14
  int matched; // ebx
  __int64 v10; // rcx
  size_t v11; // rbx
  wchar_t *v12; // rax
  int Leaves; // eax
  __int64 v14; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v16; // rdi
  PVOID PoolWithTag; // rax
  PVOID v18; // rbx
  void *v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  size_t v27; // r15
  SIZE_T v28; // rdx
  PVOID v29; // rax
  void *v30; // rbx
  PVOID v31; // rax
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  _DWORD *v35; // [rsp+30h] [rbp-50h] BYREF
  size_t Size; // [rsp+38h] [rbp-48h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v39; // [rsp+60h] [rbp-20h] BYREF
  __int128 v40; // [rsp+70h] [rbp-10h]
  unsigned __int64 pusResult; // [rsp+B8h] [rbp+38h] BYREF

  pusResult = a2;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *pszDest = 0;
  v35 = 0LL;
  LOWORD(pusResult) = 0;
  *a4 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  SourceString = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    if ( matched < 0 )
      goto LABEL_61;
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched < 0 )
      goto LABEL_61;
    v11 = (unsigned __int16)pusResult;
    v12 = (wchar_t *)AslAlloc(v10, (unsigned __int16)pusResult);
    v8 = v12;
    if ( !v12 )
    {
LABEL_13:
      matched = -1073741801;
      goto LABEL_62;
    }
    matched = RtlStringCbCopyNW(v12, v11, DestinationString.Buffer, DestinationString.Length);
    if ( matched < 0 )
      goto LABEL_61;
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      goto LABEL_9;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *a4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_62;
      }
      matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_62;
      }
      goto LABEL_61;
    }
    v35 = AslAlloc(v14, 0x40uLL);
    v16 = v35;
    if ( !v35 )
      goto LABEL_13;
    *v35 = wcsncmp(a3, L"\\??\\", 4uLL) != 0;
    *((_QWORD *)v16 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v16 + 1) = 0LL;
    *((_OWORD *)v16 + 2) = 0LL;
    *((_OWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_QWORD *)v16 + 6) = 16LL;
    *((_QWORD *)v16 + 4) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 3) = 32LL;
    pusResult = 0LL;
    if ( is_mul_ok(0LL, 0x20uLL) && (pusResult = 0LL, is_mul_ok(0x10uLL, 0x20uLL)) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x72615452u);
      v18 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 0x200uLL);
      if ( v18 )
      {
        *((_QWORD *)v16 + 7) = v18;
        matched = 0;
        *((_QWORD *)v16 + 5) = 16LL;
      }
      else
      {
        matched = -1073741801;
      }
    }
    else
    {
      matched = -1073741675;
    }
    if ( matched )
    {
      v19 = (void *)*((_QWORD *)v16 + 7);
      if ( v19 )
        ExFreePoolWithTag(v19, 0x72615452u);
      *((_OWORD *)v16 + 1) = 0LL;
      *((_OWORD *)v16 + 2) = 0LL;
      *((_OWORD *)v16 + 3) = 0LL;
      AslLogCallPrintf(1LL);
      goto LABEL_61;
    }
    RtlInitUnicodeString(&SourceString, *((PCWSTR *)v16 + 1));
    matched = AslpPathWildcardAllocMatchNode(&v39, &SourceString, 0LL, 0);
    if ( matched < 0 )
    {
LABEL_61:
      AslLogCallPrintf(1LL);
      goto LABEL_62;
    }
    v20 = *((_QWORD *)v16 + 4);
    v21 = *((_QWORD *)v16 + 5);
    pusResult = v20;
    if ( v20 < v21 )
      goto LABEL_57;
    v22 = v20 + 1;
    if ( v20 + 1 <= v21 )
    {
      matched = -1073741811;
      goto LABEL_61;
    }
    v23 = *((_QWORD *)v16 + 6) - 1LL;
    v24 = v23 + v22;
    if ( v23 + v22 < v22 )
    {
LABEL_60:
      matched = -1073741675;
      goto LABEL_61;
    }
    v25 = *((_QWORD *)v16 + 3);
    v26 = v24 & ~v23;
    *(_QWORD *)&SourceString.Length = 0LL;
    Size = v21 * v25;
    if ( !is_mul_ok(v21, v25) )
    {
      matched = -1073741675;
      goto LABEL_56;
    }
    *(_QWORD *)&SourceString.Length = 0LL;
    v27 = v26 * v25;
    if ( !is_mul_ok(v26, v25) )
    {
      matched = -1073741675;
      goto LABEL_56;
    }
    *(_QWORD *)&SourceString.Length = *((_QWORD *)v16 + 7);
    v28 = v26 * v25;
    if ( *(_QWORD *)&SourceString.Length )
    {
      v31 = ExAllocatePoolWithTag(PagedPool, v28, 0x72615452u);
      v30 = v31;
      if ( !v31 )
      {
LABEL_54:
        matched = -1073741801;
        goto LABEL_55;
      }
      memset(v31, 0, v27);
      if ( Size < v27 )
        v27 = Size;
      memmove(v30, *(const void **)&SourceString.Length, v27);
      ExFreePoolWithTag(*(PVOID *)&SourceString.Length, 0x72615452u);
    }
    else
    {
      v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x72615452u);
      v30 = v29;
      if ( v29 )
        memset(v29, 0, v27);
      if ( !v30 )
        goto LABEL_54;
    }
    *((_QWORD *)v16 + 7) = v30;
    matched = 0;
    *((_QWORD *)v16 + 5) = v26;
LABEL_55:
    v20 = pusResult;
LABEL_56:
    if ( matched )
      goto LABEL_61;
LABEL_57:
    v32 = *((unsigned __int64 *)v16 + 3) * (unsigned __int128)v20;
    if ( is_mul_ok(*((_QWORD *)v16 + 3), v20) )
    {
      v33 = *((_QWORD *)v16 + 7);
      v34 = v33 + *((_QWORD *)v16 + 3) * v20;
      if ( v34 >= v33 )
      {
        *(UNICODE_STRING *)v34 = v39;
        *(_OWORD *)(v34 + 16) = v40;
        ++*((_QWORD *)v16 + 4);
        *a4 = v16;
        v39 = 0LL;
        v40 = 0LL;
        matched = AslPathWildcardFindNext(pszDest, *((_QWORD *)&v32 + 1), v16);
        goto LABEL_62;
      }
    }
    goto LABEL_60;
  }
  matched = -1073741801;
LABEL_9:
  AslLogCallPrintf(1LL);
LABEL_62:
  RtlFreeUnicodeString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v35);
    AslpPathWildcardFreeMatchNode(&v39);
    *a4 = 0LL;
  }
  return (unsigned int)matched;
}
