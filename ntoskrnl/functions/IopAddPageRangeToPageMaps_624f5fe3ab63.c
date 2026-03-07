void __fastcall IopAddPageRangeToPageMaps(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int128 v9; // xmm0
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // edi
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  RtlSetBitsEx((__int64)a2, a3, a4);
  if ( a1 )
  {
    if ( (a5 & 0xFF0) != 0 )
    {
      v9 = *a2;
      v10 = 56;
      v11 = (unsigned __int8)(a5 >> 4);
      v12 = (((unsigned __int64)(*(_QWORD *)(a1 + 48) + 7LL) >> 3) + 7) & 0xFFFFFFF8;
      for ( v13[0] = v9; v11; v11 >>= 1 )
      {
        v10 += v12;
        if ( v10 + v12 > (unsigned __int64)(*(_QWORD *)(a1 + 32) - 0x2000LL) )
          break;
        *((_QWORD *)&v13[0] + 1) = a1 + v10;
        if ( (v11 & 1) != 0 )
        {
          RtlSetBitsEx((__int64)v13, a3, a4);
        }
        else if ( (v11 & 0x10) != 0 )
        {
          RtlClearBitsEx((__int64)v13, a3, a4);
          v11 &= ~0x10u;
        }
      }
    }
  }
}
