/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C0010744
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0010120 (UmfdLoadFontFileView.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C000D1C8 (SearchFNTCacheHlink.c)
 *     ReadFileInfo @ 0x1C010B60C (ReadFileInfo.c)
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
  __int64 *v19; // r10
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  struct tagDESIGNVECTOR *v24; // rdx
  bool v25; // zf
  __int64 v26; // r8
  struct PDEV **v27; // rdi
  struct _FONTFILEVIEW **v28; // r14
  unsigned int v29; // edx
  _QWORD *v30; // rcx
  unsigned int v31; // ecx
  struct _FONTFILEVIEW **v33; // rdx
  _QWORD *v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax

  v13 = a5;
  v14 = 0;
  v15 = a9;
  v17 = a8;
  v19 = (__int64 *)qword_1C0335DA8;
  *a3 = 0;
  *v13 = 0LL;
  *v15 = 0;
  *v17 = 0;
  *a4 = 0;
  if ( v19 )
  {
    if ( !a1 )
      return v14;
    v21 = 0;
    if ( a1 )
    {
      v22 = a1;
      do
      {
        v23 = *a2++;
        v21 = v23 + 257 * v21;
        --v22;
      }
      while ( v22 );
    }
    v24 = a12;
    if ( a12 && a13 )
    {
      while ( v24 < (struct tagDESIGNVECTOR *)((char *)a12 + 4 * ((unsigned __int64)a13 >> 2)) )
      {
        v21 = *(_DWORD *)v24 + 257 * v21;
        v24 = (struct tagDESIGNVECTOR *)((char *)v24 + 4);
      }
    }
    v25 = (dword_1C0335DA0 & 1) == 0;
    *a3 = v21;
    if ( v25 )
    {
      if ( (unsigned int)ReadFileInfo(a10, a11) )
        return v14;
    }
    else
    {
      v26 = *v19;
      a5 = 0LL;
      SearchFNTCacheHlink(v21, &a5, v26);
      v27 = a5;
      if ( a5 )
      {
        if ( ((_DWORD)a5[3] & 1) == 0 )
        {
          if ( !a7 && (dword_1C0335DA0 & 4) != 0 )
          {
            *v17 = 1;
            if ( a11 )
            {
              v33 = a10;
              v34 = v27 + 5;
              v35 = a11;
              do
              {
                *((_DWORD *)*v33 + 6) = *((_DWORD *)v34 - 2);
                v36 = *v33++;
                v37 = *v34;
                v34 += 2;
                *v36 = v37;
                --v35;
              }
              while ( v35 );
            }
          }
          else
          {
            v28 = a10;
            if ( (unsigned int)ReadFileInfo(a10, a11) )
            {
              v29 = 0;
              if ( a11 )
              {
                v30 = v27 + 5;
                while ( *((_DWORD *)*v28 + 6) == *((_DWORD *)v30 - 2) && *(_QWORD *)*v28 == *v30 )
                {
                  ++v29;
                  ++v28;
                  v30 += 2;
                  if ( v29 >= a11 )
                    goto LABEL_18;
                }
                v38 = qword_1C0335DA8;
                *a3 = 0;
                *(_DWORD *)(v38 + 16) |= 2u;
                return 0LL;
              }
            }
            else
            {
              *v15 = 1;
            }
          }
LABEL_18:
          *a4 = *((_DWORD *)v27 + 1);
          v14 = 1;
          v31 = *((unsigned __int16 *)v27 + 7);
          *v13 = (struct PDEV *)gaFntPDev[*((unsigned __int16 *)v27 + 6)];
          *a6 = v31;
        }
        return v14;
      }
      if ( (dword_1C0335DA0 & 4) == 0 )
        return v14;
    }
    *v15 = 1;
    return v14;
  }
  return 0LL;
}
