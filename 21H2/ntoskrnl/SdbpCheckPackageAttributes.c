/*
 * XREFs of SdbpCheckPackageAttributes @ 0x1409657C0
 * Callers:
 *     <none>
 * Callees:
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbpCheckUptoVersion @ 0x1407B38F4 (SdbpCheckUptoVersion.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x140967890 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x1409678D4 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // r13
  unsigned int FirstTag; // r10d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int16 *StringTagPtr; // rax
  int v20; // eax
  unsigned __int64 QWORDTag; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(unsigned __int64 **)(a6 + 88);
  *a1 = 0;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_140C12FB0 + v10));
    if ( FirstTag )
      break;
LABEL_33:
    v10 += 4LL;
    if ( v10 >= 0x28 )
    {
      *a1 = v9;
      return 1;
    }
  }
  v13 = v11[2];
  v14 = 0LL;
  if ( v13 )
  {
    do
    {
      v15 = 0LL;
      if ( v14 < v13 )
      {
        v16 = v11[1] * v14;
        if ( !is_mul_ok(v11[1], v14) || (v17 = v11[5], v15 = v17 + v16, v17 + v16 < v17) )
          v15 = 0LL;
      }
      if ( *(_WORD *)v15 == *(_WORD *)((char *)&unk_140C12FB0 + v10 + 2) )
        break;
      ++v14;
      v15 = 0LL;
    }
    while ( v14 < v13 );
    if ( v15 )
    {
      v18 = *(_WORD *)((char *)&unk_140C12FB0 + v10);
      if ( v18 == 16453 )
      {
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFFLL, v13);
        if ( DWORDTag == -1 )
          return v6;
        v20 = DWORDTag == *(_DWORD *)(v15 + 8);
        goto LABEL_30;
      }
      if ( v18 != 20500 )
      {
        if ( v18 == 20501 )
          goto LABEL_24;
        if ( v18 == 20502 )
        {
LABEL_22:
          QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( QWORDTag == -1LL )
            return v6;
          v20 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v15 + 8));
LABEL_30:
          if ( !v9 || (v9 = 1, !v20) )
            v9 = 0;
          goto LABEL_33;
        }
        if ( v18 != 20503 )
        {
          if ( v18 != 20504 )
          {
            if ( v18 != 20505 )
            {
              if ( v18 <= 0x6028u )
                return v6;
              if ( v18 > 0x602Bu )
                return v6;
              StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(*(_QWORD *)(a2 + 8), FirstTag, v14, v13);
              if ( !StringTagPtr )
                return v6;
              v20 = AslStringPatternMatchW(StringTagPtr, *(unsigned __int16 **)(v15 + 8));
              goto LABEL_30;
            }
            goto LABEL_22;
          }
LABEL_24:
          v22 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
          if ( v22 == -1 )
            return v6;
          v20 = SdbpCheckFromVersion(v22, *(_QWORD *)(v15 + 8));
          goto LABEL_30;
        }
      }
      v23 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
      if ( v23 == -1 )
        return v6;
      v20 = SdbpCheckVersion(v23, *(_QWORD *)(v15 + 8));
      goto LABEL_30;
    }
  }
  AslLogCallPrintf(1LL);
  return v6;
}
