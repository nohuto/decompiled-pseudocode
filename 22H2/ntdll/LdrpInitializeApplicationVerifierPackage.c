/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800D0A70
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x1800765D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // ecx
  __int64 i; // rax
  __int64 result; // rax
  int v15; // ecx
  int *v16; // rbx
  int v17; // r13d
  int inited; // edi
  char *v19; // r14
  int ValueKey; // eax
  __int64 v21; // r15
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v27[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  char v32; // [rsp+70h] [rbp-90h] BYREF

  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v10 = *a1;
    v11 = *a1;
    v12 = v10;
    for ( i = *((_QWORD *)v9 + 1) + v11; v12; v12 -= 2 )
    {
      if ( *(_WORD *)(i - 2) == 92 )
        break;
      i -= 2LL;
    }
    v30 = i;
    v29 = v10 - v12;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !(unsigned int)RtlCompareUnicodeString(&v29, &DestinationString.Length, 1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  LOBYTE(a1) = a3;
  result = AVrfInitializeVerifier((_DWORD)a1, (_DWORD)v9, a4, 0, a5, a6);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    dword_1801663E8 = 0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    *(_DWORD *)RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = (int *)RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_44;
    inited = RtlInitUnicodeStringEx((__int64)v27, (__int64)L"PageHeapFlags");
    if ( inited < 0 )
    {
LABEL_42:
      if ( inited < 0 )
LABEL_43:
        *v16 = -1;
LABEL_44:
      if ( *v16 == -1 )
        *v16 = v17;
      if ( (((*v16 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6897,
            "LdrpInitializeApplicationVerifierPackage",
            2,
            "Per-DLL page heap is disabled since fast fill heap is enabled\n");
          v16 = (int *)RtlpDebugPageHeapTable;
        }
        *v16 &= ~0x400u;
      }
      dword_1801663E8 = 1;
      return 0LL;
    }
    v19 = &v32;
    ValueKey = NtQueryValueKey();
    inited = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v26);
          v21 = Heap;
          if ( !Heap )
            break;
          v19 = (char *)Heap;
          v24 = NtQueryValueKey();
          inited = v24;
          if ( v24 >= 0 )
            goto LABEL_22;
          if ( v24 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v19);
        }
        v16 = (int *)RtlpDebugPageHeapTable;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v21 = 0LL;
LABEL_22:
    v25 = *((_DWORD *)v19 + 1);
    if ( ((v25 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v25 == 4 )
      {
        if ( *((_DWORD *)v19 + 2) != 4 )
        {
          inited = -1073741820;
          goto LABEL_39;
        }
        if ( v16 )
        {
          *v16 = *((_DWORD *)v19 + 3);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
      if ( v25 == 1 )
      {
        if ( ((unsigned __int8)v16 & 3) != 0 )
        {
          inited = -2147483646;
          goto LABEL_39;
        }
        if ( v16 )
        {
          v28 = v19 + 12;
          v27[0] = *((_WORD *)v19 + 4);
          v27[1] = *((_WORD *)v19 + 4);
          inited = RtlUnicodeStringToInteger(v27, 0, v16);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
    }
    else if ( v25 == 4 )
    {
      if ( v16 && *((_DWORD *)v19 + 2) <= 4u )
      {
        memmove(v16, v19 + 12, *((unsigned int *)v19 + 2));
        goto LABEL_39;
      }
LABEL_38:
      inited = -2147483643;
LABEL_39:
      if ( v21 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
LABEL_41:
      v16 = (int *)RtlpDebugPageHeapTable;
      goto LABEL_42;
    }
    inited = -1073741788;
    goto LABEL_39;
  }
  return 0LL;
}
