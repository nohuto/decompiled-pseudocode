/*
 * XREFs of sub_18003E040 @ 0x18003E040
 * Callers:
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 * Callees:
 *     _o_powf @ 0x18011E076 (_o_powf.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

__int64 __fastcall sub_18003E040(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  float v6; // xmm6_4
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 64);
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 36) = 1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        *(_DWORD *)(a2 + 4) = 1;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 3;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 2;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      *(_DWORD *)a2 = 2;
  }
  else
  {
    *(_DWORD *)a2 = 3;
  }
  v6 = *(float *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( dword_180218870 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                     + 44LL) )
    {
      Init_thread_header(&dword_180218870);
      if ( dword_180218870 == -1 )
      {
        dword_18021886C = o_powf();
        Init_thread_footer(&dword_180218870);
      }
    }
    v6 = *(float *)&dword_18021886C * v6;
  }
  *(_DWORD *)(a2 + 12) = (int)v6;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  result = *(unsigned __int8 *)(a1 + 60);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
