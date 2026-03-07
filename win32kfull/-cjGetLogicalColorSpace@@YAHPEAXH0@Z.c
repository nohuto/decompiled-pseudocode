__int64 __fastcall cjGetLogicalColorSpace(void *a1, __int64 a2, char *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r11

  v3 = 0;
  v5 = a2;
  if ( (unsigned int)a2 >= 0x24C )
  {
    if ( a3 )
    {
      LOBYTE(a2) = 9;
      v6 = HmgShareLockCheck(a1, a2);
      if ( v6 )
      {
        *(_DWORD *)a3 = *(_DWORD *)(v6 + 24);
        *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 28);
        *((_DWORD *)a3 + 2) = *(_DWORD *)(v6 + 32);
        *((_DWORD *)a3 + 3) = *(_DWORD *)(v6 + 36);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(v6 + 40);
        *(_OWORD *)(a3 + 20) = *(_OWORD *)(v6 + 44);
        *(_OWORD *)(a3 + 36) = *(_OWORD *)(v6 + 60);
        *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 76);
        *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 80);
        *((_DWORD *)a3 + 15) = *(_DWORD *)(v6 + 84);
        *((_DWORD *)a3 + 16) = *(_DWORD *)(v6 + 88);
        RtlStringCchCopyW((unsigned __int16 *)a3 + 34, 0x104uLL, (size_t *)(v6 + 92));
        if ( v5 < 0x250 )
        {
          v3 = 588;
        }
        else
        {
          v3 = 592;
          *((_DWORD *)a3 + 147) = *(_DWORD *)(v7 + 612);
        }
        DEC_SHARE_REF_CNT(v7);
      }
    }
  }
  return v3;
}
