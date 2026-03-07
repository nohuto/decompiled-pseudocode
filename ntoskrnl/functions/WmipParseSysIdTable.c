__int64 __fastcall WmipParseSysIdTable(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // edi
  char *v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  char *v16; // rbp
  unsigned int v17; // edx
  __int64 v18; // rsi
  int v19; // r8d
  char v20; // cl
  _BYTE *v21; // rax
  __int64 v22; // rdx
  unsigned int v24; // [rsp+20h] [rbp-58h]
  unsigned int v25; // [rsp+24h] [rbp-54h]
  int v26; // [rsp+28h] [rbp-50h]
  char *v27; // [rsp+30h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-40h]

  v6 = 25 * a2;
  NumberOfBytes = 25 * a2;
  v10 = (char *)MmMapIoSpaceEx(a1, NumberOfBytes, 4u);
  v27 = v10;
  if ( v10 )
  {
    v11 = *a4;
    v12 = 0;
    v13 = 0;
    v26 = 0;
    v14 = 0;
    v16 = v10;
    v25 = v11;
    v17 = *a6;
    v24 = *a6;
    if ( a2 )
    {
      while ( v6 >= 0xA )
      {
        v18 = *(unsigned __int16 *)(v16 + 7);
        if ( RtlCompareMemory(v16, "_UUID_", 6uLL) == 6 && (_DWORD)v18 == 25 )
        {
          v19 = 1;
        }
        else
        {
          if ( RtlCompareMemory(v16, "_1394_", 6uLL) != 6 || (_DWORD)v18 != 17 )
          {
LABEL_25:
            v17 = v24;
LABEL_26:
            v11 = v25;
            break;
          }
          v19 = 2;
        }
        if ( v6 < (unsigned int)v18 )
          goto LABEL_25;
        v20 = 0;
        v21 = v16;
        v22 = v18;
        do
        {
          v20 += *v21++;
          --v22;
        }
        while ( v22 );
        if ( v20 )
          goto LABEL_25;
        if ( v19 == 1 )
        {
          v11 = v25;
          v17 = v24;
          if ( v6 < 0x19 )
            break;
          ++v12;
          if ( a3 && v25 >= v12 )
            *a3++ = *(_OWORD *)(v16 + 9);
        }
        else
        {
          v17 = v24;
          if ( v6 < 0x11 )
            goto LABEL_26;
          v11 = v25;
          ++v14;
          if ( a5 && v24 >= v14 )
            *a5++ = *(_QWORD *)(v16 + 9);
        }
        v16 += v18;
        v6 -= v18;
        if ( ++v26 >= a2 )
          goto LABEL_28;
      }
      v13 = -1073741823;
LABEL_28:
      v10 = v27;
    }
    *a4 = v12;
    *a6 = v14;
    if ( a3 && v11 < v12 || a5 && v17 < v14 )
      v13 = -1073741789;
    MmUnmapIoSpace(v10, NumberOfBytes);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
