/*
 * XREFs of LocalpGetStringForCondition @ 0x1409D3684
 * Callers:
 *     LocalGetAceCondition @ 0x140750740 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x1409D00DC (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x1409D0F50 (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x1409D0F74 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1409D117C (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1409D3CA0 (ULongAddStringSize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        unsigned __int8 *a1,
        unsigned int a2,
        wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // r14d
  unsigned __int8 *v10; // r13
  __int64 v11; // r12
  unsigned int PrintableAttributeName; // ebx
  int v13; // r15d
  __int64 v14; // rsi
  int v15; // r9d
  char *v16; // rdi
  bool v17; // zf
  bool v18; // zf
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  int v23; // ecx
  PVOID *v24; // rcx
  int OperatorIndexByToken; // eax
  __int64 v26; // r10
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned int v29; // eax
  wchar_t *v30; // rsi
  size_t v31; // r14
  wchar_t *v32; // rdi
  NTSTATUS v33; // eax
  char v34; // al
  __int64 v35; // rax
  PVOID *v36; // rcx
  PVOID v37; // rsi
  void *v38; // r14
  unsigned int v39; // r12d
  wchar_t *v40; // rdi
  PVOID *v41; // rcx
  __int64 i; // rdi
  PVOID v43; // rcx
  wchar_t *v45; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v46; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h]
  unsigned int v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *Str1; // [rsp+88h] [rbp-78h] BYREF
  PVOID v56[256]; // [rsp+90h] [rbp-70h] BYREF

  v53 = a5;
  v9 = a2;
  v10 = a1;
  v52 = a6;
  v11 = 0LL;
  PrintableAttributeName = 0;
  Str1 = a3;
  v50 = a2;
  P = a1;
  v51 = a7;
  v45 = 0LL;
  memset(v56, 0, sizeof(v56));
  v47 = 0;
  v13 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *(_DWORD *)v10 != 2020897377 )
    return 805LL;
  LODWORD(v14) = 4;
  v49 = 0LL;
  v48 = 4;
  do
  {
    v15 = 1336;
    if ( v11 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_102;
    }
    v16 = (char *)&v10[(unsigned int)v14];
    v46 = *v16;
    if ( v46 > 0x8Au )
    {
      if ( v46 > 0xF8u )
      {
        if ( v46 != 249 && v46 != 250 && (unsigned int)v46 - 251 > 1 )
          goto LABEL_26;
      }
      else if ( v46 != 248 )
      {
        if ( v46 > 0x91u )
        {
          if ( v46 == 146 || v46 == 147 )
            goto LABEL_45;
          v22 = v46 - 160;
          v21 = v46 == 160;
LABEL_42:
          if ( !v21 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( (unsigned int)(v23 - 1) > 1 )
                goto LABEL_26;
            }
          }
LABEL_45:
          if ( (unsigned __int8)(v46 + 96) <= 1u )
          {
            if ( v11 < 2 )
              goto LABEL_26;
            PrintableAttributeName = EncloseSubCondition(&v56[v13 - 1]);
            if ( PrintableAttributeName )
              goto LABEL_102;
            v24 = &v56[v13 - 2];
          }
          else
          {
            if ( v46 != 0xA2 )
            {
LABEL_53:
              OperatorIndexByToken = GetOperatorIndexByToken(*v16);
              if ( OperatorIndexByToken < 0 )
                goto LABEL_26;
              v27 = 3LL * OperatorIndexByToken;
              v28 = -1LL;
              do
                ++v28;
              while ( *(_WORD *)(*(_QWORD *)(v26 + 8 * v27) + 2 * v28) );
              v29 = 2 * v28;
              LODWORD(v45) = v29;
              if ( *(_BYTE *)(v26 + 8 * v27 + 16) )
              {
                if ( !v11 )
                  goto LABEL_26;
                v30 = (wchar_t *)v56[v11 - 1];
                if ( (int)ULongAddStringSize(v29, v30, &v45) < 0 )
                  goto LABEL_97;
                v31 = (unsigned int)((_DWORD)v45 + 8);
                v32 = (wchar_t *)SddlpAlloc(v31);
                if ( !v32 )
                  goto LABEL_96;
                if ( v46 == 0xA2 )
                {
                  v33 = RtlStringCchPrintfW(v32, v31 >> 1, L"(%ls%ls)", (&Operators)[v27], v30);
                }
                else
                {
                  v34 = *((_BYTE *)&Operators + 8 * v27 + 8);
                  if ( (v34 == -121 || v34 == -115)
                    && (!wcsnicmp(v30, L"@USER.", 6uLL)
                     || !wcsnicmp(v30, L"@DEVICE.", 8uLL)
                     || !wcsnicmp(v30, L"@TOKEN.", 7uLL)) )
                  {
                    PrintableAttributeName = 1336;
                    goto LABEL_99;
                  }
                  v33 = RtlStringCchPrintfW(v32, v31 >> 1, L"(%ls %ls)", (&Operators)[v27], v30);
                }
                if ( v33 < 0 )
                  goto LABEL_94;
                if ( v30 )
                  ExFreePoolWithTag(v30, 0);
                v35 = 0LL;
                v36 = &v56[v11 - 1];
              }
              else
              {
                if ( v11 < 2 )
                  goto LABEL_26;
                v37 = v56[v11 - 1];
                if ( (int)ULongAddStringSize(v29, v37, &v45) < 0
                  || (v38 = *(&P + v11), (int)ULongAddStringSize((unsigned int)v45, v38, &v45) < 0) )
                {
LABEL_97:
                  PrintableAttributeName = 534;
                  goto LABEL_102;
                }
                LODWORD(v45) = (_DWORD)v45 + 10;
                v39 = (unsigned int)v45;
                v32 = (wchar_t *)SddlpAlloc((unsigned int)v45);
                if ( !v32 )
                {
LABEL_96:
                  PrintableAttributeName = 8;
                  goto LABEL_102;
                }
                if ( RtlStringCchPrintfW(v32, (unsigned __int64)v39 >> 1, L"(%ls %ls %ls)", v38, (&Operators)[v27], v37) < 0 )
                {
LABEL_94:
                  PrintableAttributeName = 50;
                  goto LABEL_99;
                }
                if ( v37 )
                  ExFreePoolWithTag(v37, 0);
                if ( v38 )
                  ExFreePoolWithTag(v38, 0);
                v11 = v49;
                v35 = -1LL;
                --v13;
                v36 = &P + v49;
              }
              LODWORD(v14) = v48;
              v11 += v35;
              v9 = v50;
              v45 = 0LL;
              v10 = (unsigned __int8 *)P;
              *v36 = v32;
              v47 = 1;
              goto LABEL_89;
            }
            if ( v11 < 1 )
              goto LABEL_26;
            v24 = &v56[v13 - 1];
          }
          PrintableAttributeName = EncloseSubCondition(v24);
          if ( PrintableAttributeName )
            goto LABEL_102;
          goto LABEL_53;
        }
        if ( v46 == 145 )
          goto LABEL_45;
        v19 = v46 - 139;
        v18 = v46 == 139;
LABEL_31:
        if ( v18 )
          goto LABEL_45;
        v20 = v19 - 1;
        if ( !v20 )
          goto LABEL_45;
        v22 = v20 - 1;
        v21 = v22 == 0;
        goto LABEL_42;
      }
      PrintableAttributeName = GetPrintableAttributeName(
                                 (__int64)&v10[(unsigned int)v14],
                                 v9 - (unsigned int)v14,
                                 v46,
                                 &v45,
                                 &v47);
      if ( PrintableAttributeName )
      {
LABEL_98:
        v32 = v45;
LABEL_99:
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
        goto LABEL_102;
      }
      v56[v11] = v45;
LABEL_88:
      ++v13;
      v45 = 0LL;
      ++v11;
LABEL_89:
      v49 = v11;
      goto LABEL_90;
    }
    if ( v46 == 138 )
      goto LABEL_45;
    if ( v46 > 0x80u )
    {
      if ( v46 == 129 || v46 == 130 || v46 == 131 )
        goto LABEL_45;
      v19 = v46 - 132;
      v18 = v46 == 132;
      goto LABEL_31;
    }
    if ( v46 == 128 )
      goto LABEL_45;
    if ( v46 )
    {
      if ( v46 != 1 && v46 != 2 && v46 != 3 && v46 != 4 && v46 != 16 && v46 != 24 && (unsigned int)v46 - 80 > 1 )
        goto LABEL_26;
      PrintableAttributeName = GetPrintableOperandValue(
                                 &v10[(unsigned int)v14],
                                 v9 - (unsigned int)v14,
                                 (__int64)&v45,
                                 &v47,
                                 v53,
                                 v52,
                                 v51,
                                 a8);
      if ( PrintableAttributeName )
        goto LABEL_98;
      v56[v11] = v45;
      goto LABEL_88;
    }
    while ( 1 )
    {
      v14 = (unsigned int)(v14 + 1);
      v17 = (_DWORD)v14 == v9;
      if ( (unsigned int)v14 >= v9 )
        break;
      if ( v10[v14] )
      {
        v17 = (_DWORD)v14 == v9;
        break;
      }
    }
    if ( !v17 )
    {
LABEL_26:
      PrintableAttributeName = v15;
      goto LABEL_102;
    }
LABEL_90:
    LODWORD(v14) = v47 + v14;
    v48 = v14;
  }
  while ( (unsigned int)v14 < v9 );
  if ( v13 == 1 )
  {
    v40 = Str1;
    v41 = (PVOID *)Str1;
    *(PVOID *)Str1 = v56[0];
    PrintableAttributeName = EncloseSubCondition(v41);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *(_QWORD *)v40 = 0LL;
    goto LABEL_105;
  }
LABEL_102:
  if ( !v13 )
    return PrintableAttributeName;
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
LABEL_105:
  for ( i = v13; i; --i )
  {
    v43 = v56[i - 1];
    if ( v43 )
      ExFreePoolWithTag(v43, 0);
  }
  return PrintableAttributeName;
}
