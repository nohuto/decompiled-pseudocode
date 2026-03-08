/*
 * XREFs of CarCopyRuleViolationDetails @ 0x1405D1370
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyA @ 0x1403BD50C (RtlStringCchCopyA.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarCopyRuleViolationDetails(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  char *v5; // rsi
  wchar_t *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  size_t v10; // rbx
  wchar_t *Pool2; // rax
  __int64 v12; // rax
  char *v13; // rax

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 && a2 )
  {
    v7 = -1LL;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
    v8 = *(_QWORD *)(a2 + 56);
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      v10 = v9 + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, 2 * v10, 1316118851LL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v4 = -1073741801;
LABEL_21:
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 24) = 0LL;
        return (unsigned int)v4;
      }
      v4 = RtlStringCchCopyW(Pool2, v10, *(NTSTRSAFE_PCWSTR *)(a2 + 56));
      if ( v4 < 0 )
      {
LABEL_15:
        ExFreePoolWithTag(v6, 0x4E726143u);
LABEL_16:
        if ( v5 )
          ExFreePoolWithTag(v5, 0x4E726143u);
        goto LABEL_21;
      }
      *(_QWORD *)(a1 + 56) = v6;
    }
    v12 = *(_QWORD *)(a2 + 24);
    if ( v12 )
    {
      do
        ++v7;
      while ( *(_BYTE *)(v12 + v7) );
      v13 = (char *)ExAllocatePool2(64LL, v7 + 1, 1316118851LL);
      v5 = v13;
      if ( !v13 )
      {
        v4 = -1073741801;
        goto LABEL_14;
      }
      v4 = RtlStringCchCopyA(v13, v7 + 1, *(NTSTRSAFE_PCSTR *)(a2 + 24));
      if ( v4 < 0 )
      {
LABEL_14:
        if ( !v6 )
          goto LABEL_16;
        goto LABEL_15;
      }
      *(_QWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( a1 )
      goto LABEL_21;
  }
  return (unsigned int)v4;
}
