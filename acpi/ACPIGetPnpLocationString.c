/*
 * XREFs of ACPIGetPnpLocationString @ 0x1C0087670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     RtlStringCchPrintfExW @ 0x1C000B730 (RtlStringCchPrintfExW.c)
 *     AMLIGetNSObjectNameSegment @ 0x1C0048384 (AMLIGetNSObjectNameSegment.c)
 */

__int64 __fastcall ACPIGetPnpLocationString(__int64 *a1, wchar_t **a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, void **); // rax
  void *v9; // rcx
  unsigned int v10; // esi
  char v11; // r14
  int v12; // eax
  _WORD *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  wchar_t *Pool2; // rax
  wchar_t *v20; // rdi
  wchar_t *v21; // rbx
  NTSTATUS v22; // eax
  void *Src; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h] BYREF
  PUCHAR SourceCharacter; // [rsp+50h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-28h] BYREF
  _WORD v28[8]; // [rsp+60h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v25 = 0;
  SourceCharacter = 0LL;
  v5 = *(_QWORD *)(v4 + 760);
  if ( v5 )
  {
    v25 = AMLIGetNSObjectNameSegment(v5);
    v6 = v28;
    SourceCharacter = (PUCHAR)&v25;
    v7 = 4LL;
    do
    {
      *v6++ = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      --v7;
    }
    while ( v7 );
    v28[4] = 0;
  }
  else
  {
    v28[0] = 0;
  }
  v8 = (__int64 (__fastcall *)(__int64, void **))a1[5];
  v9 = 0LL;
  Src = 0LL;
  v10 = 0;
  v11 = 0;
  if ( v8 )
  {
    v12 = v8(a1[2], &Src);
    v9 = Src;
    if ( v12 == 288 )
    {
      v11 = 1;
    }
    else
    {
      if ( v12 < 0 )
        v9 = 0LL;
      Src = v9;
    }
    if ( v9 )
    {
      for ( i = v9; *i; i += v15 + 1 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( i[v14] );
        v10 += v14 + 1;
        v15 = -1LL;
        do
          ++v15;
        while ( i[v15] );
      }
      ++v10;
    }
  }
  v16 = v10;
  if ( v28[0] )
    v16 = v10 + 12;
  if ( v16 )
  {
    v18 = v16 + 1;
    if ( !v11 )
      v18 = v16;
    if ( v28[0] )
      ++v18;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v18, 1399874369LL);
    v9 = Src;
    v20 = Pool2;
    if ( Pool2 )
    {
      v21 = Pool2;
      if ( Src )
      {
        if ( v11 )
        {
          v21 = Pool2 + 1;
          *Pool2 = 64;
          v9 = Src;
        }
        memmove(v21, v9, 2LL * v10);
        v9 = Src;
        v21 += v10 - 1;
      }
      if ( !v28[0]
        || (*v21 = 33,
            v22 = RtlStringCchPrintfExW(v21 + 1, 0xCuLL, 0LL, &pcchRemaining, 0x200u, L"ACPI(%ws)", v28),
            v9 = Src,
            v17 = v22,
            v22 >= 0) )
      {
        *a2 = v20;
        v17 = *(_QWORD *)(v4 + 792) == 0LL ? 0x120 : 0;
      }
    }
    else
    {
      v17 = -1073741670;
    }
  }
  else
  {
    v17 = -1073741637;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v17;
}
