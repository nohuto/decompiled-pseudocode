__int64 __fastcall RtlValidateRetpolineRelocation(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  char v8; // bp
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r9
  unsigned int v14; // edi
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax

  v8 = 0;
  v9 = *(_DWORD *)(a1 + 8) + 12;
  v12 = (unsigned int)RtlSizeOfRetpolineRelocationEntry(*(_QWORD *)a1);
  v13 = v10;
  v14 = v10;
  if ( v9 <= v11 )
  {
LABEL_14:
    *a4 = v14;
  }
  else
  {
    while ( 1 )
    {
      v15 = v11 + 8LL;
      if ( v15 < v11 )
        break;
      if ( v15 > v9 )
        break;
      v16 = *(unsigned int *)(v11 + a1 + 4);
      if ( (unsigned int)v16 < 8 )
        break;
      v17 = v16 + v11;
      if ( (unsigned int)v16 + v11 < v11 )
        break;
      if ( v17 > v9 )
        break;
      v18 = *(unsigned int *)(v11 + a1);
      if ( (unsigned int)v18 >= a2 || (unsigned int)v18 < a3 || (v18 & 0xFFF) != 0 || v8 && v18 <= v13 )
        break;
      if ( (v16 - 8) % v12 )
        break;
      v8 = 1;
      v13 = (unsigned int)v18;
      v11 += v16;
      v14 += (v16 - 8) / v12;
      if ( v17 >= v9 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741701;
  }
  return v10;
}
