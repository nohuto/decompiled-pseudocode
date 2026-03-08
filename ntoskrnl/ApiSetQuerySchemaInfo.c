/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x1402F3630
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1407848B0 (RtlIsApiSetImplemented.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1402F3974 (ApiSetpSearchForApiSet.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, char *a3, bool *a4)
{
  unsigned int v4; // ebx
  char v7; // si
  bool v10; // bp
  char v11; // dl
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  wchar_t *v14; // r11
  _WORD *v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned __int16 *v20; // r9
  int v21; // r10d
  int v22; // edx
  __int64 v23; // rax
  unsigned int *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  _WORD *v28; // r8
  unsigned __int16 *v29; // r8
  int v30; // r9d
  int v32; // r11d
  UNICODE_STRING String1; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v7 = 0;
  v10 = 0;
  v11 = 0;
  v12 = *a2;
  if ( (unsigned int)v12 >= 8 )
  {
    v13 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v13 == 0x2D004900500041LL || v13 == 0x2D005400580045LL )
      v11 = 1;
  }
  v14 = (wchar_t *)*((_QWORD *)a2 + 1);
  if ( !v11 )
  {
    *(_DWORD *)(&String2.MaximumLength + 1) = 0;
    *(_QWORD *)&String1.Length = 0LL;
    String1.Buffer = v14;
    if ( (unsigned __int16)v12 < 0x14u )
    {
      String1.Length = v12;
    }
    else
    {
      LOWORD(v12) = 20;
      String1.Length = 20;
    }
    String1.MaximumLength = v12;
    String2.Buffer = L"SchemaExt-";
    *(_DWORD *)&String2.Length = 1310740;
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      if ( ApiSetpSearchForApiSet(a1, *((_QWORD *)a2 + 1), *a2 >> 1) )
        v7 = 1;
      v10 = v7;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  v15 = (wchar_t *)((char *)v14 + v12);
  v16 = *a2;
  if ( (unsigned int)v12 > 1 )
  {
    do
    {
      v16 -= 2;
      --v15;
    }
    while ( *v15 != 45 && v16 > 1 );
  }
  v17 = (unsigned __int16)v16;
  LOWORD(v17) = (unsigned __int16)v16 >> 1;
  if ( !((unsigned __int16)v16 >> 1) )
    return (unsigned int)-1073741811;
  v18 = 0;
  v19 = ((unsigned int)v12 - (unsigned __int16)v16) >> 1;
  if ( !v19 )
    return (unsigned int)-1073741811;
  if ( *(wchar_t *)((char *)v14 + (unsigned __int16)v16) != 45 )
    return (unsigned int)-1073741811;
  v20 = (wchar_t *)((char *)v14 + (unsigned __int16)v16 + 2);
  v21 = v19 - 1;
  if ( v19 == 1 )
    return (unsigned int)-1073741811;
  if ( (int)(v19 - 1) > 0 )
  {
    do
    {
      v22 = *v20;
      if ( (unsigned __int16)(v22 - 48) > 9u )
        return (unsigned int)-1073741811;
      ++v20;
      --v21;
      v18 = v22 + 2 * (5 * v18 - 24);
    }
    while ( v21 > 0 );
  }
  v23 = ApiSetpSearchForApiSet(a1, v14, v17);
  v24 = (unsigned int *)v23;
  if ( v23 )
  {
    v25 = *(_DWORD *)(v23 + 12);
    v26 = 0;
    v27 = (v24[2] - v25) >> 1;
    if ( v27 )
    {
      v28 = (_WORD *)(a1 + v24[1] + v25);
      if ( *v28 == 45 )
      {
        v29 = v28 + 1;
        v30 = v27 - 1;
        if ( v30 )
        {
          while ( v30 > 0 )
          {
            v32 = *v29;
            if ( (unsigned __int16)(v32 - 48) > 9u )
              goto LABEL_23;
            ++v29;
            --v30;
            v26 = v32 + 2 * (5 * v26 - 24);
          }
          if ( v18 <= v26 )
          {
            v7 = 1;
            if ( v24[5] )
              v10 = *(_DWORD *)(v24[4] + a1 + 16) != 0;
          }
        }
      }
    }
  }
LABEL_23:
  *a3 = v7;
  *a4 = v10;
  return v4;
}
