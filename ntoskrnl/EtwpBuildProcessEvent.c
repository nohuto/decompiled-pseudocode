/*
 * XREFs of EtwpBuildProcessEvent @ 0x14071DE28
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     EtwpTraceProcessRundown @ 0x14080E0E4 (EtwpTraceProcessRundown.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     EtwpQueryProcessCommandLine @ 0x14071DB40 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14071DD1C (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14071DD5C (EtwpQueryTokenPackageInfo.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        __int64 a1,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        int *a8,
        PSTRING DestinationString,
        unsigned __int16 *a10,
        PVOID *a11)
{
  PSTRING v11; // r15
  PVOID *v14; // r13
  int v15; // eax
  int *v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rsi
  ULONG_PTR v22; // rax
  int *v23; // r12
  void *v24; // rdi
  NTSTATUS v25; // ebx
  __int64 *v26; // rdx
  int v27; // ecx
  char *v28; // rbx
  __int64 Length; // rdi
  char v30; // di
  unsigned __int16 *v31; // rbx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ebp
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v41; // rdx
  char *Buffer; // rcx
  char *v43; // rax
  __int16 v44; // ax
  __int64 v45; // rcx
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v47; // [rsp+68h] [rbp+10h]
  char v48; // [rsp+70h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v11 = DestinationString;
  TokenInformation = 0LL;
  RtlInitAnsiString(DestinationString, 0LL);
  v14 = a11;
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 1088);
  v15 = *(_DWORD *)(a1 + 1344);
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx(a1);
  v16 = (int *)(a4 + 32);
  v17 = 4;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 2004);
  v18 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v18;
  if ( *(_QWORD *)(a1 + 1408) && ((v44 = *(_WORD *)(a1 + 2412), v44 == 332) || v44 == 452) )
  {
    *v16 = 2;
    v19 = 6;
  }
  else
  {
    v19 = 4;
  }
  v20 = *v16;
  v21 = a6;
  if ( (*(_BYTE *)(a1 + 2170) & 7) != 0 )
    v20 = v19;
  *v16 = v20;
  *(_QWORD *)v21 = a4;
  *(_QWORD *)(v21 + 8) = 36LL;
  v22 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v23 = a8;
  v24 = (void *)v22;
  EtwpQueryTokenPackageInfo(v22, (__int64)a8, (_DWORD *)(a4 + 32));
  v25 = SeQueryInformationToken(v24, TokenUser, &TokenInformation);
  ObFastDereferenceObject((signed __int64 *)(a1 + 1208), (unsigned __int64)v24, 0x746C6644u);
  if ( v25 < 0 )
  {
    v27 = 4;
    TokenInformation = &EtwpNull;
    v26 = &EtwpNull;
  }
  else
  {
    v26 = (__int64 *)TokenInformation;
    *v14 = TokenInformation;
    v27 = 4 * *(unsigned __int8 *)(*v26 + 1) + 24;
  }
  *(_QWORD *)(v21 + 16) = v26;
  *(_DWORD *)(v21 + 28) = 0;
  v28 = (char *)(a1 + 1448);
  Length = -1LL;
  *(_DWORD *)(v21 + 24) = v27;
  do
    ++Length;
  while ( v28[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v41 = *(const UNICODE_STRING **)(a1 + 1472);
    if ( v41 )
    {
      if ( v41->Length && RtlUnicodeStringToAnsiString(v11, v41, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        v28 = &Buffer[Length];
        while ( v28 != Buffer )
        {
          v43 = v28--;
          if ( *v28 == 92 )
          {
            v28 = v43;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v28 + Length;
      }
    }
  }
  *(_DWORD *)(v21 + 40) = Length;
  v30 = v48;
  *(_QWORD *)(v21 + 32) = v28;
  *(_DWORD *)(v21 + 44) = 0;
  *(_QWORD *)(v21 + 48) = &EtwpNull;
  *(_QWORD *)(v21 + 56) = 1LL;
  if ( v30 )
    EtwpQueryProcessOtherInfo(a1, (__int64)a5);
  else
    *a5 = 0LL;
  v31 = a10;
  *a10 = 0;
  if ( *(_QWORD *)(a1 + 1360) )
  {
    if ( v30 )
    {
      EtwpQueryProcessCommandLine(a1, (__int64)v31);
      v32 = *v31;
      if ( (_WORD)v32 )
      {
        v17 = 5;
        *(_QWORD *)(v21 + 64) = *((_QWORD *)v31 + 1);
        *(_DWORD *)(v21 + 72) = v32;
        *(_DWORD *)(v21 + 76) = 0;
      }
    }
  }
  v33 = 2LL * v17;
  v34 = v17 + 1;
  v35 = v17 + 2;
  v34 *= 2LL;
  *(_QWORD *)(v21 + 8 * v33) = &EtwpNull;
  *(_QWORD *)(v21 + 8 * v33 + 8) = 2LL;
  v36 = *v23;
  *(_QWORD *)(v21 + 8 * v34) = v23 + 4;
  *(_DWORD *)(v21 + 8 * v34 + 8) = v36;
  *(_DWORD *)(v21 + 8 * v34 + 12) = 0;
  v37 = v23[2];
  v38 = v35;
  v39 = v35 + 1;
  v38 *= 2LL;
  *(_QWORD *)(v21 + 8 * v38) = v23 + 68;
  *(_QWORD *)(v21 + 8 * v38 + 8) = v37;
  if ( v47 == 807 )
  {
    v45 = 2LL * v39++;
    *(_QWORD *)(v21 + 8 * v45) = a1 + 2112;
    *(_QWORD *)(v21 + 8 * v45 + 8) = 8LL;
  }
  result = a7;
  *a7 = v39;
  return result;
}
