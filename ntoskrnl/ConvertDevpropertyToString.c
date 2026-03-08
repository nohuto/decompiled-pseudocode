/*
 * XREFs of ConvertDevpropertyToString @ 0x140A6B5A0
 * Callers:
 *     ExpressionConvertToString @ 0x140A6BCC8 (ExpressionConvertToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1402986C0 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 *     ConvertDevpropcompkeyToString @ 0x140A6B464 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall ConvertDevpropertyToString(__int64 a1, unsigned int a2, wchar_t *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r14
  wchar_t *v5; // r13
  __int64 v6; // r15
  size_t v7; // rsi
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  const wchar_t *v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // r12d
  __int16 *v33; // rbx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  NTSTATUS v38; // eax
  bool v39; // zf
  double v40; // xmm0_8
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  const wchar_t *v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v56; // [rsp+38h] [rbp-69h]
  __int64 v57; // [rsp+40h] [rbp-61h]
  __int64 v58; // [rsp+48h] [rbp-59h]
  __int64 v59; // [rsp+50h] [rbp-51h]
  __int64 v60; // [rsp+58h] [rbp-49h]
  __int64 v61; // [rsp+60h] [rbp-41h]
  __int64 v62; // [rsp+68h] [rbp-39h]
  __int64 v63; // [rsp+70h] [rbp-31h]
  __int64 v64; // [rsp+78h] [rbp-29h]
  __int64 v65; // [rsp+80h] [rbp-21h]
  __int64 v66; // [rsp+88h] [rbp-19h]
  size_t cbDest; // [rsp+98h] [rbp-9h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v69; // [rsp+A8h] [rbp+7h]
  unsigned __int64 v72; // [rsp+118h] [rbp+77h] BYREF
  unsigned int *v73; // [rsp+120h] [rbp+7Fh]

  v73 = a4;
  v4 = a2;
  v5 = a3;
  LODWORD(v72) = 0;
  v6 = a1;
  if ( a2 >= 2 )
    *a3 = 0;
  ppszDestEnd = a3;
  cbDest = a2;
  v7 = a2;
  v8 = ConvertDevpropcompkeyToString(a1, a3, a2, (unsigned int *)&v72);
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741789 )
  {
    v8 = 0;
    v9 = (unsigned int)v72 - 2LL;
    if ( v4 >= v9 )
    {
      v7 = 2LL - (unsigned int)v72 + v4;
      cbDest = v7;
      v5 += v9 >> 1;
      ppszDestEnd = v5;
    }
    v10 = *(_DWORD *)(v6 + 32);
    if ( v10 > 0x1003 )
    {
      if ( v10 == 4109 )
      {
        v15 = L"GUID_ARRAY";
      }
      else
      {
        if ( v10 != 8210 )
          return (unsigned int)-1073741811;
        v15 = L"STRING_LIST";
      }
    }
    else if ( v10 == 4099 )
    {
      v15 = L"BINARY";
    }
    else if ( v10 > 0xD )
    {
      if ( v10 > 0x14 )
      {
        v26 = v10 - 21;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  return (unsigned int)-1073741811;
                v15 = L"STRING_INDIRECT";
              }
              else
              {
                v15 = L"NTSTATUS";
              }
            }
            else
            {
              v15 = L"ERROR";
            }
          }
          else
          {
            v15 = L"DEVPROPTYPE";
          }
        }
        else
        {
          v15 = L"DEVPROPKEY";
        }
      }
      else if ( v10 == 20 )
      {
        v15 = L"SECURITY_DESCRIPTOR_STRING";
      }
      else
      {
        v21 = v10 - 14;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 != 1 )
                    return (unsigned int)-1073741811;
                  v15 = L"SECURITY_DESCRIPTOR";
                }
                else
                {
                  v15 = L"STRING";
                }
              }
              else
              {
                v15 = L"BOOLEAN";
              }
            }
            else
            {
              v15 = L"FILETIME";
            }
          }
          else
          {
            v15 = L"DATE";
          }
        }
        else
        {
          v15 = L"CURRENCY";
        }
      }
    }
    else if ( v10 == 13 )
    {
      v15 = L"GUID";
    }
    else if ( v10 > 6 )
    {
      v16 = v10 - 7;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 != 1 )
                  return (unsigned int)-1073741811;
                v15 = L"DECIMAL";
              }
              else
              {
                v15 = L"DOUBLE";
              }
            }
            else
            {
              v15 = L"FLOAT";
            }
          }
          else
          {
            v15 = L"UINT64";
          }
        }
        else
        {
          v15 = L"INT64";
        }
      }
      else
      {
        v15 = L"UINT32";
      }
    }
    else if ( v10 == 6 )
    {
      v15 = L"INT32";
    }
    else if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 != 1 )
                return (unsigned int)-1073741811;
              v15 = L"UINT16";
            }
            else
            {
              v15 = L"INT16";
            }
          }
          else
          {
            v15 = L"BYTE";
          }
        }
        else
        {
          v15 = L"SBYTE";
        }
      }
      else
      {
        v15 = L"NULL";
      }
    }
    else
    {
      v15 = L"EMPTY";
    }
    v30 = -1LL;
    v31 = -1LL;
    do
      ++v31;
    while ( v15[v31] );
    v32 = v72 + 2 * v31;
    if ( v32 <= (unsigned int)v4 )
    {
      v8 = RtlStringCbCopyExW(v5, v7, v15, &ppszDestEnd, &cbDest, 0x400u);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v5 = ppszDestEnd;
      v7 = cbDest;
    }
    if ( !*(_DWORD *)(v6 + 36) )
      goto LABEL_150;
    v33 = *(__int16 **)(v6 + 40);
    if ( !v33 )
      goto LABEL_150;
    v34 = *(_DWORD *)(v6 + 32);
    if ( v34 > 0x1003 )
    {
      if ( v34 != 4109 )
      {
        if ( v34 == 8210 )
        {
          while ( *v33 )
          {
            v51 = -1LL;
            do
              ++v51;
            while ( v33[v51] );
            v32 += 2 * v51 + 4;
            if ( v32 <= (unsigned int)v4 )
            {
              v8 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"[%s]", v33);
              if ( v8 < 0 )
                return (unsigned int)v8;
              v5 = ppszDestEnd;
            }
            v52 = -1LL;
            do
              ++v52;
            while ( v33[v52] );
            v7 = cbDest;
            v33 += v52 + 1;
          }
          goto LABEL_150;
        }
        goto LABEL_134;
      }
    }
    else
    {
      if ( v34 == 4099 )
        goto LABEL_150;
      if ( v34 > 0xD )
      {
        if ( v34 > 0x14 )
        {
          v47 = v34 - 21;
          if ( !v47 )
            goto LABEL_150;
          v48 = v47 - 1;
          if ( !v48 )
            goto LABEL_130;
          v49 = v48 - 1;
          if ( !v49 )
            goto LABEL_130;
          v50 = v49 - 1;
          if ( !v50 )
            goto LABEL_130;
          if ( v50 != 1 )
            goto LABEL_134;
        }
        else if ( v34 != 20 )
        {
          v41 = v34 - 14;
          if ( !v41 )
            goto LABEL_150;
          v42 = v41 - 1;
          if ( !v42 )
            goto LABEL_150;
          v43 = v42 - 1;
          if ( !v43 )
            goto LABEL_150;
          v44 = v43 - 1;
          if ( !v44 )
          {
            v46 = L"(TRUE)";
            if ( *(_BYTE *)v33 != 0xFF )
              v46 = L"(FALSE)";
            do
              ++v30;
            while ( v46[v30] );
            v32 += 2 * v30;
            if ( v32 > (unsigned int)v4 )
              goto LABEL_150;
            v38 = RtlStringCbCopyExW(v5, v7, v46, &ppszDestEnd, &cbDest, 0x400u);
            goto LABEL_92;
          }
          v45 = v44 - 1;
          if ( v45 )
          {
            v39 = v45 == 1;
            goto LABEL_115;
          }
        }
        do
          ++v30;
        while ( v33[v30] );
        v32 += 2 * v30;
        if ( v32 > (unsigned int)v4 )
          goto LABEL_150;
        v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%s)", *(_QWORD *)(v6 + 40));
        goto LABEL_92;
      }
      if ( v34 != 13 )
      {
        if ( v34 <= 6 )
        {
          if ( v34 != 6 )
          {
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                v36 = v35 - 1;
                if ( v36 )
                {
                  v37 = v36 - 1;
                  if ( v37 )
                  {
                    if ( v37 - 1 <= 1 )
                    {
                      v32 += 16;
                      if ( v32 <= (unsigned int)v4 )
                      {
                        v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.4x)", *v33);
                        goto LABEL_92;
                      }
LABEL_150:
                      if ( v73 )
                        *v73 = v32;
                      if ( v32 > (unsigned int)v4 )
                        return (unsigned int)-1073741789;
                      return (unsigned int)v8;
                    }
LABEL_134:
                    v8 = -1073741811;
                    goto LABEL_150;
                  }
                }
                v32 += 12;
                if ( v32 > (unsigned int)v4 )
                  goto LABEL_150;
                v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.2x)", *(unsigned __int8 *)v33);
LABEL_92:
                v8 = v38;
                if ( v38 < 0 )
                  return (unsigned int)v8;
                goto LABEL_150;
              }
            }
            return (unsigned int)-1073741811;
          }
LABEL_130:
          v32 += 24;
          if ( v32 > (unsigned int)v4 )
            goto LABEL_150;
          v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.8x)", *(_DWORD *)v33);
          goto LABEL_92;
        }
        switch ( v34 )
        {
          case 7u:
            goto LABEL_130;
          case 8u:
          case 9u:
            v32 += 40;
            if ( v32 > (unsigned int)v4 )
              goto LABEL_150;
            v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(0x%.16I64x)", *(_QWORD *)v33);
            goto LABEL_92;
          case 0xAu:
          case 0xBu:
            v32 += 32;
            if ( v32 > (unsigned int)v4 )
              goto LABEL_150;
            if ( v34 == 10 )
              v40 = *(float *)v33;
            else
              v40 = *(double *)v33;
            v38 = RtlStringCbPrintfExW(v5, v7, &ppszDestEnd, &cbDest, 0x400u, L"(%.6e)", v40);
            goto LABEL_92;
        }
        v39 = v34 == 12;
LABEL_115:
        if ( v39 )
          goto LABEL_150;
        goto LABEL_134;
      }
    }
    v53 = 0LL;
    v72 = 0LL;
    do
    {
      v32 += 80;
      v69 = *(_OWORD *)((char *)v33 + v53);
      if ( v32 <= (unsigned int)v4 )
      {
        LODWORD(v66) = HIBYTE(*((_QWORD *)&v69 + 1));
        LODWORD(v65) = BYTE14(v69);
        LODWORD(v64) = BYTE13(v69);
        LODWORD(v63) = BYTE12(v69);
        LODWORD(v62) = BYTE11(v69);
        LODWORD(v61) = BYTE10(v69);
        LODWORD(v60) = BYTE9(v69);
        LODWORD(v59) = BYTE8(v69);
        LODWORD(v58) = WORD3(v69);
        LODWORD(v57) = WORD2(v69);
        LODWORD(v56) = v69;
        v8 = RtlStringCbPrintfExW(
               v5,
               cbDest,
               &ppszDestEnd,
               &cbDest,
               0x400u,
               L"({%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x})",
               v56,
               v57,
               v58,
               v59,
               v60,
               v61,
               v62,
               v63,
               v64,
               v65,
               v66);
        if ( v8 < 0 )
          return (unsigned int)v8;
        v6 = a1;
        v5 = ppszDestEnd;
        v53 = v72;
        LODWORD(v4) = a2;
        v33 = *(__int16 **)(a1 + 40);
      }
      v54 = *(unsigned int *)(v6 + 36);
      v53 += 16LL;
      v72 = v53;
    }
    while ( v53 < v54 );
    goto LABEL_150;
  }
  return (unsigned int)v8;
}
