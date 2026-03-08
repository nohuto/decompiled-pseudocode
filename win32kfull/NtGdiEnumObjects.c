/*
 * XREFs of NtGdiEnumObjects @ 0x1C02D5100
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEnumObjects(HDC a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // rbx
  SIZE_T v5; // r12
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  char *v11; // r8
  int v12; // r15d
  char *i; // rcx
  unsigned int *j; // rcx
  char *k; // rdx
  unsigned int *m; // rcx
  char *n; // rdx
  _QWORD v19[3]; // [rsp+48h] [rbp-30h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = 0;
  if ( (a3 == 0) != (a4 == 0LL) )
    return v7;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( !v19[0] )
  {
LABEL_38:
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return v7;
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v19[0] + 48LL) + 2136LL);
  if ( v8 )
  {
    v9 = 20;
    if ( v8 < 0x14 )
    {
      if ( v8 < 0x10 )
      {
        v9 = 8;
        if ( v8 < 8 )
        {
          v9 = *(_DWORD *)(*(_QWORD *)(v19[0] + 48LL) + 2136LL);
          if ( v8 >= 2 )
            v9 = 2;
        }
      }
      else
      {
        v9 = 16;
      }
    }
    if ( a2 == 1 )
    {
      v10 = (unsigned int)v5 >> 4;
      if ( 0xFFFFFFFF / v9 >= 5 )
        v7 = 5 * v9;
      goto LABEL_17;
    }
    if ( a2 == 2 )
    {
      v10 = (unsigned int)v5 >> 4;
      if ( 0xFFFFFFFF / v9 >= 7 )
        v7 = 7 * v9;
LABEL_17:
      if ( v10 < v7 )
      {
        if ( v10 )
          v7 = 0;
      }
      else
      {
        ProbeForWrite(v4, v5, 4u);
        v11 = (char *)&unk_1C032AC50 + 4 * v9;
        v12 = a2 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            for ( i = (char *)&unk_1C032AC50; i < v11; i += 4 )
            {
              *v4 = 0;
              v4[1] = *(_DWORD *)i;
              *((_QWORD *)v4 + 1) = 0LL;
              v4 += 4;
            }
            for ( j = (unsigned int *)&unk_1C032AC20; j < dword_1C032AC38; ++j )
            {
              for ( k = (char *)&unk_1C032AC50; k < v11; k += 4 )
              {
                *v4 = 2;
                v4[1] = *(_DWORD *)k;
                *((_QWORD *)v4 + 1) = *j;
                v4 += 4;
              }
            }
          }
        }
        else
        {
          for ( m = dword_1C032AC38; m < &dword_1C032AC4C; ++m )
          {
            for ( n = (char *)&unk_1C032AC50; n < v11; n += 4 )
            {
              v4[1] = 0;
              v4[2] = 0;
              *v4 = *m;
              v4[3] = *(_DWORD *)n;
              v4 += 4;
            }
          }
        }
      }
      goto LABEL_38;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return 0LL;
}
