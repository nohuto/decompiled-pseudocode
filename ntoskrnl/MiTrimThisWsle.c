/*
 * XREFs of MiTrimThisWsle @ 0x1403493EC
 * Callers:
 *     MiTrimPteWorker @ 0x140349308 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiGetVaAge @ 0x140349610 (MiGetVaAge.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4, unsigned __int8 a5, _DWORD *a6)
{
  __int64 v10; // rdi
  int v11; // ebx
  unsigned int VaAge; // r9d
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned __int64 v15; // r10
  int v16; // ecx
  __int64 v17; // rax
  int *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r10
  __int64 v23; // r11

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  v11 = *a4;
  VaAge = (unsigned __int8)MiGetVaAge(a1, a2);
  LOWORD(v13) = 1;
  if ( (v11 & 0x600) != 0 )
  {
    v22 = *(_QWORD *)(a3 + 40);
    if ( v22 >= 0 )
      goto LABEL_38;
    if ( (v11 & 0x200) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
    {
      v23 = *(_QWORD *)(a3 + 8);
      if ( v23 >= 0 && (v22 & 0x10000000000LL) == 0 && v23
        || MiLocateCloneAddress(a1 - 1664, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
      {
        return 1LL;
      }
      LOWORD(v13) = 1;
    }
    if ( (v11 & 0x400) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
    {
LABEL_38:
      v15 = 0x7FFFFFFEFFFFLL;
      goto LABEL_7;
    }
  }
  else
  {
    v14 = v11 & 0xF;
    if ( v14 && (unsigned int)MiGetPfnPriority(a3) >= 5 )
    {
      if ( VaAge < v14 )
        goto LABEL_7;
      if ( ((unsigned __int8)v13 & a5) != 0 )
      {
        if ( *((_QWORD *)a4 + 31) && a2 <= v15 && a6 )
        {
          *a6 = v13;
          return 0LL;
        }
LABEL_7:
        v16 = 2;
        if ( ((unsigned __int8)v13 & a5) != 0 )
        {
          if ( a2 > v15 || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624) || !a6 )
          {
            v17 = 2LL;
            if ( VaAge && VaAge < 7 )
            {
              v16 = 0;
              v17 = 0LL;
            }
            if ( v16 == 2 )
              return 0LL;
            goto LABEL_18;
          }
        }
        else if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != (_WORD)v13 )
        {
          return 0LL;
        }
        if ( VaAge < 6 && (unsigned int)MiGetPfnPriority(a3) < 5 )
        {
          v17 = v13;
LABEL_18:
          v19 = &a4[20 * v17];
          if ( !*((_BYTE *)v19 + 328) )
          {
            *((_BYTE *)v19 + 328) = v13;
            *((_QWORD *)v19 + 40) = a2;
          }
          v20 = (unsigned __int64)(((unsigned int)v10 >> 3) & 0x1FF) >> 3;
          v21 = *((char *)v19 + v20 + 256);
          _bittestandset(&v21, ((unsigned int)v10 >> 3) & 7);
          *((_BYTE *)v19 + v20 + 256) = v21;
        }
        return 0LL;
      }
    }
  }
  return 1LL;
}
