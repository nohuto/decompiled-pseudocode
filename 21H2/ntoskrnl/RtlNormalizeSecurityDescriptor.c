/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1402A6E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlIsZeroMemory @ 0x14058DB20 (RtlIsZeroMemory.c)
 *     SeValidSecurityDescriptor @ 0x1405F1FD0 (SeValidSecurityDescriptor.c)
 *     RtlLengthRequiredSid @ 0x1406CB9E0 (RtlLengthRequiredSid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rsi
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rdi
  BOOLEAN v9; // r13
  BOOLEAN valid; // al
  unsigned int v11; // ecx
  ULONG v12; // ebx
  unsigned int v13; // r12d
  unsigned int v14; // r11d
  __int64 v15; // r8
  ULONG v16; // r15d
  unsigned __int16 v17; // dx
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  _WORD *v21; // r14
  _WORD *v22; // r12
  unsigned __int16 v23; // ax
  SIZE_T v24; // rax
  int v25; // eax
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  char *v28; // r10
  _WORD *v29; // r12
  unsigned __int16 v30; // ax
  SIZE_T v31; // rax
  BOOLEAN IsZeroMemory; // al
  unsigned int v33; // eax
  unsigned __int8 *v34; // r14
  ULONG v35; // eax
  ULONG v36; // r15d
  unsigned int v37; // eax
  unsigned __int8 *v38; // r14
  ULONG v39; // eax
  ULONG v40; // r15d
  PSECURITY_DESCRIPTOR *v41; // rax
  unsigned int v43; // [rsp+20h] [rbp-68h]
  unsigned int v44; // [rsp+24h] [rbp-64h]
  unsigned __int16 j; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+28h] [rbp-60h]
  unsigned int v47; // [rsp+2Ch] [rbp-5Ch]
  unsigned __int16 i; // [rsp+2Ch] [rbp-5Ch]
  unsigned int v49; // [rsp+30h] [rbp-58h]
  int v50; // [rsp+34h] [rbp-54h]
  char *v51; // [rsp+38h] [rbp-50h]
  char v53; // [rsp+98h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v51 = 0LL;
  v53 = 0;
  PoolWithTag = 0LL;
  v9 = 0;
  valid = SeValidSecurityDescriptor(SecurityDescriptorLength, *SecurityDescriptor);
  v11 = 0;
  if ( valid )
  {
    if ( CheckOnly )
    {
LABEL_8:
      v12 = 20;
      v13 = 1;
      v50 = 1;
      do
      {
        if ( v13 == 1 )
          v14 = v5[3];
        else
          v14 = v5[4];
        v49 = v14;
        if ( v14 )
        {
          v15 = v14;
          if ( v13 != 1 || (v16 = 0, *(_WORD *)((char *)v5 + v14 + 4)) )
            v16 = v12;
          if ( v16 != v14 )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_89;
            if ( v13 == 1 )
              PoolWithTag[3] = v16;
            else
              PoolWithTag[4] = v16;
          }
          if ( v16 )
          {
            if ( !CheckOnly )
            {
              v51 = (char *)PoolWithTag + v16;
              *(_QWORD *)v51 = *(_QWORD *)((char *)v5 + v14);
              v11 = 0;
            }
            v17 = *(_WORD *)((char *)v5 + v14 + 4);
            v18 = (__int64)v5 + v14 + 8;
            v43 = 0;
            v12 += 8;
            v44 = 0;
            v19 = 0;
            v20 = 0;
            v21 = (_WORD *)v18;
            if ( v17 )
            {
              while ( 1 )
              {
                if ( *(_BYTE *)v21 )
                  goto LABEL_37;
                if ( CheckOnly )
                  break;
                v29 = v51 + 8;
                v46 = 0;
                if ( !v19 )
                  goto LABEL_38;
                v30 = v21[1];
                for ( i = v30; ; v30 = i )
                {
                  if ( v29[1] == v30 )
                  {
                    i = v21[1];
                    v31 = RtlCompareMemory(v21, v29, v30);
                    v19 = v43;
                    v11 = v46;
                    if ( v31 == i )
                      break;
                  }
                  ++v11;
                  v29 = (_WORD *)((char *)v29 + (unsigned __int16)v29[1]);
                  v46 = v11;
                  if ( v11 >= v19 )
                    goto LABEL_37;
                }
                v9 = 1;
                if ( v46 >= v43 )
                  goto LABEL_37;
                LOWORD(v25) = v21[1];
LABEL_40:
                v14 = v49;
                v15 = v49;
                v20 = v44 + 1;
                v21 = (_WORD *)((char *)v21 + (unsigned __int16)v25);
                v44 = v20;
                v17 = *(_WORD *)((char *)v5 + v49 + 4);
                v18 = (__int64)v5 + v49 + 8;
                if ( v20 >= v17 )
                {
                  v13 = v50;
                  goto LABEL_42;
                }
                v11 = 0;
              }
              v22 = (_WORD *)v18;
              v47 = 0;
              if ( v20 )
              {
                v23 = v21[1];
                for ( j = v23; ; v23 = j )
                {
                  if ( v22[1] == v23 )
                  {
                    j = v21[1];
                    v24 = RtlCompareMemory(v21, v22, v23);
                    v20 = v44;
                    v11 = v47;
                    if ( v24 == j )
                      break;
                  }
                  ++v11;
                  v22 = (_WORD *)((char *)v22 + (unsigned __int16)v22[1]);
                  v47 = v11;
                  if ( v11 >= v20 )
                    goto LABEL_36;
                }
                v9 = 1;
                if ( v47 < v44 )
                  goto LABEL_80;
LABEL_36:
                v19 = v43;
              }
LABEL_37:
              if ( !CheckOnly )
              {
LABEL_38:
                memmove((char *)PoolWithTag + v12, v21, (unsigned __int16)v21[1]);
                v19 = v43;
              }
              v25 = (unsigned __int16)v21[1];
              v12 += v25;
              v43 = ++v19;
              goto LABEL_40;
            }
LABEL_42:
            v26 = (v12 + 3) & 0xFFFFFFFC;
            v27 = v26 - v16;
            if ( v26 - v16 == *(unsigned __int16 *)((char *)v5 + v15 + 2) )
            {
              v28 = v51;
            }
            else
            {
              v9 = 1;
              if ( CheckOnly )
                goto LABEL_89;
              v28 = v51;
              *((_WORD *)v51 + 1) = v27;
              v17 = *(_WORD *)((char *)v5 + v15 + 4);
            }
            if ( v19 != v17 )
              *((_WORD *)v28 + 2) = v19;
            if ( v12 == v26 )
            {
              v11 = 0;
            }
            else
            {
              if ( v16 == v14 && v27 == *(unsigned __int16 *)((char *)v5 + v15 + 2) )
              {
                IsZeroMemory = RtlIsZeroMemory((char *)v5 + v12, v26 - v12);
                v11 = 0;
                if ( !IsZeroMemory )
                {
                  v9 = 1;
                  if ( CheckOnly )
                    goto LABEL_89;
                }
              }
              else
              {
                v11 = 0;
              }
              if ( !CheckOnly )
              {
                memset((char *)PoolWithTag + v12, 0, v26 - v12);
                v11 = 0;
              }
              v12 = (v12 + 3) & 0xFFFFFFFC;
            }
          }
        }
        v50 = ++v13;
      }
      while ( v13 <= 2 );
      v33 = v5[1];
      if ( v12 != v33 )
      {
        v9 = 1;
        if ( CheckOnly )
          goto LABEL_89;
        PoolWithTag[1] = v12;
        v33 = v5[1];
      }
      v34 = (unsigned __int8 *)v5 + v33;
      v35 = RtlLengthRequiredSid(v34[1]);
      v36 = v35;
      if ( !CheckOnly )
        memmove((char *)PoolWithTag + (unsigned int)PoolWithTag[1], v34, v35);
      v37 = v5[2];
      v12 += v36;
      if ( v37 )
      {
        if ( v12 != v37 )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_89;
          PoolWithTag[2] = v12;
          v37 = v5[2];
        }
        v38 = (unsigned __int8 *)v5 + v37;
        v39 = RtlLengthRequiredSid(v38[1]);
        v40 = v39;
        if ( !CheckOnly )
          memmove((char *)PoolWithTag + (unsigned int)PoolWithTag[2], v38, v39);
        v12 += v40;
      }
LABEL_80:
      if ( v9 && !CheckOnly )
      {
        v41 = NewSecurityDescriptor;
        if ( NewSecurityDescriptor )
        {
          if ( !v53 )
            goto LABEL_87;
        }
        else
        {
          ExFreePoolWithTag(v5, 0);
          v41 = SecurityDescriptor;
        }
        *v41 = PoolWithTag;
LABEL_87:
        if ( NewSecurityDescriptorLength )
          *NewSecurityDescriptorLength = v12;
        return v9;
      }
LABEL_89:
      if ( v53 )
        ExFreePoolWithTag(PoolWithTag, 0);
      return v9;
    }
    if ( NewSecurityDescriptor )
    {
      PoolWithTag = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_7:
        *(_OWORD *)PoolWithTag = *(_OWORD *)v5;
        PoolWithTag[4] = v5[4];
        v11 = 0;
        goto LABEL_8;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x64536553u);
    if ( PoolWithTag )
    {
      v53 = 1;
      goto LABEL_7;
    }
  }
  return 0;
}
