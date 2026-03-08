/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801FC838
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801FCBC0 (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801FC9E0 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x180202078 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPDrawListEntryParams *a2)
{
  const __m128i *v4; // rax
  __m128 v5; // xmm2
  float *v6; // rax
  __int64 v7; // rdx
  char *v8; // r8
  char *v9; // r9
  float v10; // xmm0_4
  float v12[3]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+2Ch] [rbp-1Ch]

  CDrawListEntry::CDrawListEntry(this, a2);
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable'{for `CDrawListEntry'};
  *((_QWORD *)this + 8) = &CWARPDrawListEntry::`vftable'{for `CRenderingEffect'};
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 40);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 15);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_BYTE *)this + 272) = *((_BYTE *)a2 + 240);
  *((_BYTE *)this + 273) = *((_BYTE *)a2 + 241);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 4);
  v4 = (const __m128i *)*((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = (__m128)_mm_loadu_si128(v4 + 4);
    v6 = (float *)*((_QWORD *)a2 + 3);
    v7 = 4LL;
    v8 = (char *)(this - (CWARPDrawListEntry *)v6);
    v9 = (char *)((char *)v12 - (char *)v6);
    v13 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v12[0] = v13 * v5.m128_f32[0];
    v12[2] = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] * v13;
    v12[1] = _mm_shuffle_ps(v5, v5, 85).m128_f32[0] * v13;
    do
    {
      v10 = *(float *)((char *)v6 + (_QWORD)v9) * *v6;
      *(float *)((char *)++v6 + (_QWORD)v8 + 92) = v10;
      --v7;
    }
    while ( v7 );
  }
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 112, (char *)a2 + 80);
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 192, (char *)a2 + 160);
  return this;
}
