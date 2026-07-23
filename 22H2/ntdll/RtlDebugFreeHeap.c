/*
 * XREFs of RtlDebugFreeHeap @ 0x1800F927C
 * Callers:
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpValidateHeapEntry @ 0x18005F820 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005FA90 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3F08 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1800FA47C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAA84 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107D24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010DF24 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int16 v11; // dx
  unsigned __int16 v12; // cx
  wchar_t *TagName; // rax
  char v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v17; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v14 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_180166410)();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    Flags = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v14 = 1;
      Flags = v8 | 1;
    }
    RtlpValidateHeap((_DWORD)Src);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v15 = v9;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == (char *)qword_18016AC80 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_18016AC80);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v11 = unk_18016AC88;
      if ( !unk_18016AC88 )
        goto LABEL_33;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v15);
          v11 = unk_18016AC88;
        }
      }
      if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
        v12 = *(_WORD *)(RtlpGetExtraStuffPointer(v15) + 2);
      else
        v12 = *(unsigned __int8 *)(v15 + 11);
      v17 = v12;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( !v12 || v12 != v11 || *((_WORD *)Src + 104) != word_18016AC8A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v17);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap();
LABEL_33:
    v6 = RtlFreeHeap(Src, Flags, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v14 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
