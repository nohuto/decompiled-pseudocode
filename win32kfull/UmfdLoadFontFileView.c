__int64 __fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10,
        unsigned int *a11,
        int a12,
        int *a13)
{
  unsigned int v15; // esi
  __int64 result; // rax
  unsigned int *v17; // r13
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  char v23; // bl
  __int64 v24; // rcx
  Gre::Base *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  char v30; // r15
  unsigned int v31; // r14d
  int v32; // edi
  int v33; // r13d
  __int64 v34; // rdx
  struct _FONTFILEVIEW **v35; // rcx
  unsigned int j; // edi
  int IsPathInSystemFontsDir; // eax
  __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  int v41; // edx
  int v42; // edx
  unsigned int v43; // ebx
  struct _FONTFILEVIEW **v44; // rdi
  __int64 v45; // rax
  int v46; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v47; // [rsp+7Ch] [rbp-55h] BYREF
  int v48; // [rsp+80h] [rbp-51h] BYREF
  struct PDEV *v49; // [rsp+88h] [rbp-49h] BYREF
  __int64 i; // [rsp+90h] [rbp-41h] BYREF
  _QWORD v51[14]; // [rsp+98h] [rbp-39h] BYREF
  struct _FONTFILEVIEW **v52; // [rsp+128h] [rbp+57h] BYREF
  unsigned int v53; // [rsp+130h] [rbp+5Fh] BYREF

  v53 = a4;
  v52 = a3;
  v15 = 0;
  result = UmfdHostLifeTimeManager::EnsureUmfdHost();
  *a9 = 0LL;
  *a10 = 0LL;
  if ( (_BYTE)result )
  {
    v17 = a11;
    v49 = 0LL;
    v47 = 0;
    v48 = 0;
    v46 = 0;
    result = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v49, &v47, a12, &v46, &v48, v52, v53, a7, a8);
    v19 = result;
    if ( a13 )
    {
      v18 = (unsigned int)v46;
      *a13 = v46;
    }
    if ( !v48 )
    {
      v20 = SGDGetSessionState(v18);
      v21 = v53;
      v22 = 0;
      v23 = 1;
      for ( i = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 23448LL); v22 < v53; v21 = v53 )
      {
        v24 = v22++;
        *((_DWORD *)v52[v24] + 16) = 0;
      }
      UmfdInsertFontFileViewForLookup(v52, v21);
      v51[0] = &i;
      v51[1] = &a7;
      v51[2] = &v53;
      v51[3] = &v52;
      v51[4] = &a5;
      v51[5] = &a6;
      v51[6] = Gre::Base::Globals(v25);
      if ( v19 )
      {
        if ( v47 == 1 || (v30 = 1, !a1) )
          v30 = 0;
        v31 = *v17;
        v32 = 0;
        v33 = v46;
        if ( v46 && v30 )
        {
          v39 = FNTCacheValidateFntFileInfo(v52, v53);
          v32 = v39;
          if ( v39 == 1 )
          {
            v31 = 0;
          }
          else if ( v39 == 2 )
          {
            goto LABEL_9;
          }
        }
        LOBYTE(v26) = v30;
        v29 = lambda_609c7463f0af8f0b222c22162fb8f533_::operator()(v51, v26, v31);
        if ( v29 )
        {
          for ( j = 0; j < v53; ++j )
          {
            v35 = (struct _FONTFILEVIEW **)v52[j];
            *((_DWORD *)v35 + 10) |= 8u;
            if ( !v30 )
            {
              IsPathInSystemFontsDir = bIsPathInSystemFontsDir(*((wchar_t **)v52[j] + 10));
              v35 = v52;
              *((_DWORD *)v52[j] + 10) ^= (*((_DWORD *)v52[j] + 10) ^ (16 * IsPathInSystemFontsDir)) & 0x10;
            }
          }
        }
        else
        {
          if ( v47 != 1 || !a1 )
            v23 = 0;
          if ( v33 && v23 )
            v32 = FNTCacheValidateFntFileInfo(v52, v53);
          if ( v32 == 2 )
            goto LABEL_9;
          LOBYTE(v34) = v23;
          v29 = lambda_609c7463f0af8f0b222c22162fb8f533_::operator()(v51, v34, 0LL);
        }
        if ( !v29 )
        {
LABEL_9:
          result = (__int64)a10;
          *a10 = 0LL;
          return result;
        }
      }
      else
      {
        LOBYTE(v26) = a1 != 0LL;
        v27 = lambda_609c7463f0af8f0b222c22162fb8f533_::operator()(v51, v26, *v17);
        v29 = v27;
        if ( !v27 )
          goto LABEL_9;
        v40 = *(_DWORD *)(v27 + 8);
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( v42 )
            {
              if ( v42 == 1 )
                v15 = 4;
            }
            else
            {
              v15 = 3;
            }
          }
          else
          {
            v15 = 2;
          }
        }
        else
        {
          v15 = 1;
        }
        v43 = v53;
        v44 = v52;
        v45 = SGDGetSessionState(v28);
        PutFntCacheDrvAndFileInfo(*v17, *(struct PDEV **)(*(_QWORD *)(v45 + 32) + 23448LL), v15, v44, v43);
      }
      v38 = SGDGetSessionState(v35);
      *a10 = *(_QWORD *)(*(_QWORD *)(v38 + 32) + 23448LL);
      result = (__int64)a9;
      *a9 = v29;
    }
  }
  return result;
}
