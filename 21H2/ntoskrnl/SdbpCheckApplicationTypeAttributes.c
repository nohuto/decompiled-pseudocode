/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x1403F98F0
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x1405D1D80 (SdbpCheckBackupApplicationAttributes.c)
 * Callees:
 *     SdbpCheckFromStringVersion @ 0x1405D2014 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1405D2140 (SdbpCheckUptoStringVersion.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 *     SdbpCheckUptoVersion @ 0x1407B38F4 (SdbpCheckUptoVersion.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x140967890 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x1409678D4 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r14
  int v10; // ebp
  unsigned int FirstTag; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 QWORDTag; // rax
  int DWORDTag; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 StringTagPtr; // rax

  v4 = 0;
  *a1 = 0;
  v5 = 0LL;
  v10 = 1;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a2, a3, *(unsigned __int16 *)((char *)&unk_140C120D0 + v5));
    v12 = FirstTag;
    if ( !FirstTag )
      goto LABEL_48;
    v13 = a4[2];
    v14 = 0LL;
    if ( !v13 )
      break;
    do
    {
      v15 = 0LL;
      if ( v14 < v13 )
      {
        v16 = a4[1] * v14;
        if ( !is_mul_ok(a4[1], v14) || (v17 = a4[5], v15 = v17 + v16, v17 + v16 < v17) )
          v15 = 0LL;
      }
      if ( *(_WORD *)v15 == *(_WORD *)((char *)&unk_140C120D0 + v5 + 2) )
        break;
      ++v14;
      v15 = 0LL;
    }
    while ( v14 < v13 );
    if ( !v15 )
      break;
    v18 = *(unsigned __int16 *)((char *)&unk_140C120D0 + v5);
    if ( v18 > 0x6001 )
    {
      if ( v18 != 24593 )
      {
        if ( v18 <= 0x6028 )
          return v4;
        if ( v18 > 0x602B && v18 != 24642 )
        {
          if ( v18 == 24644 )
          {
            StringTagPtr = SdbGetStringTagPtr(a2, (unsigned int)v12);
            if ( !StringTagPtr )
              return v4;
            v26 = SdbpCheckUptoStringVersion(StringTagPtr, *(_QWORD *)(v15 + 8));
            goto LABEL_37;
          }
          if ( v18 == 24646 )
          {
            v31 = SdbGetStringTagPtr(a2, (unsigned int)v12);
            if ( !v31 )
              return v4;
            v26 = SdbpCheckFromStringVersion(v31, *(_QWORD *)(v15 + 8));
            goto LABEL_37;
          }
          if ( v18 != 24648 )
            return v4;
        }
      }
LABEL_35:
      v30 = SdbGetStringTagPtr(a2, (unsigned int)v12);
      if ( !v30 )
        return v4;
      v26 = AslStringPatternMatchW(v30, *(_QWORD *)(v15 + 8));
      goto LABEL_37;
    }
    if ( v18 == 24577 )
      goto LABEL_35;
    v19 = v18 - 16453;
    if ( !v19 )
    {
      DWORDTag = SdbReadDWORDTag(a2, (unsigned int)v12, 0xFFFFFFFFLL);
      if ( DWORDTag == -1 )
        return v4;
      v26 = DWORDTag == *(_DWORD *)(v15 + 8);
      goto LABEL_37;
    }
    v20 = v19 - 4047;
    if ( !v20 )
    {
LABEL_24:
      QWORDTag = SdbReadQWORDTag(a2, (unsigned int)v12, -1LL);
      if ( QWORDTag == -1 )
        return v4;
      v26 = SdbpCheckVersion(QWORDTag, *(_QWORD *)(v15 + 8));
      goto LABEL_37;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
LABEL_22:
      v27 = SdbReadQWORDTag(a2, (unsigned int)v12, -1LL);
      if ( v27 == -1 )
        return v4;
      v26 = SdbpCheckFromVersion(v27, *(_QWORD *)(v15 + 8));
      goto LABEL_37;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_24;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_22;
      if ( v24 != 1 )
        return v4;
    }
    v25 = SdbReadQWORDTag(a2, (unsigned int)v12, -1LL);
    if ( v25 == -1 )
      return v4;
    v26 = SdbpCheckUptoVersion(v25, *(_QWORD *)(v15 + 8));
LABEL_37:
    if ( !v10 || !v26 )
      goto LABEL_47;
    v10 = 1;
LABEL_48:
    v5 += 4LL;
    if ( v5 >= 0x40 )
    {
      *a1 = v10;
      return 1;
    }
  }
  if ( *(_WORD *)((char *)&unk_140C120D0 + v5) == 24577 )
    goto LABEL_48;
  if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3, v14, v12) == 28768 )
  {
LABEL_47:
    v10 = 0;
    goto LABEL_48;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckApplicationTypeAttributes",
    4886,
    (unsigned int)"Failed to find Attribute to use for sdb tag");
  return v4;
}
