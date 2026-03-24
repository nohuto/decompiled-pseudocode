/*
 * XREFs of ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C018783C
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01869A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00229EC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
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
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  _QWORD *v18; // rax
  struct _UNICODE_STRING v19; // [rsp+20h] [rbp-28h]
  unsigned __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0;
  v20 = 0LL;
  *(_DWORD *)(&v19.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v9 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( !Length )
      return (unsigned int)v10;
    v7 += v9 >> 1;
    v19.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &v20);
    v10 = v12;
    if ( v12 < 0 )
      break;
    v9 = v20;
    v19.Length = v20;
    if ( v16 > v20 )
    {
      v9 = v20 + 2;
      v20 += 2LL;
    }
    v19.MaximumLength = v9;
    ++v11;
    Length = v16 - (unsigned __int16)v9;
    *a3++ = v19;
    if ( v11 >= 4 )
      return (unsigned int)v10;
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
  v18[3] = v11;
  v18[4] = *((_QWORD *)this + 2);
  v18[5] = v10;
  WdLogEvent5_WdWarning(v18);
  if ( !v11 )
    return (unsigned int)v10;
  return v5;
}
