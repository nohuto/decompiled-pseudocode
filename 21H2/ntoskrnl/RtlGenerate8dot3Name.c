/*
 * XREFs of RtlGenerate8dot3Name @ 0x1405EB450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     GetNextWchar @ 0x1405EB828 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1405EB900 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PGENERATE_NAME_CONTEXT v4; // rbx
  char v7; // r15
  unsigned int v8; // esi
  unsigned int NameLength; // edi
  __int16 NextWchar; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // edi
  char v18; // bp
  __int64 v19; // rax
  char v20; // cl
  __int16 v21; // r8
  unsigned int v22; // ecx
  PUNICODE_STRING v23; // r13
  _WORD *v24; // r14
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  ULONG ExtensionLength; // eax
  USHORT v29; // ax
  int v30; // r11d
  USHORT v31; // r9
  __int64 v32; // r8
  WCHAR *v33; // r10
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  USHORT v36; // ax
  USHORT v37; // r11
  __int16 v38; // dx
  __int64 v39; // rax
  WCHAR v40; // dx
  int v41; // eax
  int v42; // eax
  unsigned int v43; // r8d
  unsigned int v44; // edx
  unsigned int v45; // r9d
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-60h] BYREF
  PUNICODE_STRING v50; // [rsp+30h] [rbp-58h]
  _WORD v51[8]; // [rsp+38h] [rbp-50h] BYREF

  v50 = Name8dot3;
  v4 = Context;
  if ( !AllowExtendedCharacters || (v7 = 1, !(_BYTE)NlsMbOemCodePageTag) )
    v7 = 0;
  if ( !Context->NameLength )
  {
    v8 = -1;
    v48 = 0;
    if ( !Name->Length || (LOBYTE(Context) = 1, *Name->Buffer != 46) )
      LOBYTE(Context) = 0;
    NameLength = 0;
    while ( 1 )
    {
      LOBYTE(Name8dot3) = AllowExtendedCharacters;
      NextWchar = GetNextWchar(Name, &v48, Context, Name8dot3);
      if ( !NextWchar )
        break;
      LOBYTE(Context) = 0;
      if ( NextWchar == 46 )
        v8 = v48;
    }
    if ( v8 == Name->Length >> 1 )
      v8 = -1;
    v49 = v8;
    v48 = 0;
    for ( v4->NameLength = 0; ; ++v4->NameLength )
    {
      LOBYTE(Name8dot3) = AllowExtendedCharacters;
      LOBYTE(Context) = 1;
      v11 = GetNextWchar(Name, &v48, Context, Name8dot3);
      v12 = v11;
      if ( !v11 )
        break;
      if ( v48 >= v8 )
        break;
      Context = (PGENERATE_NAME_CONTEXT)v4->NameLength;
      if ( (unsigned __int8)Context >= 6u )
        break;
      if ( v7 )
      {
        if ( v11 <= 0x7Fu || (v41 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v12 + 1)) )
          v41 = 1;
        NameLength += v41;
        if ( NameLength > 6 )
          break;
      }
      v4->NameBuffer[(_QWORD)Context] = v12;
    }
    if ( !v7 )
      NameLength = v4->NameLength;
    if ( NameLength <= 2 )
    {
      v36 = RtlComputeLfnChecksum(Name);
      v4->Checksum = v36;
      v37 = v36;
      LODWORD(Context) = 0;
      do
      {
        v38 = 48;
        if ( (v37 & 0xFu) > 9 )
          v38 = 55;
        v39 = (unsigned int)Context + v4->NameLength;
        v40 = (v37 & 0xF) + v38;
        v37 >>= 4;
        Context = (PGENERATE_NAME_CONTEXT)(unsigned int)((_DWORD)Context + 1);
        v4->NameBuffer[v39] = v40;
      }
      while ( (unsigned int)Context < 4 );
      v4->NameLength += 4;
      v4->CheckSumInserted = 1;
    }
    if ( v8 == -1 )
    {
      v4->ExtensionLength = 0;
    }
    else
    {
      v4->ExtensionBuffer[0] = 46;
      v13 = 1;
      for ( v4->ExtensionLength = 1; ; ++v4->ExtensionLength )
      {
        LOBYTE(Name8dot3) = AllowExtendedCharacters;
        LOBYTE(Context) = 1;
        v14 = GetNextWchar(Name, &v49, Context, Name8dot3);
        v15 = v14;
        if ( !v14 )
          break;
        Context = (PGENERATE_NAME_CONTEXT)v4->ExtensionLength;
        if ( (unsigned int)Context >= 4 )
          goto LABEL_48;
        if ( v7 )
        {
          if ( v14 <= 0x7Fu || (v42 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v15 + 1)) )
            v42 = 1;
          v13 += v42;
          if ( v13 > 4 )
          {
LABEL_48:
            if ( FsRtlSafeExtensions )
              v4->ExtensionBuffer[(_DWORD)Context - 1] = 126;
            break;
          }
        }
        v4->ExtensionBuffer[(_QWORD)Context] = v15;
      }
    }
  }
  v16 = v4->LastIndexValue + 1;
  v4->LastIndexValue = v16;
  if ( v16 > 4 && !v4->CheckSumInserted )
  {
    v29 = RtlComputeLfnChecksum(Name);
    v4->Checksum = v29;
    v31 = v29;
    if ( 2 - v30 < (unsigned int)(6 - v30) )
    {
      v32 = 4LL;
      v33 = &v4->NameBuffer[2 - v30];
      do
      {
        v34 = 48;
        v35 = v31 & 0xF;
        if ( v35 > 9u )
          v34 = 55;
        v31 >>= 4;
        *v33++ = v35 + v34;
        --v32;
      }
      while ( v32 );
    }
    v4->LastIndexValue = 1;
    v4->NameLength = 6 - v30;
    v16 = 1;
    v4->CheckSumInserted = 1;
  }
  v17 = 1;
  v18 = 1;
  do
  {
    if ( !v16 )
      break;
    v19 = 8 - v17++;
    v20 = 0;
    v21 = v16 % 0xA + 48;
    v16 /= 0xAu;
    v51[v19] = v21;
    if ( v21 == 57 )
      v20 = v18;
    v18 = v20;
  }
  while ( v17 <= 7 );
  v22 = v4->NameLength;
  v23 = v50;
  v24 = &v51[8 - v17];
  *v24 = 126;
  if ( (unsigned __int8)(v22 - 1) > 0xBu )
  {
    v25 = 0;
  }
  else
  {
    memmove(v23->Buffer, v4->NameBuffer, 2LL * v22);
    v25 = 2 * v4->NameLength;
  }
  v23->Length = v25;
  memmove(&v23->Buffer[(unsigned __int64)v25 >> 1], v24, 2 * v17);
  v26 = v23->Length + 2 * v17;
  v23->Length = v26;
  ExtensionLength = v4->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v23->Buffer[(unsigned __int64)v26 >> 1], v4->ExtensionBuffer, 2 * ExtensionLength);
    v23->Length += 2 * LOWORD(v4->ExtensionLength);
  }
  if ( !v18 )
    return 0;
  v43 = v4->NameLength;
  if ( v7 )
  {
    v44 = 0;
    v45 = 0;
    if ( (_BYTE)v43 )
    {
      do
      {
        v46 = v4->NameBuffer[v44];
        if ( (unsigned int)v46 <= 0x7F || (v47 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v46 + 1)) )
          v47 = 1;
        v45 += v47;
        if ( v45 > 7 - v17 )
          break;
        ++v44;
      }
      while ( v44 < v43 );
    }
  }
  else
  {
    LOBYTE(v44) = v43 - 1;
  }
  v4->NameLength = v44;
  if ( (_BYTE)v44 )
    return 0;
  else
    return -1073740761;
}
