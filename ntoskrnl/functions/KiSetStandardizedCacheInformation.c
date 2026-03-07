__int64 __fastcall KiSetStandardizedCacheInformation(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r9
  __int64 result; // rax
  int v11; // r10d
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  char v16; // cl
  __int64 v17; // r15
  __int64 v18; // rbx
  _WORD *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rdi
  unsigned int v22; // ecx
  int v23; // r10d
  int v24; // esi
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r14

  v2 = 0;
  v3 = a1 + 34392;
  do
  {
    _RAX = a2;
    __asm { cpuid }
    v11 = _RCX;
    v12 = (int)((_DWORD)result << 27) >> 27;
    if ( !v12 )
      break;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 2 )
            goto LABEL_16;
          *(_DWORD *)(v3 + 8) = 3;
        }
        else
        {
          *(_DWORD *)(v3 + 8) = 0;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 2;
    }
    if ( (result & 0x200) != 0 )
      v16 = -1;
    else
      v16 = ((unsigned int)_RBX >> 22) + 1;
    *(_BYTE *)(v3 + 1) = v16;
    *(_BYTE *)v3 = ((unsigned int)result >> 5) & 7;
    *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
    v17 = 264LL * v2;
    *(_DWORD *)(v3 + 4) = (v11 + 1)
                        * (((unsigned int)_RBX >> 22) + 1)
                        * ((_RBX & 0xFFF) + 1)
                        * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
    v18 = *(unsigned __int8 *)(a1 + 208);
    v19 = (_WORD *)(v17 + a1 + 40632);
    v20 = *(_QWORD *)(a1 + 200);
    if ( *v19 > (unsigned __int16)v18 )
      goto LABEL_10;
    if ( v19[1] > (unsigned __int16)v18 )
    {
      *v19 = v18 + 1;
LABEL_10:
      *(_QWORD *)&v19[4 * v18 + 4] |= v20;
    }
    result = ((unsigned int)result >> 14) & 0xFFF;
    if ( (_DWORD)result )
    {
      v21 = 0LL;
      _BitScanReverse(&v22, 2 * result + 1);
      result = (unsigned int)KeNumberProcessors_0;
      v23 = ~((unsigned __int8)(1 << v22) - 1);
      v24 = v23 & *(_DWORD *)(a1 + 212);
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        do
        {
          v25 = KiProcessorBlock[v21];
          if ( (v23 & *(_DWORD *)(v25 + 212)) != v24 )
            goto LABEL_14;
          v26 = *(unsigned __int8 *)(v25 + 208);
          v27 = *(_QWORD *)(v25 + 200);
          if ( *v19 <= (unsigned __int16)v26 )
          {
            if ( v19[1] <= (unsigned __int16)v26 )
              goto LABEL_20;
            *v19 = v26 + 1;
          }
          *(_QWORD *)&v19[4 * v26 + 4] |= v27;
LABEL_20:
          v28 = *(unsigned __int8 *)(a1 + 208);
          v29 = v17 + v25;
          v30 = *(_QWORD *)(a1 + 200);
          if ( *(_WORD *)(v17 + v25 + 40632) <= (unsigned __int16)v28 )
          {
            if ( *(_WORD *)(v29 + 40634) <= (unsigned __int16)v28 )
              goto LABEL_14;
            *(_WORD *)(v29 + 40632) = v28 + 1;
          }
          *(_QWORD *)(v29 + 8 * v28 + 40640) |= v30;
LABEL_14:
          result = (unsigned int)KeNumberProcessors_0;
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < (unsigned int)KeNumberProcessors_0 );
      }
    }
    v3 += 12LL;
    ++*(_DWORD *)(a1 + 34452);
LABEL_16:
    ++v2;
  }
  while ( *(_DWORD *)(a1 + 34452) < 5u );
  return result;
}
