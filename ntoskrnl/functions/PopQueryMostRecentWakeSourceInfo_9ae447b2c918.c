void __fastcall PopQueryMostRecentWakeSourceInfo(
        UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6,
        _BYTE *a7)
{
  __int64 v11; // rdx
  const WCHAR *v12; // rax
  __int16 v13; // ax
  __int64 MostRecentWakeInfo; // rax
  __int64 v15; // r8
  __int64 v16; // rbp
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  const wchar_t *v21; // rax
  __int64 v22; // rcx
  __int16 v23; // ax
  int v24; // ecx
  int v25; // ecx
  const wchar_t *v26; // r10
  const wchar_t *v27; // rax
  __int64 v28; // rcx
  const wchar_t *v29; // rax
  const wchar_t *v30; // rax
  const wchar_t *v31; // r8
  const wchar_t *v32; // rax
  __int64 v33; // rcx
  __int16 v34; // bx
  const wchar_t *v35; // rax
  const wchar_t *v36; // rax
  __int64 v37; // rcx
  __int16 v38; // ax
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  __int16 v41; // bx
  const WCHAR *v42; // rax
  __int64 v43; // rcx
  __int16 v44; // bx
  __int64 v46; // [rsp+78h] [rbp+30h]

  *a6 = 0;
  *(_OWORD *)a2 = 0LL;
  *a7 = 0;
  v11 = 0x7FFFLL;
  v12 = L"Unknown";
  while ( *v12 )
  {
    ++v12;
    if ( !--v11 )
      goto LABEL_7;
  }
  if ( a2 )
  {
    v13 = 2 * (0x7FFF - v11);
    *(_QWORD *)(a2 + 8) = L"Unknown";
    *(_WORD *)a2 = v13;
    *(_WORD *)(a2 + 2) = v13 + 2;
  }
LABEL_7:
  *a4 = 0LL;
  *DestinationString = 0LL;
  *(_OWORD *)a3 = 0LL;
  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  v46 = MostRecentWakeInfo;
  v15 = MostRecentWakeInfo;
  if ( MostRecentWakeInfo )
  {
    if ( !*(_DWORD *)(MostRecentWakeInfo + 40) )
      goto LABEL_43;
    v16 = *(_QWORD *)(MostRecentWakeInfo + 32);
    v17 = *(_DWORD *)(v16 + 16);
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        *(_OWORD *)a2 = 0LL;
        v36 = L"Fixed";
        v37 = 0x7FFFLL;
        while ( *v36 )
        {
          ++v36;
          if ( !--v37 )
            goto LABEL_55;
        }
        if ( a2 )
        {
          v38 = 2 * (0x7FFF - v37);
          *(_QWORD *)(a2 + 8) = L"Fixed";
          *(_WORD *)a2 = v38;
          *(_WORD *)(a2 + 2) = v38 + 2;
        }
LABEL_55:
        if ( *(_DWORD *)(v16 + 24) == 1 )
        {
          v26 = L"Power Button";
          *(_OWORD *)a3 = 0LL;
          v40 = L"Power Button";
          v28 = 0x7FFFLL;
          while ( *v40 )
          {
            ++v40;
            if ( !--v28 )
              goto LABEL_43;
          }
          goto LABEL_65;
        }
        if ( *(_DWORD *)(v16 + 24) == 2 )
        {
          v26 = L"Sleep Button";
          *(_OWORD *)a3 = 0LL;
          v39 = L"Sleep Button";
          v28 = 0x7FFFLL;
          while ( *v39 )
          {
            ++v39;
            if ( !--v28 )
              goto LABEL_43;
          }
          goto LABEL_65;
        }
        goto LABEL_43;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
          {
            *(_OWORD *)a2 = 0LL;
            v21 = L"Internal";
            v22 = 0x7FFFLL;
            while ( *v21 )
            {
              ++v21;
              if ( !--v22 )
                goto LABEL_20;
            }
            if ( a2 )
            {
              v23 = 2 * (0x7FFF - v22);
              *(_QWORD *)(a2 + 8) = L"Internal";
              *(_WORD *)a2 = v23;
              *(_WORD *)(a2 + 2) = v23 + 2;
            }
LABEL_20:
            v24 = *(_DWORD *)(v16 + 24);
            if ( !v24 )
            {
              v26 = L"Doze to Hibernate";
              *(_OWORD *)a3 = 0LL;
              v30 = L"Doze to Hibernate";
              v28 = 0x7FFFLL;
              while ( *v30 )
              {
                ++v30;
                if ( !--v28 )
                  goto LABEL_43;
              }
              goto LABEL_65;
            }
            v25 = v24 - 1;
            if ( !v25 )
            {
              v26 = L"Predicted User Presence";
              *(_OWORD *)a3 = 0LL;
              v29 = L"Predicted User Presence";
              v28 = 0x7FFFLL;
              while ( *v29 )
              {
                ++v29;
                if ( !--v28 )
                  goto LABEL_43;
              }
              goto LABEL_65;
            }
            if ( v25 == 1 )
            {
              v26 = L"Timer Override";
              *(_OWORD *)a3 = 0LL;
              v27 = L"Timer Override";
              v28 = 0x7FFFLL;
              while ( *v27 )
              {
                ++v27;
                if ( !--v28 )
                  goto LABEL_43;
              }
LABEL_65:
              if ( a3 )
              {
                v41 = 2 * (0x7FFF - v28);
                *(_QWORD *)(a3 + 8) = v26;
                *(_WORD *)a3 = v41;
                *(_WORD *)(a3 + 2) = v41 + 2;
              }
            }
          }
LABEL_43:
          PopWakeInfoDereference(v15);
          return;
        }
        v31 = L"Presumed Timer";
        *(_OWORD *)a2 = 0LL;
        v32 = L"Presumed Timer";
        v33 = 0x7FFFLL;
        while ( *v32 )
        {
          ++v32;
          if ( !--v33 )
            goto LABEL_41;
        }
      }
      else
      {
        v31 = L"Timer";
        *(_OWORD *)a2 = 0LL;
        v35 = L"Timer";
        v33 = 0x7FFFLL;
        while ( *v35 )
        {
          ++v35;
          if ( !--v33 )
            goto LABEL_41;
        }
      }
      if ( a2 )
      {
        v34 = 2 * (0x7FFF - v33);
        *(_QWORD *)(a2 + 8) = v31;
        *(_WORD *)a2 = v34;
        *(_WORD *)(a2 + 2) = v34 + 2;
      }
LABEL_41:
      PopGetCallerContextFromBuffer(*(_QWORD *)(v16 + 24), a1, (__int64)a4, DestinationString);
    }
    else
    {
      *(_OWORD *)a2 = 0LL;
      v42 = L"Device";
      v43 = 0x7FFFLL;
      while ( *v42 )
      {
        ++v42;
        if ( !--v43 )
          goto LABEL_73;
      }
      if ( a2 )
      {
        v44 = 2 * (0x7FFF - v43);
        *(_QWORD *)(a2 + 8) = L"Device";
        *(_WORD *)a2 = v44;
        *(_WORD *)(a2 + 2) = v44 + 2;
      }
LABEL_73:
      *(_OWORD *)a3 = 0LL;
      if ( (int)PopCloneUnicodeString((PCUNICODE_STRING)(v16 + 40), a4) >= 0 && a4->MaximumLength )
        *a6 = 1;
      if ( (int)PopCloneUnicodeString((PCUNICODE_STRING)(v16 + 24), DestinationString) >= 0 )
      {
        v15 = v46;
        if ( DestinationString->MaximumLength )
          *a7 = 1;
        goto LABEL_43;
      }
    }
    v15 = v46;
    goto LABEL_43;
  }
}
