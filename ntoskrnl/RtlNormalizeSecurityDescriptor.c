char __fastcall RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *a1,
        ULONG a2,
        PSECURITY_DESCRIPTOR *a3,
        unsigned int *a4,
        char a5)
{
  _DWORD *v5; // rbp
  __int64 v6; // rdi
  _DWORD *Pool2; // rbx
  char v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  char *v13; // r12
  char *v14; // r14
  int v15; // eax
  unsigned __int8 *v16; // r14
  ULONG v17; // eax
  ULONG v18; // r12d
  int v19; // eax
  unsigned __int8 *v20; // r14
  ULONG v21; // eax
  ULONG v22; // r12d
  char *v24; // r13
  __int16 v25; // dx
  unsigned int v26; // r12d
  char *v27; // r14
  PSECURITY_DESCRIPTOR *v28; // rax
  unsigned __int16 v29; // ax
  char v31; // [rsp+78h] [rbp+10h]

  v5 = *a1;
  v6 = a2;
  v31 = 0;
  Pool2 = 0LL;
  v9 = 0;
  if ( SeValidSecurityDescriptor(a2, *a1) )
  {
    if ( a5 )
      goto LABEL_6;
    if ( a3 )
    {
      Pool2 = *a3;
      if ( *a3 )
      {
LABEL_5:
        *(_OWORD *)Pool2 = *(_OWORD *)v5;
        Pool2[4] = v5[4];
LABEL_6:
        v10 = (unsigned int)v5[3];
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v24 = (char *)v5 + v10;
          v25 = *(_WORD *)((char *)v5 + v10 + 4);
          v26 = v25 != 0 ? 0x14 : 0;
          v9 = v26 != (_DWORD)v10;
          if ( v26 != (_DWORD)v10 && a5 )
          {
LABEL_23:
            if ( !v9 )
              goto LABEL_24;
LABEL_38:
            if ( !a5 )
            {
              v28 = a3;
              if ( a3 )
              {
                if ( !v31 )
                {
LABEL_60:
                  if ( a4 )
                    *a4 = v11;
                  return v9;
                }
              }
              else
              {
                ExFreePoolWithTag(v5, 0);
                v28 = a1;
              }
              *v28 = Pool2;
              goto LABEL_60;
            }
LABEL_24:
            if ( v31 )
              ExFreePoolWithTag(Pool2, 0);
            return v9;
          }
          if ( v25 )
          {
            if ( a5 )
              v27 = 0LL;
            else
              v27 = (char *)Pool2 + v26;
            v9 |= RtlpNormalizeAcl(v27, (char *)v5 + v10, 0LL);
            if ( v9 && a5 )
              goto LABEL_38;
            if ( a5 )
            {
              v29 = *((_WORD *)v24 + 1);
            }
            else
            {
              Pool2[3] = v26;
              v29 = *((_WORD *)v27 + 1);
            }
            v11 = v29 + 20;
          }
          else
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_24;
            Pool2[3] = 0;
          }
        }
        v12 = (unsigned int)v5[4];
        if ( (_DWORD)v12 )
        {
          v9 |= v11 != (_DWORD)v12;
          if ( v9 && a5 )
            goto LABEL_24;
          v13 = (char *)v5 + v12;
          v14 = a5 ? 0LL : (char *)Pool2 + v11;
          v9 |= RtlpNormalizeAcl(v14, (char *)v5 + v12, 0LL);
          if ( v9 )
          {
            if ( a5 )
              goto LABEL_24;
          }
          if ( a5 )
          {
            v15 = *((unsigned __int16 *)v13 + 1);
          }
          else
          {
            Pool2[4] = v11;
            v15 = *((unsigned __int16 *)v14 + 1);
          }
          v11 += v15;
        }
        if ( v11 != v5[1] )
        {
          v9 = 1;
          if ( a5 )
            goto LABEL_24;
          Pool2[1] = v11;
        }
        v16 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v17 = RtlLengthRequiredSid(v16[1]);
        v18 = v17;
        if ( !a5 )
          memmove((char *)Pool2 + (unsigned int)Pool2[1], v16, v17);
        v19 = v5[2];
        v11 += v18;
        if ( v19 )
        {
          if ( v11 != v19 )
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_24;
            Pool2[2] = v11;
          }
          v20 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v21 = RtlLengthRequiredSid(v20[1]);
          v22 = v21;
          if ( !a5 )
            memmove((char *)Pool2 + (unsigned int)Pool2[2], v20, v21);
          v11 += v22;
        }
        goto LABEL_23;
      }
    }
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v6, 1683187027LL);
    if ( Pool2 )
    {
      v31 = 1;
      goto LABEL_5;
    }
  }
  return 0;
}
