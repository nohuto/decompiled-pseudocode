void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  char *v7; // rsi
  char *v9; // r15
  __int64 v10; // rcx
  rsize_t v11; // rbx
  char *v12; // rbx
  char *i; // rdi
  rsize_t v14; // r8
  char *v15; // rdx
  rsize_t v16; // rbx
  char v17; // cl
  rsize_t v18; // rbx
  char *v19; // rdi
  rsize_t v20; // r9
  char *v21; // r8
  char v22; // cl
  rsize_t v23; // r8
  char *v24; // rdx
  char *v25; // r9
  char v26; // cl
  rsize_t v27; // r8
  char *v28; // rdx
  signed __int64 v29; // r9
  char v30; // cl
  char *v31; // rbx
  char *v32; // rsi
  char *v33; // rbp
  rsize_t v34; // r8
  char *v35; // rdx
  __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  char *v40; // [rsp+38h] [rbp-440h]
  _QWORD v41[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v42[62]; // [rsp+230h] [rbp-248h] BYREF

  v40 = (char *)Base;
  v7 = (char *)Base;
  memset(v41, 0, sizeof(v41));
  memset(v42, 0, sizeof(v42));
  if ( (v7 || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v9 = &v7[SizeOfElements * (NumOfElements - 1)];
      v10 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = (v9 - v7) / SizeOfElements + 1;
          if ( v11 <= 8 )
          {
            if ( v9 > v7 )
            {
              do
              {
                v12 = v7;
                for ( i = &v7[SizeOfElements]; i <= v9; i += SizeOfElements )
                {
                  if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, i, v12) > 0 )
                    v12 = i;
                }
                v14 = SizeOfElements;
                v15 = v9;
                if ( v12 != v9 )
                {
                  v16 = v12 - v9;
                  do
                  {
                    v17 = v15[v16];
                    v15[v16] = *v15;
                    *v15++ = v17;
                    --v14;
                  }
                  while ( v14 );
                }
                v9 -= SizeOfElements;
              }
              while ( v9 > v7 );
              v10 = v39;
            }
            goto LABEL_18;
          }
          v18 = SizeOfElements * (v11 >> 1);
          v19 = &v7[v18];
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v7, &v7[v18]) > 0 )
          {
            v20 = SizeOfElements;
            v21 = &v7[v18];
            if ( v7 != v19 )
            {
              do
              {
                v22 = v21[-v18];
                v21[-v18] = *v21;
                *v21++ = v22;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *, rsize_t))PtFuncCompare)(Context, v7, v9, v20) > 0 )
          {
            v23 = SizeOfElements;
            v24 = v9;
            if ( v7 != v9 )
            {
              v25 = (char *)(v7 - v9);
              do
              {
                v26 = v24[(_QWORD)v25];
                v24[(_QWORD)v25] = *v24;
                *v24++ = v26;
                --v23;
              }
              while ( v23 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, &v7[v18], v9) > 0 )
          {
            v27 = SizeOfElements;
            v28 = v9;
            if ( v19 != v9 )
            {
              v29 = v19 - v9;
              do
              {
                v30 = v28[v29];
                v28[v29] = *v28;
                *v28++ = v30;
                --v27;
              }
              while ( v27 );
            }
          }
          v31 = v7;
          v32 = v9;
          while ( 1 )
          {
            if ( v19 > v31 )
            {
              while ( 1 )
              {
                v31 += SizeOfElements;
                if ( v31 >= v19 )
                  break;
                if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v31, v19) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v31 += SizeOfElements;
            while ( v31 <= v9 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v31, v19) <= 0 );
            do
            {
LABEL_38:
              v33 = v32;
              v32 -= SizeOfElements;
            }
            while ( v32 > v19 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v32, v19) > 0 );
            if ( v32 < v31 )
              break;
            v34 = SizeOfElements;
            v35 = v32;
            if ( v32 != v31 )
            {
              v36 = v31 - v32;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v34;
              }
              while ( v34 );
            }
            v38 = v31;
            if ( v19 != v32 )
              v38 = v19;
            v19 = v38;
          }
          if ( v19 < v33 )
          {
            while ( 1 )
            {
              v33 -= SizeOfElements;
              if ( v33 <= v19 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v19) )
              {
                v7 = v40;
                goto LABEL_54;
              }
            }
          }
          v7 = v40;
          do
            v33 -= SizeOfElements;
          while ( v33 > v40 && !((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v19) );
LABEL_54:
          v10 = v39;
          if ( v33 - v7 >= v9 - v31 )
            break;
          if ( v31 < v9 )
          {
            v41[v39] = v31;
            v42[v39] = v9;
            v10 = ++v39;
          }
          if ( v7 >= v33 )
          {
LABEL_18:
            v39 = --v10;
            if ( v10 < 0 )
              return;
            v7 = (char *)v41[v10];
            v9 = (char *)v42[v10];
            v40 = v7;
          }
          else
          {
            v9 = v33;
          }
        }
        if ( v7 < v33 )
        {
          v41[v39] = v7;
          v42[v39] = v33;
          v10 = ++v39;
        }
        if ( v31 >= v9 )
          goto LABEL_18;
        v7 = v31;
        v40 = v31;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
