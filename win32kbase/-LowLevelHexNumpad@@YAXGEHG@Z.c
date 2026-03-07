void __fastcall LowLevelHexNumpad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  unsigned __int8 v13; // di
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int16 v24; // di
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx

  v4 = a4;
  v5 = (unsigned __int8)a2;
  v6 = a3;
  v7 = (unsigned __int16)a1;
  if ( (*(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13996) & 0x10) == 0 )
  {
    v12 = gfInNumpadHexInput;
    if ( (gfInNumpadHexInput & 1) == 0 )
      return;
    goto LABEL_3;
  }
  if ( !v6 )
  {
    v12 = gfInNumpadHexInput;
    if ( (gfInNumpadHexInput & 1) != 0 || (_DWORD)v7 == 78 || (_DWORD)v7 == 83 )
    {
      if ( (v4 & 0x100) != 0 )
      {
LABEL_3:
        gfInNumpadHexInput = v12 & 0xFE;
        return;
      }
      v13 = *(_BYTE *)(SGDGetUserSessionState(v9, v8, v10, v11) + 13996);
      v18 = *(_BYTE *)(SGDGetUserSessionState(v15, v14, v16, v17) + 13996);
      v24 = (2 * (*(_BYTE *)(SGDGetUserSessionState(v20, v19, v21, v22) + 13997) & 4)) | v18 & 1 | (v13 >> 2) & 4;
      v27 = 65526LL;
      if ( ((v24 - 4) & 0xFFF6) != 0 )
      {
        gfInNumpadHexInput &= ~1u;
      }
      else
      {
        LOBYTE(v27) = gfInNumpadHexInput;
        if ( (gfInNumpadHexInput & 1) != 0 )
        {
          if ( ((unsigned __int16)(v7 - 71) > 0xBu || aVkNumpad[v7 - 71] == 0xFF)
            && (unsigned __int8)(v5 - 65) > 5u
            && (unsigned __int8)(v5 - 48) > 9u )
          {
            gfInNumpadHexInput &= ~1u;
          }
        }
        else
        {
          v28 = (4 * (v24 & 1)) | ((*(_BYTE *)(SGDGetUserSessionState(v27, v23, v25, v26) + 13996) & 4 | 2u) >> 1);
          if ( (*(_BYTE *)(SGDGetUserSessionState(v30, v29, v31, v32) + 14014) & 0x40) != 0
            || (*(_BYTE *)(SGDGetUserSessionState(v34, v33, v35, v36) + 14015) & 1) != 0 )
          {
            v37 = 8;
          }
          else
          {
            v37 = 0;
          }
          if ( !(unsigned int)ApiSetEditionIsHotKey(v28 | v37, v5) )
            gfInNumpadHexInput |= 1u;
        }
      }
    }
  }
}
