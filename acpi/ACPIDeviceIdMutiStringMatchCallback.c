/*
 * XREFs of ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C830
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00438EC (ACPIAnsiStringToWideHelper.c)
 *     ACPIConvertWideStringToUpperCaseHelper @ 0x1C004399C (ACPIConvertWideStringToUpperCaseHelper.c)
 */

__int64 __fastcall ACPIDeviceIdMutiStringMatchCallback(
        __int64 **a1,
        int a2,
        const void **a3,
        unsigned int a4,
        _DWORD *a5,
        int a6)
{
  const void **v6; // r15
  unsigned int v9; // ebp
  wchar_t *v10; // rdi
  unsigned int v12; // r14d
  __int64 *v13; // rsi
  __int64 v14; // rsi
  int v15; // edx
  unsigned int v16; // r13d
  _DWORD *v17; // rax
  _BYTE *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbx
  void *Pool2; // rax
  size_t v22; // r8
  __int64 v23; // rcx
  wchar_t *v24; // rax
  const wchar_t *v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // r15d
  const wchar_t **v29; // rbx
  unsigned __int64 v30; // r12
  PVOID *v31; // rbx
  __int64 v32; // rsi
  int v34; // [rsp+20h] [rbp-168h]
  const void **v35; // [rsp+28h] [rbp-160h]
  __int64 v36; // [rsp+30h] [rbp-158h]
  void *v37; // [rsp+38h] [rbp-150h]
  _QWORD v38[32]; // [rsp+40h] [rbp-148h] BYREF

  v6 = a3;
  v35 = a3;
  v9 = 0;
  v10 = 0LL;
  memset(v38, 0, sizeof(v38));
  v12 = 1;
  if ( a2 == 1 )
  {
    v13 = *a1;
    if ( *((_DWORD *)v13 + 2) >= 0x18u )
    {
      v14 = *v13;
      if ( v14 )
      {
        if ( a6 == a4 && *(_QWORD *)(v14 + 8) >= 4uLL )
        {
          if ( *(_QWORD *)(v14 + 8) == 4LL )
            return 0;
          if ( a4 > 0x10 )
            return v12;
          v15 = *(_DWORD *)(v14 + 16);
          v16 = 0;
          v34 = v15;
          if ( !a4 )
            return 0;
          v17 = a5;
          do
          {
            v18 = *v6;
            if ( *v6 && *v17 == v15 )
            {
              v19 = -1LL;
              do
                ++v19;
              while ( v18[v19] );
              if ( (unsigned int)v19 > 0x7FFE )
                goto LABEL_29;
              v20 = 2LL * v9;
              LOWORD(v38[v20]) = 2 * v19;
              v36 = (unsigned __int16)(2 * v19 + 2);
              WORD1(v38[v20]) = v36;
              Pool2 = (void *)ExAllocatePool2(256LL, v36, 1399874369LL);
              v38[2 * v9 + 1] = Pool2;
              v37 = Pool2;
              if ( !Pool2 )
                goto LABEL_29;
              v22 = (unsigned int)(v19 + 1);
              v6 = v35;
              memmove(Pool2, *v35, v22);
              ACPIAnsiStringToWideHelper(v37, v36);
              ACPIConvertWideStringToUpperCaseHelper(v23, v36);
              v17 = a5;
              v15 = v34;
              ++v9;
            }
            ++v17;
            ++v6;
            ++v16;
            a5 = v17;
            v35 = v6;
          }
          while ( v16 < a4 );
          if ( !v9 )
            return 0;
          v24 = (wchar_t *)ExAllocatePool2(256LL, *(_QWORD *)(v14 + 8), 1399874369LL);
          v10 = v24;
          if ( v24 )
          {
            memmove(v24, *(const void **)v14, *(_QWORD *)(v14 + 8));
            ACPIConvertWideStringToUpperCaseHelper(v10, *(_QWORD *)(v14 + 8) - 4LL);
            v12 = 0;
            v25 = v10;
            LODWORD(v26) = 0;
            if ( *v10 )
            {
              while ( 2 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( v25[v27] );
                v28 = 0;
                v26 = (unsigned int)(v27 + v26 + 1);
                v29 = (const wchar_t **)&v38[1];
                v30 = 2LL * (unsigned int)v27;
                do
                {
                  if ( v30 >= *((unsigned __int16 *)v29 - 4) && wcsstr(v25, *v29) )
                  {
                    v12 = 2;
                    goto LABEL_30;
                  }
                  ++v28;
                  v29 += 2;
                }
                while ( v28 < v9 );
                v25 = &v10[v26];
                if ( *v25 )
                  continue;
                break;
              }
            }
          }
LABEL_29:
          if ( v9 )
          {
LABEL_30:
            v31 = (PVOID *)&v38[1];
            v32 = v9;
            do
            {
              if ( *v31 )
                ExFreePoolWithTag(*v31, 0x53706341u);
              v31 += 2;
              --v32;
            }
            while ( v32 );
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0x53706341u);
        }
      }
    }
  }
  return v12;
}
