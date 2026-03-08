/*
 * XREFs of RtlpMuiRegValidateConfigNode @ 0x140677BB8
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x14084413C (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A719B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x140A71DC4 (RtlpMuiRegGetInstalledLanguageIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateConfigNode(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r8
  int InstalledLanguageIndex; // eax
  int v7; // r9d
  unsigned int v8; // ebx
  const signed __int16 *v9; // rdi
  __int16 v10; // bp
  __int16 v11; // r15
  char v12; // r14
  __int16 v13; // r13
  __int16 v14; // r12
  int v15; // r8d
  int v16; // edx
  char v17; // al
  __int16 v18; // r8
  const signed __int16 *v20; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+A0h] [rbp+8h]
  __int16 v22; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v23; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int16 i; // [rsp+B8h] [rbp+20h]

  v21 = a1;
  v3 = a2[1];
  v22 = 0;
  v5 = *a2;
  v23 = -1;
  InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a1, v3 >> 14, v5, &v22);
  v7 = 0;
  v8 = InstalledLanguageIndex;
  if ( InstalledLanguageIndex >= 0 )
  {
    v9 = (const signed __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v22);
    if ( _bittest16(v9, 0xCu) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = (a2[1] >> v11) & 3;
        if ( !v12 )
          break;
        if ( !v9 )
          return (unsigned int)-1073741772;
        v13 = 0;
        v14 = 0;
        v15 = a2[v10 + 3];
        for ( i = a2[v10 + 3]; ; v15 = i )
        {
          v16 = (unsigned __int16)((unsigned __int16)v9[4] >> v14);
          v20 = 0LL;
          LOBYTE(v7) = v16 & 3;
          LOBYTE(v16) = v12;
          v17 = RtlpMuiRegConfigMatchesInstalled(v21, v16, v15, v7, v9[v13 + 6], (__int64)&v20, (__int64)&v23);
          v7 = 0;
          if ( v17 )
          {
            if ( (!v20 || !_bittest16(v20, 0xCu)) && ((*(_BYTE *)v9 & 4) == 0 || v20) )
              break;
          }
          ++v13;
          v14 += 2;
          if ( v14 >= 8 )
            return (unsigned int)-1073741772;
        }
        v18 = v23;
        v9 = v20;
        if ( v23 != -1 )
        {
          a2[1] = (2 << (2 * v10)) | a2[1] & ~(3 << (2 * v10));
          a2[v10 + 3] = v18;
        }
        ++v10;
        v11 += 2;
        if ( v11 >= 6 )
          return v8;
      }
      if ( !v10 )
        return (unsigned int)-1073741823;
    }
  }
  return v8;
}
