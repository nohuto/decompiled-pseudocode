/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00A71D4
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C00A6BF0 (UmfdLoadFontFileView.c)
 * Callees:
 *     ReadFileInfo @ 0x1C00A683C (ReadFileInfo.c)
 *     SearchFNTCacheHlink @ 0x1C00A7374 (SearchFNTCacheHlink.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct PDEV **a5,
        unsigned int *a6,
        int a7,
        int *a8,
        int *a9,
        struct _FONTFILEVIEW **a10,
        unsigned int a11,
        struct tagDESIGNVECTOR *a12,
        unsigned int a13)
{
  struct PDEV **v13; // r13
  unsigned int v14; // ebx
  int *v15; // rsi
  int *v17; // r14
  __int64 v19; // r11
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  struct tagDESIGNVECTOR *v24; // rdx
  bool v25; // zf
  struct PDEV **v26; // rdi
  struct _FONTFILEVIEW **v27; // r14
  unsigned int v28; // edx
  _QWORD *v29; // rcx
  unsigned int v30; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r9
  struct _FONTFILEVIEW **v35; // rdx
  _QWORD *v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rcx
  __int64 v39; // rax

  v13 = a5;
  v14 = 0;
  v15 = a9;
  v17 = a8;
  v19 = qword_1C033ABE8;
  *a3 = 0;
  *v13 = 0LL;
  *v15 = 0;
  *v17 = 0;
  *a4 = 0;
  if ( v19 )
  {
    if ( !a1 )
      return v14;
    v21 = 0LL;
    if ( a1 )
    {
      v22 = a1;
      do
      {
        v23 = *a2++;
        v21 = (unsigned int)(v23 + 257 * v21);
        --v22;
      }
      while ( v22 );
    }
    v24 = a12;
    if ( a12 && a13 )
    {
      v33 = 0LL;
      v34 = (unsigned __int64)a13 >> 2;
      if ( a12 > (struct tagDESIGNVECTOR *)((char *)a12 + 4 * v34) )
        v34 = 0LL;
      if ( v34 )
      {
        do
        {
          ++v33;
          v21 = (unsigned int)(*(_DWORD *)v24 + 257 * v21);
          v24 = (struct tagDESIGNVECTOR *)((char *)v24 + 4);
        }
        while ( v33 < v34 );
      }
    }
    v25 = (dword_1C033ABE0 & 1) == 0;
    *a3 = v21;
    if ( v25 )
    {
      if ( (unsigned int)ReadFileInfo((__int64 *)a10, a11) )
        return v14;
    }
    else
    {
      a5 = 0LL;
      SearchFNTCacheHlink(v21, &a5);
      v26 = a5;
      if ( a5 )
      {
        if ( ((_DWORD)a5[3] & 1) == 0 )
        {
          if ( !a7 && (dword_1C033ABE0 & 4) != 0 )
          {
            *v17 = 1;
            if ( a11 )
            {
              v35 = a10;
              v36 = v26 + 5;
              v37 = a11;
              do
              {
                *((_DWORD *)*v35 + 6) = *((_DWORD *)v36 - 2);
                v38 = *v35++;
                v39 = *v36;
                v36 += 2;
                *v38 = v39;
                --v37;
              }
              while ( v37 );
            }
          }
          else
          {
            v27 = a10;
            if ( (unsigned int)ReadFileInfo((__int64 *)a10, a11) )
            {
              v28 = 0;
              if ( a11 )
              {
                v29 = v26 + 5;
                while ( *((_DWORD *)*v27 + 6) == *((_DWORD *)v29 - 2) && *(_QWORD *)*v27 == *v29 )
                {
                  ++v28;
                  ++v27;
                  v29 += 2;
                  if ( v28 >= a11 )
                    goto LABEL_18;
                }
                v32 = qword_1C033ABE8;
                *a3 = 0;
                *(_DWORD *)(v32 + 16) |= 2u;
                return 0LL;
              }
            }
            else
            {
              *v15 = 1;
            }
          }
LABEL_18:
          *a4 = *((_DWORD *)v26 + 1);
          v14 = 1;
          v30 = *((unsigned __int16 *)v26 + 7);
          *v13 = (struct PDEV *)gaFntPDev[*((unsigned __int16 *)v26 + 6)];
          *a6 = v30;
        }
        return v14;
      }
      if ( (dword_1C033ABE0 & 4) == 0 )
        return v14;
    }
    *v15 = 1;
    return v14;
  }
  return 0LL;
}
