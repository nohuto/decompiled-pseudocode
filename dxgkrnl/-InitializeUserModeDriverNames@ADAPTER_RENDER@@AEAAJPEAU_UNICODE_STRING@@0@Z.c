/*
 * XREFs of ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0204F2C
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C001F920 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 Length; // r11
  unsigned int v5; // ebx
  const unsigned __int16 *v7; // r14
  unsigned __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // esi
  int v12; // eax
  unsigned __int64 v13; // r11
  struct _UNICODE_STRING v15; // [rsp+20h] [rbp-28h]
  unsigned __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0;
  v16 = 0LL;
  *(_DWORD *)(&v15.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( !Length )
      return v10;
    v7 += v9 >> 1;
    v15.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &v16);
    v10 = v12;
    if ( v12 < 0 )
      break;
    v9 = v16;
    v15.Length = v16;
    if ( v13 > v16 )
    {
      v9 = v16 + 2;
      v16 += 2LL;
    }
    v15.MaximumLength = v9;
    ++v11;
    Length = v13 - (unsigned __int16)v9;
    *a3++ = v15;
    if ( v11 >= 6 )
      return v10;
  }
  WdLogSingleEntry3(3LL, v11, *((_QWORD *)this + 2), v12);
  if ( !v11 )
    return v10;
  return v5;
}
