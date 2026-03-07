__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, char *a4)
{
  unsigned int v4; // r10d
  int v5; // esi
  __int64 v6; // rax
  _WORD *v11; // rbx
  char *v12; // r12
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  int v24; // eax
  int v25; // r11d
  int v26; // ecx
  int v27; // edi
  int v28; // eax
  int v29; // ecx
  int ObjectTypeName; // eax
  int v31; // r11d
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a4[v6] );
  v38 = (int)v6;
  if ( (int)v6 > 0 )
  {
    v11 = (_WORD *)(a2 + 2);
    v12 = a4;
    do
    {
      if ( v4 )
        return v4;
      v13 = *v12;
      if ( v13 > 73 )
      {
        v33 = v13 - 79;
        if ( !v33 )
        {
          if ( *v11 == 128 )
            goto LABEL_20;
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          ObjectTypeName = GetObjectTypeName((unsigned __int16)*v11);
          v32 = 201;
          goto LABEL_47;
        }
        v34 = v33 - 1;
        if ( !v34 )
        {
          if ( *v11 == 4 )
            goto LABEL_20;
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v24 = GetObjectTypeName((unsigned __int16)*v11);
          v26 = 202;
          goto LABEL_24;
        }
        v35 = v34 - 2;
        if ( !v35 )
        {
          if ( *v11 == 14 || (unsigned __int16)(*v11 - 128) <= 1u )
            goto LABEL_20;
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v24 = GetObjectTypeName((unsigned __int16)*v11);
          v26 = 203;
          goto LABEL_24;
        }
        v36 = v35 - 2;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( !v37 )
            goto LABEL_20;
          if ( v37 != 5 )
          {
LABEL_58:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a1, -1072431101);
            PrintDebugMessage(206, *v12, 0, 0, 0LL);
            v4 = -1072431101;
            goto LABEL_20;
          }
          if ( *v11 == 2 )
            goto LABEL_20;
          v27 = v5;
          if ( a3 )
          {
            v4 = ConvertToString(a2 + 40LL * v5, 0LL, a2 + 40LL * v5, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v28 = GetObjectTypeName((unsigned __int16)*v11);
          v29 = 205;
          goto LABEL_44;
        }
        if ( (unsigned __int16)(*v11 - 2) <= 1u )
          goto LABEL_20;
        v20 = v5;
        if ( a3 )
        {
          v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
          if ( !v4 )
            goto LABEL_20;
        }
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, -1072431095);
        v21 = GetObjectTypeName((unsigned __int16)*v11);
        v22 = 204;
        goto LABEL_19;
      }
      if ( v13 == 73 )
      {
        if ( *v11 == 1 )
          goto LABEL_20;
        v27 = v5;
        if ( a3 )
        {
          v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
          if ( !v4 )
            goto LABEL_20;
        }
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, -1072431096);
        v28 = GetObjectTypeName((unsigned __int16)*v11);
        v29 = 198;
LABEL_44:
        PrintDebugMessage(v29, v27, v28, 0, 0LL);
        v4 = -1072431096;
        goto LABEL_20;
      }
      v14 = v13 - 65;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          if ( *v11 == 3 )
            goto LABEL_20;
          v27 = v5;
          if ( a3 )
          {
            v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v28 = GetObjectTypeName((unsigned __int16)*v11);
          v29 = 193;
          goto LABEL_44;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          if ( (unsigned __int16)(*v11 - 3) <= 1u )
            goto LABEL_20;
          v20 = v5;
          if ( a3 )
          {
            v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v11);
          v22 = 194;
LABEL_19:
          PrintDebugMessage(v22, v20, v21, 0, 0LL);
          v4 = -1072431095;
          goto LABEL_20;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          if ( (unsigned __int16)(*v11 - 1) <= 2u )
            goto LABEL_20;
          v20 = v5;
          if ( a3 )
          {
            v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v11);
          v22 = 199;
          goto LABEL_19;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          if ( (unsigned __int16)(*v11 - 1) <= 2u )
            goto LABEL_20;
          if ( *v11 == 15 )
            goto LABEL_20;
          v20 = v5;
          if ( a3 )
          {
            v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v11);
          v22 = 200;
          goto LABEL_19;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( *v11 == 5 )
            goto LABEL_20;
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v24 = GetObjectTypeName((unsigned __int16)*v11);
          v26 = 197;
          goto LABEL_24;
        }
        if ( v19 != 2 )
          goto LABEL_58;
        if ( *v11 == 1 )
        {
          v20 = v5;
          if ( a3 )
          {
            v4 = ConvertToDDBHandle(a2 + 40LL * v5, a2 + 40LL * v5, 5LL, 128LL);
            if ( !v4 )
              goto LABEL_20;
          }
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v11);
          v22 = 196;
          goto LABEL_19;
        }
        if ( *v11 != 15 )
        {
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          v24 = GetObjectTypeName((unsigned __int16)*v11);
          v26 = 196;
LABEL_24:
          PrintDebugMessage(v26, v25, v24, 0, 0LL);
          v4 = -1072431096;
        }
      }
      else if ( *v11 != 129 )
      {
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, -1072431095);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v11);
        v32 = 195;
LABEL_47:
        PrintDebugMessage(v32, v31, ObjectTypeName, 0, 0LL);
        v4 = -1072431095;
      }
LABEL_20:
      ++v12;
      ++v5;
      v11 += 20;
    }
    while ( v12 - a4 < v38 );
  }
  return v4;
}
