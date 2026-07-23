/*
 * XREFs of PopPluginQuerySocSubsystemMetadata @ 0x1408E5FEC
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x1408E4E20 (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408E5AD4 (PopFxValidateReturnedUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PopPluginQuerySocSubsystemMetadata(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r15d
  ULONG_PTR v5; // r12
  SIZE_T v6; // rbx
  char v7; // bp
  __int64 v8; // r14
  __int64 *PoolWithTag; // rax
  __int64 *v10; // r13
  _OWORD *v11; // rax
  _OWORD *v12; // rdi
  _OWORD **v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  const UNICODE_STRING *v16; // rbx
  __int64 v17; // rbx
  unsigned __int16 **v18; // r15
  __int64 *v19; // r14
  __int128 v21; // [rsp+20h] [rbp-48h]
  __int64 HashValue; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+10h]
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v23 = a2;
  HashValue = a1;
  v3 = *(_DWORD *)(a3 + 28);
  v5 = PopFxProcessorPlugin;
  LODWORD(HashValue) = 0;
  v6 = 16LL * v3;
  v24 = v3;
  v7 = 0;
  v8 = v3;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v6, 0x4D584650u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    v11 = ExAllocatePoolWithTag(PagedPool, v6, 0x4D584650u);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v6);
      v21 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      if ( v3 )
      {
        v13 = (_OWORD **)(a3 + 32);
        v14 = v12;
        do
        {
          *(_OWORD *)((char *)v14 + (char *)v10 - (char *)v12) = **v13;
          v15 = *v13++;
          *v14++ = v15[1];
          --v8;
        }
        while ( v8 );
      }
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 96))(40LL, a3);
      if ( !v7 )
        PopFxBugCheck(0x605uLL, 0x28uLL, PopFxProcessorPlugin, 0LL);
      v16 = *(const UNICODE_STRING **)(a3 + 16);
      RtlHashUnicodeString(v16, 0, 0, (PULONG)&HashValue);
      if ( *(_DWORD *)&v16->Length != (_DWORD)v21
        || v16->Buffer != (wchar_t *)*((_QWORD *)&v21 + 1)
        || (_DWORD)HashValue != v23 )
      {
        PopFxBugCheck(0x705uLL, v5, 0x28uLL, 0x534E616DuLL);
      }
      v17 = 0LL;
      if ( v3 )
      {
        v18 = (unsigned __int16 **)(a3 + 32);
        v19 = v10 + 1;
        do
        {
          if ( !PopFxValidateReturnedUnicodeString(*v18, *v19, *((unsigned __int16 *)v19 - 3)) )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *(_QWORD *)(a3 + 8 * v17 + 32) + 8LL);
          v7 = PopFxValidateReturnedUnicodeString(
                 *v18 + 8,
                 *(__int64 *)((char *)v19 + (char *)v12 - (char *)v10),
                 *(unsigned __int16 *)((char *)v19 + (char *)v12 - (char *)v10 - 6));
          if ( !v7 )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *(_QWORD *)(a3 + 8 * v17 + 32) + 24LL);
          v17 = (unsigned int)(v17 + 1);
          ++v18;
          v19 += 2;
        }
        while ( (unsigned int)v17 < v24 );
      }
    }
    ExFreePoolWithTag(v10, 0x4D584650u);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x4D584650u);
  }
  return v7;
}
