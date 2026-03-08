/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x14066B804
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x140A4C8B0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140A4DC40 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x1404117B8 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 *     SdbpCheckUptoVersion @ 0x140860A14 (SdbpCheckUptoVersion.c)
 *     AslStringPatternMatchW @ 0x1408A7856 (AslStringPatternMatchW.c)
 *     SdbpCheckFromStringVersion @ 0x140A50788 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x140A508BC (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A50900 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckVersion @ 0x140A50A40 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  _WORD *v4; // r15
  unsigned int v5; // ebx
  int *v7; // r13
  int v8; // r14d
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int FirstTag; // r10d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  bool v26; // zf
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 QWORDTag; // rax
  __int64 v31; // rax
  int DWORDTag; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  __int64 StringTagPtr; // rax
  __int64 v40; // rax
  int v42; // r8d
  __int64 v43; // [rsp+20h] [rbp-48h]

  v4 = &unk_140C0BC10;
  v5 = 0;
  v7 = a1;
  *a1 = 0;
  v8 = 1;
  v9 = 10LL;
  v43 = 10LL;
  if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
  {
    v9 = 16LL;
    v4 = &unk_140C0BBD0;
    v43 = 16LL;
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a2, a3, (unsigned __int16)v4[2 * v11]);
    if ( FirstTag )
      break;
LABEL_54:
    if ( ++v11 >= v9 )
    {
      *v7 = v8;
      return 1;
    }
  }
  v13 = 0LL;
  v14 = a4[2];
  if ( v14 )
  {
    do
    {
      v15 = 0LL;
      if ( v13 < v14 )
      {
        v16 = a4[1] * v13;
        if ( !is_mul_ok(a4[1], v13) || (v17 = a4[5], v15 = v17 + v16, v17 + v16 < v17) )
          v15 = 0LL;
      }
      if ( *(_WORD *)v15 == v4[2 * v11 + 1] )
        break;
      ++v13;
      v15 = 0LL;
    }
    while ( v13 < v14 );
    v7 = a1;
    if ( v15 )
    {
      v18 = (unsigned __int16)v4[2 * v11];
      if ( v18 > 0x6011 )
      {
        v33 = v18 - 24617;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v36 = v35 - 23;
              if ( v36 )
              {
                v37 = v36 - 2;
                if ( v37 )
                {
                  v38 = v37 - 2;
                  if ( v38 )
                  {
                    v26 = v38 == 2;
LABEL_24:
                    if ( !v26 )
                      return v5;
                    goto LABEL_25;
                  }
                  StringTagPtr = SdbGetStringTagPtr(a2, FirstTag);
                  if ( !StringTagPtr )
                    return v5;
                  v28 = SdbpCheckFromStringVersion(StringTagPtr, *(_QWORD *)(v15 + 8));
                }
                else
                {
                  v40 = SdbGetStringTagPtr(a2, FirstTag);
                  if ( !v40 )
                    return v5;
                  v28 = SdbpCheckUptoStringVersion(v40, *(_QWORD *)(v15 + 8));
                }
                goto LABEL_27;
              }
            }
          }
        }
      }
      else if ( v18 != 24593 )
      {
        v19 = v18 - 16453;
        if ( v19 )
        {
          v20 = v19 - 4047;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
            {
LABEL_32:
              QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( QWORDTag == -1 )
                return v5;
              v28 = SdbpCheckFromVersion(QWORDTag, *(_QWORD *)(v15 + 8));
              goto LABEL_27;
            }
            v22 = v21 - 1;
            if ( !v22 )
            {
LABEL_30:
              v29 = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( v29 == -1 )
                return v5;
              v28 = SdbpCheckUptoVersion(v29, *(_QWORD *)(v15 + 8));
              goto LABEL_27;
            }
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 == 4072;
                  goto LABEL_24;
                }
                goto LABEL_30;
              }
              goto LABEL_32;
            }
          }
          v31 = SdbReadQWORDTag(a2, FirstTag, -1LL);
          if ( v31 == -1 )
            return v5;
          v28 = SdbpCheckVersion(v31, *(_QWORD *)(v15 + 8));
        }
        else
        {
          DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFFLL);
          if ( DWORDTag == -1 )
            return v5;
          v28 = DWORDTag == *(_DWORD *)(v15 + 8);
        }
LABEL_27:
        if ( v8 && v28 )
        {
          v8 = 1;
LABEL_53:
          v9 = v43;
          goto LABEL_54;
        }
LABEL_52:
        v8 = 0;
        goto LABEL_53;
      }
LABEL_25:
      v27 = SdbGetStringTagPtr(a2, FirstTag);
      if ( !v27 )
        return v5;
      v28 = AslStringPatternMatchW(v27, *(_QWORD *)(v15 + 8));
      goto LABEL_27;
    }
  }
  if ( v10 )
  {
    if ( v4[2 * v11] == 24577 )
      goto LABEL_53;
    if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3, v13) != 28768 )
    {
      v42 = 4842;
      goto LABEL_58;
    }
    goto LABEL_52;
  }
  v42 = 4849;
LABEL_58:
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckApplicationTypeAttributes",
    v42,
    (unsigned int)"Failed to find Attribute to use for sdb tag");
  return v5;
}
