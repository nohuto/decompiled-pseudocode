/*
 * XREFs of RtlGenerate8dot3Name @ 0x1407684A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpIsUtf8Process @ 0x1406EA7A0 (RtlpIsUtf8Process.c)
 *     GetNextWchar @ 0x140768840 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x14076891C (RtlComputeLfnChecksum.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  NTSTATUS v5; // ebx
  bool v6; // si
  struct _LIST_ENTRY *v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v12; // r12
  unsigned int v13; // ebp
  __int16 NextWchar; // ax
  unsigned int v15; // esi
  bool v16; // zf
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 NameLength; // rdx
  unsigned int v20; // esi
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int64 ExtensionLength; // rdx
  ULONG v24; // r9d
  unsigned int v25; // esi
  char v26; // r13
  __int64 v27; // rax
  char v28; // cl
  __int16 v29; // r8
  unsigned int v30; // ecx
  PUNICODE_STRING v31; // r15
  _WORD *v32; // r14
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // cx
  ULONG v35; // eax
  USHORT v37; // ax
  int v38; // r10d
  USHORT v39; // r11
  __int64 v40; // r8
  WCHAR *v41; // r9
  __int16 v42; // ax
  unsigned __int16 v43; // cx
  int v44; // eax
  USHORT v45; // ax
  USHORT v46; // r10
  __int16 v47; // dx
  __int64 v48; // rax
  WCHAR v49; // dx
  int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // ecx
  unsigned int v53; // r8d
  __int64 v54; // r9
  int v55; // eax
  signed __int32 v56[9]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v57; // [rsp+24h] [rbp-74h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+28h] [rbp-70h]
  unsigned int v59; // [rsp+30h] [rbp-68h] BYREF
  PUNICODE_STRING v60; // [rsp+38h] [rbp-60h]
  _WORD v61[8]; // [rsp+40h] [rbp-58h] BYREF

  v60 = Name8dot3;
  v5 = 0;
  v6 = 0;
  Flink = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v56, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = WORD2(CurrentServerSiloGlobals[71].Flink) != 0;
    Flink = CurrentServerSiloGlobals[73].Flink;
  }
  if ( !AllowExtendedCharacters || (v12 = 1, !v6) )
    v12 = 0;
  if ( !Context->NameLength )
  {
    v13 = -1;
    v57 = 0;
    if ( !Name->Length || (LOBYTE(v9) = 1, *Name->Buffer != 46) )
      LOBYTE(v9) = 0;
    while ( 1 )
    {
      LOBYTE(v10) = AllowExtendedCharacters;
      NextWchar = GetNextWchar(Name, &v57, v9, v10);
      if ( !NextWchar )
        break;
      LOBYTE(v9) = 0;
      if ( NextWchar == 46 )
        v13 = v57;
    }
    v15 = 0;
    v16 = v13 == Name->Length >> 1;
    v57 = 0;
    Context->NameLength = 0;
    if ( v16 )
      v13 = -1;
    v59 = v13;
    while ( 1 )
    {
      LOBYTE(v10) = AllowExtendedCharacters;
      LOBYTE(v9) = 1;
      v17 = GetNextWchar(Name, &v57, v9, v10);
      v18 = v17;
      if ( !v17 )
        break;
      if ( v57 >= v13 )
        break;
      NameLength = Context->NameLength;
      if ( (unsigned __int8)NameLength >= 6u )
        break;
      if ( v12 )
      {
        if ( v17 <= 0x7Fu || (v9 = Flink, v44 = 2, !*((_BYTE *)&Flink->Flink + 2 * v18 + 1)) )
          v44 = 1;
        v15 += v44;
        if ( v15 > 6 )
          goto LABEL_22;
      }
      Context->NameBuffer[NameLength] = v18;
      ++Context->NameLength;
    }
    if ( !v12 )
      v15 = Context->NameLength;
LABEL_22:
    if ( v15 <= 2 )
    {
      v45 = RtlComputeLfnChecksum(Name);
      Context->Checksum = v45;
      v46 = v45;
      LODWORD(v9) = 0;
      do
      {
        v47 = 48;
        if ( (v46 & 0xFu) > 9 )
          v47 = 55;
        v48 = (unsigned int)v9 + Context->NameLength;
        v49 = (v46 & 0xF) + v47;
        v46 >>= 4;
        v9 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v9 + 1);
        Context->NameBuffer[v48] = v49;
      }
      while ( (unsigned int)v9 < 4 );
      Context->NameLength += 4;
      Context->ChecksumInserted = 1;
    }
    if ( v13 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v20 = 1;
      for ( Context->ExtensionLength = 1; ; ++Context->ExtensionLength )
      {
        LOBYTE(v10) = AllowExtendedCharacters;
        LOBYTE(v9) = 1;
        v21 = GetNextWchar(Name, &v59, v9, v10);
        v22 = v21;
        if ( !v21 )
          break;
        ExtensionLength = Context->ExtensionLength;
        if ( (unsigned int)ExtensionLength >= 4 )
          goto LABEL_42;
        if ( v12 )
        {
          if ( v21 <= 0x7Fu || (v9 = Flink, v50 = 2, !*((_BYTE *)&Flink->Flink + 2 * v22 + 1)) )
            v50 = 1;
          v20 += v50;
          if ( v20 > 4 )
          {
LABEL_42:
            if ( FsRtlSafeExtensions )
              Context->ExtensionBuffer[(unsigned int)(ExtensionLength - 1)] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[ExtensionLength] = v22;
      }
    }
  }
  v24 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v24;
  if ( v24 > 4 && !Context->ChecksumInserted )
  {
    v37 = RtlComputeLfnChecksum(Name);
    Context->Checksum = v37;
    v39 = v37;
    if ( 2 - v38 < (unsigned int)(6 - v38) )
    {
      v40 = 4LL;
      v41 = &Context->NameBuffer[2 - v38];
      do
      {
        v42 = 48;
        v43 = v39 & 0xF;
        if ( v43 > 9u )
          v42 = 55;
        v39 >>= 4;
        *v41++ = v43 + v42;
        --v40;
      }
      while ( v40 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v38;
    v24 = 1;
    Context->ChecksumInserted = 1;
  }
  v25 = 1;
  v26 = 1;
  do
  {
    if ( !v24 )
      break;
    v27 = 8 - v25++;
    v28 = 0;
    v29 = v24 % 0xA + 48;
    v24 /= 0xAu;
    v61[v27] = v29;
    if ( v29 == 57 )
      v28 = v26;
    v26 = v28;
  }
  while ( v25 <= 7 );
  v30 = Context->NameLength;
  v31 = v60;
  v32 = &v61[8 - v25];
  *v32 = 126;
  if ( (unsigned __int8)(v30 - 1) > 0xBu )
  {
    v33 = 0;
  }
  else
  {
    memmove(v31->Buffer, Context->NameBuffer, 2LL * v30);
    v33 = 2 * Context->NameLength;
  }
  v31->Length = v33;
  memmove(&v31->Buffer[(unsigned __int64)v33 >> 1], v32, 2 * v25);
  v34 = v31->Length + 2 * v25;
  v31->Length = v34;
  v35 = Context->ExtensionLength;
  if ( v35 )
  {
    memmove(&v31->Buffer[(unsigned __int64)v34 >> 1], Context->ExtensionBuffer, 2 * v35);
    v31->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v26 )
    return 0;
  v51 = Context->NameLength;
  if ( v12 )
  {
    v52 = 0;
    v53 = 0;
    if ( (_BYTE)v51 )
    {
      do
      {
        v54 = Context->NameBuffer[v52];
        if ( (unsigned int)v54 <= 0x7F || (v55 = 2, !*((_BYTE *)&Flink->Flink + 2 * v54 + 1)) )
          v55 = 1;
        v53 += v55;
        if ( v53 > 7 - v25 )
          break;
        ++v52;
      }
      while ( v52 < v51 );
    }
  }
  else
  {
    LOBYTE(v52) = v51 - 1;
  }
  Context->NameLength = v52;
  if ( !(_BYTE)v52 )
    return -1073740761;
  return v5;
}
