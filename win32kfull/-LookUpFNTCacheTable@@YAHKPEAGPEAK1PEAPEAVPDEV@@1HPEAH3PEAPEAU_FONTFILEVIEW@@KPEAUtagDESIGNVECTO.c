/*
 * XREFs of ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C0118A8C
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C011859C (UmfdLoadFontFileView.c)
 * Callees:
 *     ReadFileInfo @ 0x1C00DF234 (ReadFileInfo.c)
 *     SearchFNTCacheHlink @ 0x1C0116040 (SearchFNTCacheHlink.c)
 */

__int64 __fastcall LookUpFNTCacheTable(
        Gre::Base *a1,
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
  unsigned int v13; // ebx
  int *v14; // r14
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // ecx
  __int64 v22; // rdx
  int v23; // eax
  struct tagDESIGNVECTOR *v24; // rdx
  int v25; // esi
  __int64 *v26; // r8
  int *v27; // rdi
  struct _FONTFILEVIEW **v28; // rsi
  unsigned int v29; // ebp
  unsigned int v30; // edx
  _QWORD *v31; // rcx
  struct _FONTFILEVIEW **v33; // rdx
  _QWORD *v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rcx
  __int64 v37; // rax

  v13 = 0;
  v14 = a9;
  *a3 = 0;
  *a5 = 0LL;
  *v14 = 0;
  *a8 = 0;
  v18 = (unsigned int)a1;
  *a4 = 0;
  Gre::Base::Globals(a1);
  v20 = *(_QWORD *)(SGDGetSessionState(v19) + 32);
  if ( *(_QWORD *)(v20 + 19392) )
  {
    if ( !v18 )
      return v13;
    v21 = 0;
    v22 = v18;
    do
    {
      v23 = *a2++;
      v21 = v23 + 257 * v21;
      --v22;
    }
    while ( v22 );
    v24 = a12;
    if ( a12 && a13 )
    {
      while ( v24 < (struct tagDESIGNVECTOR *)((char *)a12 + 4 * ((unsigned __int64)a13 >> 2)) )
      {
        v21 = *(_DWORD *)v24 + 257 * v21;
        v24 = (struct tagDESIGNVECTOR *)((char *)v24 + 4);
      }
    }
    *a3 = v21;
    v25 = *(_DWORD *)(v20 + 19384);
    if ( (v25 & 1) != 0 )
    {
      v26 = *(__int64 **)(v20 + 19392);
      a9 = 0LL;
      SearchFNTCacheHlink(v21, &a9, *v26);
      v27 = a9;
      if ( a9 )
      {
        if ( (a9[6] & 1) == 0 )
        {
          if ( !a7 && (v25 & 4) != 0 )
          {
            *a8 = 1;
            if ( a11 )
            {
              v33 = a10;
              v34 = v27 + 10;
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
            v29 = a11;
            if ( (unsigned int)ReadFileInfo((__int64 *)a10, a11) )
            {
              v30 = 0;
              if ( v29 )
              {
                v31 = v27 + 10;
                while ( *((_DWORD *)*v28 + 6) == *((_DWORD *)v31 - 2) && *(_QWORD *)*v28 == *v31 )
                {
                  ++v30;
                  ++v28;
                  v31 += 2;
                  if ( v30 >= v29 )
                    goto LABEL_17;
                }
                *a3 = 0;
                *(_DWORD *)(*(_QWORD *)(v20 + 19392) + 16LL) |= 2u;
                return 0LL;
              }
            }
            else
            {
              *v14 = 1;
            }
          }
LABEL_17:
          v13 = 1;
          *a4 = v27[1];
          *a5 = *(struct PDEV **)(v20 + 8LL * *((unsigned __int16 *)v27 + 6) + 19416);
          *a6 = *((unsigned __int16 *)v27 + 7);
        }
        return v13;
      }
      if ( (v25 & 4) == 0 )
        return v13;
    }
    else if ( (unsigned int)ReadFileInfo((__int64 *)a10, a11) )
    {
      return v13;
    }
    *v14 = 1;
    return v13;
  }
  return 0LL;
}
