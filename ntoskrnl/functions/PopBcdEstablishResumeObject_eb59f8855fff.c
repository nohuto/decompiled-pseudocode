__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  int ElementDataWithFlags; // edi
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  int v10; // eax
  __int16 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  v11 = 0;
  v15 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v13);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v12 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(v13, 587202563, v6, (unsigned int)&v16, (__int64)&v12);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, &v16, &v14);
    v3 = v14;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v14, 1, (__int64)&v15, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (HIDWORD(v15) & 0xF0000000) == 0x10000000
          && (HIDWORD(v15) & 0xF00000) == 0x200000
          && (HIDWORD(v15) & 0xFFFFF) == 4 )
        {
          v12 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 637534211, v8, (unsigned int)&v11, (__int64)&v12);
          if ( ElementDataWithFlags < 0 || !(_BYTE)v11 )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, v13);
          goto LABEL_10;
        }
        ElementDataWithFlags = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v14 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(a1, v13, &v14);
    v3 = v14;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( v13 )
    BcdCloseObject(v13);
  if ( ElementDataWithFlags < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementDataWithFlags;
  }
  else if ( a2 )
  {
    *a2 = v3;
    return (unsigned int)ElementDataWithFlags;
  }
  BcdCloseObject(v3);
  return (unsigned int)ElementDataWithFlags;
}
