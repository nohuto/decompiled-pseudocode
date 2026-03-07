__int64 __fastcall HalpNumaParseHmat(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  size_t v6; // rdi
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  int *v14; // r13
  __int64 v15; // rax
  void *Base; // [rsp+20h] [rbp-48h]
  _QWORD *v18; // [rsp+70h] [rbp+8h]
  unsigned __int16 v19; // [rsp+80h] [rbp+18h] BYREF

  v4 = HalpAcpiHmat;
  v19 = 0;
  v6 = a3;
  Base = 0LL;
  v8 = 0LL;
  v9 = 8;
  if ( a3 )
  {
    if ( a3 < 8 )
    {
LABEL_3:
      v10 = -1073741789;
LABEL_24:
      memset(a2, 0, v6);
      if ( a4 )
        *a4 = v6;
      return v10;
    }
    *a2 = 0LL;
    v8 = a2 + 1;
    Base = a2 + 1;
  }
  v11 = 0;
  v12 = v4 + *(unsigned int *)(v4 + 4);
  v13 = v4 + 40;
  v14 = (int *)(v13 + 8);
  if ( v13 + 8 <= v12 )
  {
    v18 = v8 + 1;
    do
    {
      v15 = *(unsigned int *)(v13 + 4);
      if ( (unsigned int)v15 < 8 || v13 + v15 > v12 )
        break;
      if ( !(unsigned __int8)HalpVerifyHmatEntryValidity(v13) )
        goto LABEL_23;
      if ( *(_WORD *)v13 == 2 )
      {
        if ( (int)HalpNumaQueryProximityNode(*v14, &v19) < 0 )
        {
LABEL_23:
          v10 = -1073741216;
          if ( !(_DWORD)v6 )
            return v10;
          goto LABEL_24;
        }
        v9 += 40;
        if ( (_DWORD)v6 )
        {
          if ( (unsigned int)v6 < v9 )
            goto LABEL_3;
          ++v11;
          *(_OWORD *)(v18 - 1) = 0LL;
          *(_OWORD *)(v18 + 1) = 0LL;
          v18[3] = 0LL;
          *((_DWORD *)v18 - 2) = v19;
          *((_DWORD *)v18 - 1) = *v14;
          *v18 = *(_QWORD *)(v13 + 16);
          *((_DWORD *)v18 + 2) = *(_DWORD *)(v13 + 24) & 0xF;
          *((_DWORD *)v18 + 3) = (*(_DWORD *)(v13 + 24) >> 4) & 0xF;
          *((_DWORD *)v18 + 4) = (*(_DWORD *)(v13 + 24) >> 8) & 0xF;
          *((_DWORD *)v18 + 5) = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 24)) >> 4;
          *((_DWORD *)v18 + 6) = *(unsigned __int16 *)(v13 + 26);
          v18 += 5;
        }
      }
      v13 += *(unsigned int *)(v13 + 4);
      v14 = (int *)(v13 + 8);
    }
    while ( v13 + 8 <= v12 );
  }
  if ( a4 )
    *a4 = v9;
  if ( (_DWORD)v6 )
  {
    *(_DWORD *)a2 = v11;
    if ( v11 > 1 )
      qsort(Base, v11, 0x28uLL, (int (__cdecl *)(const void *, const void *))HalpNumaCompareMemorySideCacheEntries);
  }
  return 0;
}
