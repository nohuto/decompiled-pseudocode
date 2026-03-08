/*
 * XREFs of BcpDisplayCriticalString @ 0x14066FD2C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140670094 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140670320 (BcpDisplayProgress.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140670864 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14066F654 (BgpDisplayCharacterEx.c)
 *     BgpFoGetStringAdvanceWidth @ 0x14066F9B0 (BgpFoGetStringAdvanceWidth.c)
 *     BcpPrintSpaces @ 0x1406706FC (BcpPrintSpaces.c)
 *     BgpRasGetGlyphAdvanceWidth @ 0x140670E7C (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BcpDisplayCriticalString(unsigned __int16 *a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // r9
  char *v6; // rax
  int v7; // r13d
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r14d
  int v11; // ebx
  __int64 v12; // rcx
  int *v13; // r12
  int StringAdvanceWidth; // r8d
  unsigned int v15; // ebx
  unsigned __int16 *v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r15d
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 result; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int v28; // [rsp+50h] [rbp-28h]
  bool v29; // [rsp+54h] [rbp-24h]
  int v30; // [rsp+58h] [rbp-20h]
  __int64 v31; // [rsp+60h] [rbp-18h]
  unsigned int v33; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+58h] BYREF
  int v35; // [rsp+D8h] [rbp+60h] BYREF

  v35 = 0;
  v34 = 0;
  v33 = 0;
  v5 = 9LL * a4;
  v31 = v5;
  v6 = (char *)&dword_140C0B590[2 * v5];
  if ( BcpTextBoxLeftEdgeOverride )
    v7 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
  else
    v7 = *((_DWORD *)v6 + 4) + *((_DWORD *)v6 + 8);
  if ( BcpTextBoxRightEdgeOverride )
    v8 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
  else
    v8 = *((_DWORD *)v6 + 4) + *((_DWORD *)v6 + 8) + dword_140C0B590[2 * v5 + 6];
  v9 = BcpCursor;
  v10 = HIDWORD(BcpCursor);
  v11 = dword_140C646C0;
  v12 = *(_QWORD *)(qword_140C70820 + 24);
  v29 = 0;
  *(_DWORD *)(v12 + 56) = a2;
  v13 = (int *)(v12 + 40);
  v30 = v12 + 40;
  *(_DWORD *)(qword_140C70820 + 8) = a2;
  StringAdvanceWidth = BgpFoGetStringAdvanceWidth((int)v12 + 40, (__int64)a1, &v33, v5);
  if ( StringAdvanceWidth >= 0 )
    v29 = v9 + v33 > v8;
  v15 = v11 - v10;
  v16 = a1;
  v28 = *v13;
  v17 = 0;
  if ( (int)v15 <= 0 )
    v15 = 0;
  v18 = 0;
  if ( (*a1 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v29 && v17 <= v18 )
      {
        v19 = *((_QWORD *)v16 + 1);
        LODWORD(v20) = v18;
        v21 = 0;
        v33 = v18;
        if ( *(_WORD *)(v19 + 2LL * v18) == 32 )
        {
LABEL_28:
          v17 = v20;
        }
        else
        {
          while ( 1 )
          {
            v22 = *(unsigned __int16 *)(v19 + 2LL * (unsigned int)v20);
            if ( v22 <= 0xD )
            {
              v23 = 9217;
              if ( _bittest(&v23, v22) )
                break;
            }
            StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(v30, v22, (unsigned int)&v35, 0, (__int64)&BcpWorkspace);
            if ( StringAdvanceWidth < 0 )
              goto LABEL_42;
            v21 += v35;
            v20 = ++v33;
            if ( v8 < v21 + v9 && v15 )
            {
              if ( v9 < v8 )
              {
                StringAdvanceWidth = BcpPrintSpaces(qword_140C70820, v9, v8, v10, v28, (__int64)&v34);
                if ( StringAdvanceWidth < 0 )
                  goto LABEL_42;
                if ( v15 < v34 )
                  v15 = v34;
              }
              v9 = v7;
              v24 = v15 + dword_140C0B590[2 * v31 + 10];
              v15 = 0;
              v10 += v24;
              break;
            }
            v19 = *((_QWORD *)a1 + 1);
            if ( *(_WORD *)(v19 + 2 * v20) == 32 )
              goto LABEL_28;
          }
          v17 = v33;
        }
      }
      StringAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                             v30,
                             *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v18),
                             (unsigned int)&v35,
                             0,
                             (__int64)&BcpWorkspace);
      if ( StringAdvanceWidth < 0 )
        goto LABEL_42;
      if ( v8 >= v9 + v35 )
        break;
      if ( v9 < v8 )
      {
        StringAdvanceWidth = BcpPrintSpaces(qword_140C70820, v9, v8, v10, v28, (__int64)&v34);
        if ( StringAdvanceWidth < 0 )
          goto LABEL_42;
        if ( v15 < v34 )
          v15 = v34;
      }
      v9 = v7;
      v25 = v18;
      v10 += v15 + dword_140C0B590[2 * v31 + 10];
      v15 = 0;
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v18) != 32 )
        goto LABEL_38;
LABEL_41:
      ++v18;
      v16 = a1;
      if ( v18 >= *a1 >> 1 )
        goto LABEL_42;
    }
    v25 = v18;
LABEL_38:
    StringAdvanceWidth = BgpDisplayCharacterEx(
                           *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v25),
                           (__int64 *)qword_140C70820,
                           v9,
                           v10,
                           v28,
                           -1,
                           &v35,
                           &v34,
                           v27);
    if ( StringAdvanceWidth < 0 )
      goto LABEL_42;
    v9 += v35;
    if ( v34 > v15 )
      v15 = v34;
    goto LABEL_41;
  }
LABEL_42:
  LODWORD(BcpCursor) = v9;
  dword_140C646C0 = v10 + v15;
  result = (unsigned int)StringAdvanceWidth;
  HIDWORD(BcpCursor) = v10;
  return result;
}
