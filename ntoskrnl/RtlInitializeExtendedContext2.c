__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, unsigned int a2, _QWORD *a3, unsigned __int64 a4)
{
  size_t v6; // rbp
  _DWORD *v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  char v13; // si
  _DWORD *v14; // r8
  int v15; // ecx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // r13
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  unsigned __int64 v20; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v6) = 0;
  v21[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags(a2, v21);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x10000) != 0 )
    {
      v16 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v9 = v16 + 179;
      *v16 = a2;
      v16[182] = 716;
    }
    else if ( (a2 & 0x100000) != 0 )
    {
      v11 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = (_DWORD *)(v11 + 1232);
      *(_DWORD *)(v11 + 48) = a2;
      *(_DWORD *)(v11 + 1244) = 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v18 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v18 + 104;
      *v18 = a2;
      v18[107] = 416;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v19 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = v19 + 228;
      *v19 = a2;
      v19[231] = 912;
    }
    v12 = v9[3];
    v9[2] = -v12;
    *v9 = -v12;
    v9[1] = v12 + 32;
    if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
      v9[3] = 204;
    v13 = v21[0];
    v14 = v9 + 8;
    if ( (v21[0] & 2) != 0 )
    {
      v17 = ((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v22 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & a4;
        RtlpRemoveArchDisallowedXStateFeatures(a2, &v22);
        a4 = v22;
      }
      v6 = (unsigned int)RtlpGetEntireXStateAreaLength(a4) - 512;
      memset((void *)(((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v6);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)((((unsigned __int64)v9 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
      v15 = v17 - (_DWORD)v9;
      v14 = (_DWORD *)(v17 + v6);
      v9[1] = v6 + v17 - (_DWORD)v9 - *v9;
    }
    else
    {
      v15 = 33;
    }
    v9[4] = v15;
    v9[5] = v6;
    if ( (v13 & 4) != 0 )
    {
      v20 = ((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_OWORD *)v20 = 0LL;
      *(_QWORD *)(v20 + 16) = 0LL;
      LODWORD(v20) = v20 - (_DWORD)v9;
      v9[6] = v20;
      LODWORD(v20) = v20 - *v9;
      v9[7] = 24;
      v9[1] = v20 + 24;
    }
    *a3 = v9;
    return 0LL;
  }
  return result;
}
