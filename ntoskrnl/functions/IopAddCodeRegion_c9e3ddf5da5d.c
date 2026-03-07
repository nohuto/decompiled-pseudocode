__int64 __fastcall IopAddCodeRegion(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  char *v6; // rsi
  ULONGLONG v7; // r15
  unsigned int v8; // r10d
  char v9; // r11
  ULONGLONG v10; // r12
  PVOID *v11; // r14
  __int64 v12; // rbx
  char *v13; // rbp
  __int64 v14; // rax
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // edi
  ULONGLONG pullResult[11]; // [rsp+20h] [rbp-58h] BYREF
  char v22; // [rsp+88h] [rbp+10h]
  unsigned int v23; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+20h]

  pullResult[0] = 0LL;
  v23 = 4112;
  v3 = a2;
  v24 = (a2 + 7) & 0xFFFFFFF8;
  v4 = a1;
  v22 = 0;
  v6 = 0LL;
  v7 = -1LL;
  IopValidateSectionSize(v24, &v23);
  v10 = *(_QWORD *)(v4 + 248);
  v11 = (PVOID *)PsLoadedModuleList;
  if ( v23 > 0x10 )
  {
    v12 = v23 - 16;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      do
      {
        v13 = (char *)v11[6];
        if ( v10 >= (unsigned __int64)v13 && v10 < (unsigned __int64)&v13[*((unsigned int *)v11 + 38)] )
        {
          v14 = RtlImageNtHeader((__int64)v11[6]);
          if ( !v14 )
            return v3;
          v15 = (unsigned int *)(v14 + *(unsigned __int16 *)(v14 + 20) + 24LL);
          v16 = &v15[10 * *(unsigned __int16 *)(v14 + 6)];
          while ( 1 )
          {
            if ( v15 >= v16 )
            {
              v9 = v22;
              goto LABEL_12;
            }
            v6 = &v13[v15[3]];
            v7 = (ULONGLONG)&v6[v15[2]];
            if ( v10 >= (unsigned __int64)v6 && v10 < v7 )
              break;
            v15 += 10;
          }
          if ( (v15[9] & 0x2000000) != 0 )
            return v3;
          v9 = 1;
          v22 = 1;
        }
LABEL_12:
        v11 = (PVOID *)*v11;
      }
      while ( v11 != &PsLoadedModuleList );
      v8 = v24;
      v4 = a1;
    }
    if ( v9 )
    {
      v17 = (unsigned __int64)(unsigned int)v12 >> 1;
      if ( *(_QWORD *)(v4 + 248) - v17 + 1 >= (unsigned __int64)v6 )
        v6 = (char *)(*(_QWORD *)(v4 + 248) - v17 + 1);
      if ( (unsigned __int64)&v6[v12] <= v7
        || RtlULongLongSub(v7, (ULONGLONG)v6, pullResult) >= 0
        && (LODWORD(v12) = pullResult[0], pullResult[0] <= 0xFFFFFFFF) )
      {
        if ( (_DWORD)v12 )
        {
          a3[1038] |= 0x800u;
          v18 = (v8 + 23) & 0xFFFFFFF8;
          a3[2078] = v8;
          a3[2079] = 1;
          *(_QWORD *)((char *)a3 + v8) = v6;
          *(_DWORD *)((char *)a3 + v8 + 12) = v12;
          *(_DWORD *)((char *)a3 + v8 + 8) = v18;
          memmove((char *)a3 + v18, v6, (unsigned int)v12);
          return (unsigned int)v12 + v18;
        }
      }
    }
  }
  return v3;
}
