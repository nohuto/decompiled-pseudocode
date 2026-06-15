/*
 * XREFs of sub_180028DAC @ 0x180028DAC
 * Callers:
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_180028DAC(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  unsigned int v11; // edi
  int v12; // esi
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r15
  int v16; // edi
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int64 v20; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( !a4 )
    {
      sub_180067BDC(a6, v6 + 40);
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(a6 + 8) != *(_DWORD *)(v6 + 48) )
      {
        v20 = 277LL;
        goto LABEL_29;
      }
    }
  }
  v11 = 0;
  if ( a2 )
  {
    while ( (unsigned int)sub_1800273F8(a5, (_OWORD *)(a3 + 16LL * v11)) )
    {
      if ( !(unsigned int)sub_1800273F8(a6, (_OWORD *)(a3 + 16LL * v11)) )
      {
        v20 = 283LL;
        goto LABEL_29;
      }
      if ( ++v11 >= a2 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        goto LABEL_4;
      }
    }
    v20 = 282LL;
LABEL_29:
    sub_18004BD84(retaddr, v20, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
    return 2147942414LL;
  }
  else
  {
LABEL_4:
    if ( v6 )
    {
      if ( a4 == 1 )
      {
        v12 = 0;
        if ( *(int *)(v6 + 48) > 0 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 < 0 || v12 >= *(_DWORD *)(v6 + 48) )
            {
              sub_1800BB2C8(3221225612LL);
              __debugbreak();
            }
            v14 = *(_DWORD *)(a6 + 8);
            v15 = *(_QWORD *)(v6 + 40);
            if ( v14 == *(_DWORD *)(a6 + 12) )
            {
              if ( *(_DWORD *)(a6 + 12) )
              {
                v16 = 2 * v14;
                if ( (v14 & 0x40000000) != 0 )
                  goto LABEL_28;
              }
              else
              {
                v16 = 1;
              }
              if ( (unsigned __int64)v16 > 0x7FFFFFF || (v17 = o__recalloc(*(_QWORD *)a6, v16, 16LL)) == 0 )
              {
LABEL_28:
                v20 = 291LL;
                goto LABEL_29;
              }
              *(_QWORD *)a6 = v17;
              v14 = *(_DWORD *)(a6 + 8);
              *(_DWORD *)(a6 + 12) = v16;
            }
            v18 = (_OWORD *)(*(_QWORD *)a6 + 16LL * v14);
            if ( v18 )
            {
              *v18 = *(_OWORD *)(v15 + v13);
              v14 = *(_DWORD *)(a6 + 8);
            }
            ++v12;
            *(_DWORD *)(a6 + 8) = v14 + 1;
            v13 += 16LL;
            v6 = *(_QWORD *)(a1 + 16);
          }
          while ( v12 < *(_DWORD *)(v6 + 48) );
        }
      }
    }
    return 0LL;
  }
}
