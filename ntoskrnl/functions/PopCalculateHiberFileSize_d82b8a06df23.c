__int64 __fastcall PopCalculateHiberFileSize(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int8 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned __int64 *v8; // rcx
  __int128 v9; // xmm1
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  __int128 v13; // [rsp+0h] [rbp-28h]
  unsigned __int64 v14; // [rsp+10h] [rbp-18h]

  v4 = 2;
  v5 = *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL);
  v6 = 100;
  if ( (unsigned int)PopHiberFileSizePercent >= 0x28 )
  {
    v6 = PopHiberFileSizePercent;
  }
  else
  {
    v4 = 2;
    if ( (unsigned int)(PopHiberFileType - 1) <= 1 )
      v4 = PopHiberFileType;
    v7 = 0;
    v8 = (unsigned __int64 *)&PopHiberFileBucket;
    while ( 1 )
    {
      v9 = *(_OWORD *)v8;
      v10 = *v8;
      v14 = v8[2];
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&v9 + 1);
      if ( v5 << 12 <= v10 )
        break;
      ++v7;
      v8 += 3;
      if ( v7 >= 7 )
        goto LABEL_10;
    }
    if ( *((_DWORD *)&v13 + v4 + 2) < 0x64u )
      v6 = *((_DWORD *)&v13 + v4 + 2);
  }
LABEL_10:
  v11 = v5 * v6;
  result = 0x47AE147AE147AE15LL * v11;
  *a1 = (v11 / 0x64) << 12;
  if ( a2 )
    *a2 = v4;
  return result;
}
