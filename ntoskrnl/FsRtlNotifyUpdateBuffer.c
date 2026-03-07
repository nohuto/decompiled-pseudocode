char __fastcall FsRtlNotifyUpdateBuffer(__int64 a1, int a2, PCCH *a3, PCCH *a4, PCCH *a5, char a6, int a7)
{
  unsigned int v10; // edi
  ULONG v11; // edx
  ULONG BytesInOemString; // eax
  __int64 v14; // r8
  const void **v15; // rdx
  __int64 v16; // rdi
  WCHAR *v17; // rcx
  ULONG v18; // ecx
  __int64 v19; // rdi
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = a2;
  v11 = a7 - 12;
  if ( a7 == 12 )
    return 0;
  *(_DWORD *)(a1 + 8) = v11;
  BytesInOemString = *(unsigned __int16 *)a3;
  if ( !a6 )
  {
    BytesInUnicodeString[0] = 0;
    if ( (_WORD)BytesInOemString )
    {
      RtlOemToUnicodeN((PWCH)(a1 + 12), v11, BytesInUnicodeString, a3[1], BytesInOemString);
      v18 = BytesInUnicodeString[0];
      *(_WORD *)(BytesInUnicodeString[0] + a1 + 12) = 92;
      v10 = v18 + 2;
    }
    v17 = (WCHAR *)(v10 + a1 + 12);
    if ( *(_WORD *)a3 )
    {
      RtlOemToUnicodeN(v17, *(_DWORD *)(a1 + 8), BytesInUnicodeString, a4[1], *(unsigned __int16 *)a4);
      if ( a5 )
      {
        v19 = BytesInUnicodeString[0] + v10;
        *(_WORD *)(v19 + a1 + 12) = 58;
        RtlOemToUnicodeN(
          (PWCH)(a1 + (unsigned int)v19 + 14LL),
          *(_DWORD *)(a1 + 8),
          BytesInUnicodeString,
          a5[1],
          *(unsigned __int16 *)a5);
      }
      return 1;
    }
    v15 = (const void **)a5;
    goto LABEL_14;
  }
  if ( (_WORD)BytesInOemString )
  {
    memmove((void *)(a1 + 12), a3[1], *(unsigned __int16 *)a3);
    v14 = *(unsigned __int16 *)a3;
    if ( *(unsigned int *)(a1 + 8) < (unsigned __int64)(v14 + 2) )
      return 0;
    *(_WORD *)(v14 + a1 + 12) = 92;
    v10 = *(unsigned __int16 *)a3 + 2;
  }
  memmove((void *)(v10 + a1 + 12), a4[1], *(unsigned __int16 *)a4);
  v15 = (const void **)a5;
  if ( a5 )
  {
    v16 = *(unsigned __int16 *)a4 + v10;
    *(_WORD *)(v16 + a1 + 12) = 58;
    v17 = (WCHAR *)((unsigned int)v16 + a1 + 14);
LABEL_14:
    memmove(v17, v15[1], *(unsigned __int16 *)v15);
  }
  return 1;
}
