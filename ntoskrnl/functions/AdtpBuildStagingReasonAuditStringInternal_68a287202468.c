__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        _WORD *a8)
{
  unsigned __int8 v8; // bl
  unsigned __int16 Length; // si
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  bool v16; // zf
  ULONG v17; // r15d
  size_t v18; // rdx
  unsigned int v19; // eax
  NTSTATUS appended; // eax
  size_t v21; // r14
  __int64 v22; // r15
  __int16 v23; // si
  char *Pool2; // rbx
  __int16 v25; // si
  _WORD *v26; // rcx
  __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v30; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcchRemaining; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v36; // [rsp+A8h] [rbp-58h]
  _WORD *v37; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v40; // [rsp+F0h] [rbp-10h] BYREF

  v37 = a8;
  Source.Buffer = (wchar_t *)&v40;
  v36 = a4;
  *(_OWORD *)Src = 0LL;
  v8 = 0;
  pcchRemaining = a3;
  v30.Buffer = (wchar_t *)L"-";
  Length = 2;
  v10 = a5;
  LOBYTE(v29) = 0;
  Destination = 0LL;
  *(_QWORD *)&Source.Length = 1966080LL;
  wcscpy(pszFormat, L"# %d");
  *(_QWORD *)&v30.Length = 131074LL;
  while ( 1 )
  {
    v10 >>= 1;
    if ( !v10 )
      break;
    ++v8;
  }
  v11 = AdtpBuildAccessesString(a1, a2, a5, 2, (PUNICODE_STRING)Src, 0LL, 0LL, 0LL, (__int64)&v29);
  if ( v11 < 0 )
    goto LABEL_47;
  v34 = LOWORD(Src[0]) >> 1;
  v12 = *(_DWORD *)(a7 + 4LL * v8);
  v13 = HIBYTE(v12);
  v14 = v12 & 0xFF0000;
  v15 = v13 & 0x7F;
  if ( v14 > 0x200000 )
  {
    if ( v14 == 3145728 )
      goto LABEL_25;
    if ( v14 != 0x400000 )
    {
      if ( v14 == 5242880 )
        goto LABEL_25;
      if ( v14 != 6291456 && v14 != 7340032 )
      {
        v16 = v14 == 0x800000;
LABEL_22:
        if ( !v16 )
        {
          v17 = 1809;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v17 = 1814;
    goto LABEL_26;
  }
  if ( v14 == 0x200000 || v14 == 0x10000 )
    goto LABEL_24;
  if ( v14 != 0x20000 )
  {
    if ( v14 == 196608 )
    {
      v17 = 1816;
      goto LABEL_26;
    }
    if ( v14 != 327680 )
    {
      if ( v14 == 393216 )
      {
        v17 = 1815;
        goto LABEL_26;
      }
      if ( v14 != 458752 )
      {
        v16 = v14 == 0x100000;
        goto LABEL_22;
      }
    }
  }
LABEL_25:
  v17 = 1813;
LABEL_26:
  v11 = AdtpFormatPrefix(&Source, v17);
  if ( v11 >= 0 )
  {
    if ( v14 == 196608 || (v18 = pcchRemaining, v14 == 393216) )
      v18 = v36;
    v19 = *(_DWORD *)(v18 + 8);
    if ( v19 )
    {
      if ( v15 >= v19 )
      {
        v11 = -1073741811;
        goto LABEL_47;
      }
      v30 = *(UNICODE_STRING *)(*(_QWORD *)(v18 + 16) + 16LL * v15);
      Length = v30.Length;
    }
    if ( Length <= 2u )
    {
      LODWORD(v28) = v15;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v28) >= 0 )
      {
        v30.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v30.Length = Length;
        v30.Buffer = pszDest;
      }
    }
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)Length + 54, 1799447891LL);
    if ( !Destination.Buffer )
      goto LABEL_38;
    Destination.Length = 0;
    Destination.MaximumLength = 2 * (Length + 54);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    if ( v17 != 1809 )
      RtlAppendUnicodeStringToString(&Destination, &v30);
    appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
    v21 = Destination.Length;
    v11 = appended;
    v22 = v34 + (Destination.Length >> 1);
    v23 = v34 + (Destination.Length >> 1) + 1;
    Pool2 = (char *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v22 + 1), 1799447891LL);
    if ( Pool2 )
    {
      if ( LOWORD(Src[0]) )
        memmove(Pool2, Src[1], LOWORD(Src[0]));
      if ( (_WORD)v21 )
        memmove(&Pool2[LOWORD(Src[0])], Destination.Buffer, v21);
      *(_WORD *)&Pool2[2 * v22] = 0;
      v25 = 2 * v23;
      v26 = v37;
      *v37 = v25 - 2;
      v26[1] = v25;
      *((_QWORD *)v26 + 1) = Pool2;
    }
    else
    {
LABEL_38:
      v11 = -1073741801;
    }
  }
LABEL_47:
  if ( (_BYTE)v29 && Src[1] )
    ExFreePoolWithTag(Src[1], 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}
