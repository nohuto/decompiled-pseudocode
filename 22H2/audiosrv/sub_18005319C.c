/*
 * XREFs of sub_18005319C @ 0x18005319C
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_18005319C(__int64 a1, void *pvData)
{
  unsigned int v2; // edi
  const WCHAR *v3; // r8
  DWORD v4; // eax
  LSTATUS ValueW; // eax
  signed int v6; // ebx
  unsigned int v7; // r10d
  bool v8; // dl
  _WORD *v9; // r9
  int v10; // eax
  __int64 v11; // r8
  _WORD *v12; // rdx
  int v14; // edx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  DWORD Size; // [rsp+60h] [rbp+20h]
  DWORD pcbData; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  Size = 0;
  if ( pvData == &unk_18019F078 )
  {
    v3 = L"Render";
    v4 = 600;
  }
  else if ( pvData == &unk_18019F2D0 )
  {
    v3 = L"Capture";
    v4 = 400;
  }
  else
  {
    if ( pvData != &unk_18019F460 )
    {
      v6 = -2147024809;
      v14 = 409;
      goto LABEL_25;
    }
    v3 = L"UnknownStream";
    v4 = 200;
  }
  Size = v4;
  pcbData = v4;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_18019F528, v3, 8u, 0LL, pvData, &pcbData);
  v6 = ValueW;
  if ( (ValueW & 0xFFFFFFFD) != 0 )
  {
    if ( ValueW > 0 )
      v6 = (unsigned __int16)ValueW | 0x80070000;
    if ( v6 >= 0 )
      goto LABEL_26;
    v14 = 414;
LABEL_25:
    sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v6);
LABEL_26:
    v2 = v6;
    memset(pvData, 0, Size);
    return v2;
  }
  if ( pcbData != Size )
  {
    v6 = -2147418113;
    v14 = 420;
    goto LABEL_25;
  }
  v7 = 0;
  v8 = 0;
  if ( Size / 0xC8 )
  {
    v9 = pvData;
    while ( !v8 )
    {
      v10 = 0;
      v11 = 0LL;
      v12 = v9;
      do
      {
        if ( !*v12 )
          break;
        ++v10;
        ++v11;
        ++v12;
      }
      while ( v11 <= 70 );
      ++v7;
      v9 += 100;
      v8 = v10 > 70;
      if ( v7 >= Size / 0xC8 )
      {
        if ( v10 <= 70 )
          return v2;
        break;
      }
    }
    v6 = -2147418113;
    v14 = 438;
    goto LABEL_25;
  }
  return v2;
}
