char __fastcall PopConfigureHeteroPolicies(int a1, char a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  int v8; // eax
  __m128i si128; // xmm0
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  int v15; // r9d
  _BYTE *v16; // r10
  int v17; // r8d
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 *v21; // rax
  int v22; // eax
  __m128i v23; // xmm0
  wchar_t **v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // edx
  int v30; // edi
  int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  _DWORD *v38; // r9
  int *v39; // r10
  __int64 v40; // r11
  char v41; // cl
  char v42; // dl
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // esi
  int v52; // edi
  int v53; // edi
  __m128i *v54; // rsi
  __int64 v55; // r14
  int *v56; // rdi
  unsigned __int8 v57; // r11
  __int64 v58; // rdx
  int v59; // eax
  char v60; // r11
  char v61; // r10
  __m128i *v62; // rdi
  __int64 i; // rcx
  char result; // al
  __int32 v65; // ecx
  __int64 v67; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v74[28]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 KeyValueInformation; // [rsp+120h] [rbp+20h] BYREF
  __m128i v76; // [rsp+130h] [rbp+30h] BYREF
  __int64 v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]

  v3 = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  Handle = 0LL;
  WORD2(v6) = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  memset(v74, 0, 0x68uLL);
  v74[0] = 5;
  v7 = 7LL;
  if ( a1 == 3 )
  {
    v74[15] = 8;
    v8 = PopCapturePlatformRole();
    if ( v8 == 2 || v8 == 8 )
      v74[15] = 10;
    v74[16] = 5200;
    v74[17] = 55;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(__m128i *)&v74[1] = si128;
    v74[4] = 2;
    v74[2] = 2;
    *(__m128i *)&v74[5] = si128;
    *(__m128i *)&v74[9] = si128;
    *(_QWORD *)&v74[13] = si128.m128i_i64[0];
  }
  else
  {
    v74[16] = 100;
    v74[15] = 10;
    v10 = 7;
    if ( (unsigned int)(a1 - 5) <= 1 )
      v10 = 23;
    v74[17] = v10;
    if ( a1 == 1 || a1 == 2 || (unsigned int)(a1 - 5) < 2 )
    {
      v11 = 0;
      v12 = &v74[1];
      do
      {
        v13 = 2LL;
        do
        {
          if ( v11 == 4 || v11 <= 1 )
            v14 = 2;
          else
            v14 = 3;
          *v12++ = v14;
          --v13;
        }
        while ( v13 );
        ++v11;
      }
      while ( v11 < 7 );
    }
    else
    {
      memset(&v74[1], 0, 56);
    }
  }
  v15 = 5;
  v16 = &unk_140C0CBF4;
  v17 = 5;
  v18 = 7LL;
  do
  {
    v19 = *((unsigned int *)v16 - 1);
    if ( !*v16 )
    {
      v15 = 5;
      v17 = 5;
    }
    switch ( (_DWORD)v19 )
    {
      case 0:
        goto LABEL_35;
      case 1:
        v20 = PpmEntryLevelPerfProfile;
        break;
      case 2:
        v20 = PpmBackgroundProfile;
        break;
      case 3:
        v20 = PpmMultimediaQosProfile;
        if ( PpmMultimediaQosProfile )
        {
LABEL_32:
          v21 = (__int64 *)(440LL * dword_140C3D48C + v20 + 40);
          v6 = *v21;
          v67 = *v21;
          goto LABEL_36;
        }
LABEL_35:
        v21 = &PpmCurrentProfile[55 * dword_140C3D48C + 5];
        WORD2(v67) = WORD2(v6) | 0x1800;
        WORD2(v6) |= 0x1800u;
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        v20 = PpmEcoQosProfile;
        break;
      case 6:
        v20 = PpmUtilityQosProfile;
        break;
      default:
        goto LABEL_35;
    }
    if ( v20 )
      goto LABEL_32;
    v21 = 0LL;
    WORD2(v67) = 0;
    WORD2(v6) = 0;
LABEL_36:
    if ( (v67 & 0x100000000000LL) != 0 )
      v15 = *((_DWORD *)v21 + 106);
    if ( (v67 & 0x80000000000LL) != 0 )
      v17 = *((_DWORD *)v21 + 107);
    if ( v15 != 5 )
      v74[2 * v19 + 1] = v15;
    if ( v17 != 5 )
      v74[2 * v19 + 2] = v17;
    v16 += 8;
    --v18;
  }
  while ( v18 );
  v22 = v74[16];
  if ( HIDWORD(PpmCurrentProfile[55 * dword_140C3D48C + 57]) )
    v22 = HIDWORD(PpmCurrentProfile[55 * dword_140C3D48C + 57]);
  v74[16] = v22;
  if ( a2 )
  {
    v23 = _mm_load_si128((const __m128i *)&_xmm);
    qword_140C3BCD4 = v23.m128i_i64[0];
    xmmword_140C3BCA4 = (__int128)v23;
    PopHeteroLegacyOverride = 5;
    xmmword_140C3BCB4 = (__int128)v23;
    qword_140C3BCDC = 0LL;
    xmmword_140C3BCC4 = (__int128)v23;
    dword_140C3BCE4 = -1;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      v24 = &off_140A76EB8;
      ObjectAttributes.RootDirectory = KeyHandle;
      v25 = 7LL;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v24 - 1));
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v24);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 &ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v24 + 2)) = DWORD2(KeyValueInformation);
          }
          ZwClose(Handle);
        }
        v24 += 3;
        --v25;
      }
      while ( v25 );
      ZwClose(KeyHandle);
    }
  }
  v26 = 0LL;
  v27 = 7LL;
  do
  {
    v28 = 2LL;
    do
    {
      v29 = *(_DWORD *)((char *)&xmmword_140C3BCA4 + v26 * 4);
      if ( v29 != 5 )
        v74[v26 + 1] = v29;
      ++v26;
      --v28;
    }
    while ( v28 );
    --v27;
  }
  while ( v27 );
  v30 = v74[0];
  if ( PopHeteroLegacyOverride != 5 )
    v30 = PopHeteroLegacyOverride;
  v31 = v74[15];
  v32 = v74[17];
  if ( (_DWORD)qword_140C3BCDC )
    v31 = qword_140C3BCDC;
  v74[15] = v31;
  v33 = v74[16];
  if ( HIDWORD(qword_140C3BCDC) )
    v33 = HIDWORD(qword_140C3BCDC);
  v74[0] = v30;
  v74[16] = v33;
  if ( dword_140C3BCE4 != -1 )
    v32 = dword_140C3BCE4;
  v74[17] = v32;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v34 = &v74[1];
    v35 = 7LL;
    do
    {
      v36 = 2LL;
      do
      {
        if ( *v34 == 3 )
          *v34 = 4;
        ++v34;
        --v36;
      }
      while ( v36 );
      --v35;
    }
    while ( v35 );
    v32 = v74[17];
    v30 = v74[0];
  }
  v37 = 1;
  v38 = &v74[1];
  v39 = &v74[2];
  v40 = 7LL;
  do
  {
    v41 = v37;
    v42 = 0;
    v43 = *v39;
    v39 += 2;
    v44 = *v38 == v43;
    v38 += 2;
    if ( v44 )
      v42 = v41;
    v37 = v42;
    --v40;
  }
  while ( v40 );
  if ( v42 )
    v74[17] = v32 & 0xFFFFFFFB;
  v45 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  v46 = PpmPerfQosTransitionHysteresisOverride;
  v47 = (unsigned int)PpmPerfQosTransitionHysteresis;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v46 = PpmPerfQosTransitionHysteresis;
  if ( v46 )
  {
    v48 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v48 = 10 * PpmPerfQosTransitionHysteresis;
    v74[18] = v48;
  }
  v49 = PpmPerfQosTransitionHysteresisOverride;
  v50 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v49 = PpmPerfQosTransitionHysteresis;
  if ( v49 <= 0x1F4 )
  {
    v45 = 500LL;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v45 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v45);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 )
  {
    v51 = 1;
    v76 = _mm_load_si128((const __m128i *)&_xmm);
    v77 = v76.m128i_i64[0];
    v78 = _mm_cvtsi128_si32(v76);
  }
  else
  {
    LOBYTE(v47) = 0;
    LOBYTE(v38) = 0;
    if ( v30 )
    {
      v52 = v30 - 2;
      if ( v52 )
      {
        v53 = v52 - 2;
        if ( v53 )
        {
          if ( v53 == 1 )
          {
            v54 = &v76;
            v55 = 7LL;
            v56 = &v74[1];
            do
            {
              LOBYTE(v50) = 0;
              v57 = 0;
              v58 = 2LL;
              do
              {
                v59 = *v56;
                if ( *v56 )
                {
                  if ( v59 == 2 )
                  {
                    v57 = 1;
                  }
                  else if ( v59 == 4 )
                  {
                    LOBYTE(v50) = 1;
                  }
                }
                else
                {
                  LOBYTE(v50) = 1;
                  v57 = 1;
                }
                ++v56;
                --v58;
              }
              while ( v58 );
              v54->m128i_i32[0] = PpmHeteroComputeBias(v50, v57, v47, v38);
              LOBYTE(v47) = v50 | v47;
              v54 = (__m128i *)((char *)v54 + 4);
              LOBYTE(v38) = v60 | (unsigned __int8)v38;
              --v55;
            }
            while ( v55 );
          }
        }
        else
        {
          LOBYTE(v47) = 1;
        }
      }
      else
      {
        LOBYTE(v38) = 1;
      }
    }
    else
    {
      LOBYTE(v47) = 1;
      LOBYTE(v38) = 1;
    }
    LOBYTE(v45) = (_BYTE)v38;
    LOBYTE(v50) = v47;
    v51 = PpmHeteroComputeBias(v50, v45, v47, v38);
    if ( v61 )
    {
      v62 = &v76;
      for ( i = 7LL; i; --i )
      {
        v62->m128i_i32[0] = v51;
        v62 = (__m128i *)((char *)v62 + 4);
      }
    }
  }
  LOBYTE(v45) = a3;
  PopConfigureHeteroThresholds(v74, v45, v47, v38);
  result = KeConfigureHeteroPolicy(v74);
  if ( PpmHeteroParkBias != v51 )
  {
    PpmHeteroParkBias = v51;
    result = 1;
  }
  do
  {
    v65 = v76.m128i_i32[v3];
    if ( PpmHeteroQosBias[v3] != v65 )
    {
      PpmHeteroQosBias[v3] = v65;
      result = 1;
    }
    ++v3;
    --v7;
  }
  while ( v7 );
  return result;
}
