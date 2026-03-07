__int64 __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  _BOOL8 v8; // r14
  _QWORD *v9; // rcx
  unsigned int v10; // esi
  _QWORD *v11; // r11
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  char v26; // al
  _DWORD v27[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-48h]
  _QWORD *v30; // [rsp+90h] [rbp+8h]
  unsigned __int64 v31; // [rsp+A8h] [rbp+20h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 16) + 25408 * ((unsigned __int64)a2 >> byte_140C6570D);
  if ( (a3 & 0x400) != 0 )
    v7 = 0;
  else
    v7 = ((a3 & 0x800) != 0) + 1;
  v8 = (a3 & 2) == 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v9 = (_QWORD *)(v6 + 8
                       * (v8 + 2LL * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v5 >> byte_140C6570E)) + 2867));
  else
    v9 = (_QWORD *)(v6 + 22752 + 8LL * ((a3 & 2) == 0));
  if ( *v9 )
  {
    v10 = dword_140C65778;
    v11 = 0LL;
    v12 = v5;
    v30 = 0LL;
    v13 = dword_140C65778 + 1;
    v29 = *(_QWORD *)(a1 + 8 * v8 + 2496) + 88LL * dword_140C6577C * v7;
    v28 = v7;
    v14 = v6 + 16 * (v8 + 2 * (v7 + 702LL));
    v31 = v14;
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 8);
      v17 = (unsigned __int64)(v5 & v10) >> 6;
      v18 = (_QWORD *)(v16 + 8 * v17);
      if ( v11 == v18 )
        goto LABEL_10;
      v30 = (_QWORD *)(v16 + 8 * v17);
      v11 = v30;
      v15 = *v18 & ~((1LL << (v5 & v10 & 0x3F)) - 1);
      if ( (a3 & 0x4000) != 0 )
      {
        v24 = 0LL;
        v25 = (unsigned __int8)v12 & (unsigned __int8)v10 & 0xF;
        do
        {
          v26 = v25;
          v25 += 16;
          v24 |= 1LL << (v26 & 0x3F);
        }
        while ( v25 < 0x40 && v25 <= v10 );
        v23 = ~v24;
      }
      else
      {
        if ( ((v5 & v10 ^ (unsigned __int64)v13) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
          goto LABEL_10;
        v23 = (1LL << (v13 & 0x3F)) - 1;
      }
      v15 &= v23;
LABEL_10:
      v19 = v5 & v10 & 0xFFFFFFC0;
      if ( v15 )
      {
        _BitScanForward64(&v21, v15);
        v15 &= ~(1LL << v21);
        v5 = v21 + v19 + (~v10 & v5);
        if ( v28 == 1 )
        {
          v27[0] = (a3 & 2) == 0;
          v27[1] = v27[0];
          result = MiSlistGetFreePage(a1, v27, v5);
          if ( result )
            return result;
        }
        result = MiGetPerfectColorHeadPage(a1, v29 + 88LL * v5, v5, (a3 & 2) == 0, a3);
        if ( result )
          return result;
        v11 = v30;
      }
      else
      {
        v20 = v19 + 64;
        if ( v20 >= v13 )
        {
          v11 = 0LL;
          v30 = 0LL;
          if ( (v12 & v10) == 0 || v13 != v10 + 1 )
            return 0LL;
          v13 = v12 & v10;
          v5 = v12 & ~v10;
        }
        else
        {
          v5 = v20 + (~v10 & v5);
        }
      }
      v14 = v31;
    }
  }
  return 0LL;
}
