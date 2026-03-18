/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, __m128i *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 v11; // rax
  DC *v12; // rdx
  int v13; // eax
  int v14; // r10d
  _DWORD *v15; // rcx
  int v16; // r9d
  __m128i v17; // xmm0
  int v18; // r8d
  struct _ENTRY *EntryFromObject; // rax
  __m128i *v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)this,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v5 = *((_QWORD *)gpHandleManager + 2);
  v6 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    v9 = 0LL;
  }
  else
  {
    if ( v4 >= v6 )
    {
      v7 = *(_QWORD *)(v5 + 8LL * (((v4 - v6) >> 16) + 1) + 8);
      v8 = v4 + -65536 * ((v4 - v6) >> 16) - v6;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8);
      v8 = v4;
    }
    v9 = 0LL;
    if ( v8 < *(_DWORD *)(v7 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                   + 16LL * (unsigned __int8)v8
                   + 8) )
    {
      v9 = *(_QWORD *)v7 + 24LL * v8;
    }
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v5,
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v10 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v10 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16)
    || (v4 >= v10
      ? (v11 = *(_QWORD *)(v5 + 8LL * (((v4 - v10) >> 16) + 1) + 8), v4 += -65536 * ((v4 - v10) >> 16) - v10)
      : (v11 = *(_QWORD *)(v5 + 8)),
        v4 >= *(_DWORD *)(v11 + 20)) )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8);
  }
  if ( v12 != this )
    v9 = 0LL;
  if ( (*(_BYTE *)(v9 + 15) & 4) != 0 )
  {
    if ( !a2
      || (v20 = a2,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)&v20),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v20) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_1C02533B0;
    }
    else
    {
      v13 = *((_DWORD *)this + 259);
      v14 = *((_DWORD *)this + 258);
      v15 = (_DWORD *)*((_QWORD *)this + 122);
      v16 = _mm_cvtsi128_si32(_mm_srli_si128(a2[6], 4)) - v13;
      v17 = _mm_srli_si128(a2[6], 12);
      v18 = _mm_srli_si128(a2[6], 8).m128i_u32[0] - v14;
      v15[30] = *(_OWORD *)&a2[6] - v14;
      v15[31] = v16;
      v15[32] = v18;
      v15[33] = _mm_cvtsi128_si32(v17) - v13;
    }
    EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
