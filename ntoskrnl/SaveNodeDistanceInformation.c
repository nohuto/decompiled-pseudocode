/*
 * XREFs of SaveNodeDistanceInformation @ 0x140B66ACC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rsi
  unsigned int v1; // ebx
  __int64 *v2; // r8
  __int64 v3; // r9
  _WORD *v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // r14d
  _QWORD *Pool2; // rax
  _QWORD *v8; // r13
  int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  ULONG v15; // r12d
  _DWORD *v16; // rax
  _DWORD *v17; // r15
  __int64 v18; // r11
  _DWORD *v19; // r10
  unsigned int v20; // r8d
  __int64 *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  _WORD *v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int i; // edi
  unsigned int v32; // edx
  unsigned __int64 v33; // rdi
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // r11
  __int64 v37; // r10
  __int64 v38; // r12
  unsigned __int16 *v39; // r8
  int v40; // r9d
  int v41; // ecx
  __int64 v42; // rdx
  _DWORD *v43; // r12
  __int64 *v44; // rdi
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // r15
  int v48; // ecx
  __int64 v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rcx
  unsigned int j; // edx
  __int64 v53; // rax
  unsigned int v54; // r14d
  __int64 v55; // rbx
  unsigned int v56; // r9d
  __int64 *v57; // r10
  int v58; // r8d
  int v59; // edx
  unsigned int v60; // edi
  int v61; // eax
  int v62; // r15d
  __int64 *v63; // r11
  __int64 v64; // r12
  unsigned int v65; // edi
  unsigned __int16 *v66; // r8
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rdx
  __int64 *v70; // rbx
  unsigned __int16 v71; // r10
  __int64 v72; // rcx
  int v73; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  int v75; // [rsp+50h] [rbp-71h]
  ULONG v76; // [rsp+54h] [rbp-6Dh]
  ULONG ResultLength; // [rsp+58h] [rbp-69h] BYREF
  PVOID P; // [rsp+60h] [rbp-61h]
  __int64 *v79; // [rsp+68h] [rbp-59h]
  __int64 v80; // [rsp+70h] [rbp-51h]
  _DWORD *v81; // [rsp+78h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+80h] [rbp-41h] BYREF
  _QWORD *v83; // [rsp+90h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp+7h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp+17h] BYREF
  int v87; // [rsp+DCh] [rbp+1Bh]
  int v88; // [rsp+E0h] [rbp+1Fh]
  unsigned int v89; // [rsp+E4h] [rbp+23h]

  v0 = (unsigned __int16)KeNumberNodes;
  KeyHandle = (HANDLE)-1LL;
  ResultLength = 0;
  v1 = 0;
  v75 = (unsigned __int16)KeNumberNodes;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( !KeNumberNodes )
    goto LABEL_8;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = (_WORD *)*v2;
    v5 = v1++;
    ++v2;
    if ( *v4 != v4[1] )
      v1 = v5;
    --v3;
  }
  while ( v3 );
  if ( v1 != 1 )
  {
LABEL_8:
    v6 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (int)v6, 0x616D754Eu);
    v83 = Pool2;
    v8 = Pool2;
    if ( !Pool2 )
    {
LABEL_102:
      if ( KeyHandle != (HANDLE)-1LL )
        ZwClose(KeyHandle);
      return;
    }
    memmove(Pool2, KiActualNodeCost, 8LL * (int)v6);
    v9 = 0;
    if ( (_DWORD)v0 != 1 )
    {
      do
      {
        v10 = v9 + 1;
        v11 = v9 + 1;
        if ( v9 + 1 < (unsigned int)v0 )
        {
          v12 = v10 + v9 * (_DWORD)v0;
          do
          {
            v13 = v8[v12];
            if ( v13 != -1LL )
            {
              v14 = (v8[v9 + v11 * (unsigned int)v0] >> 1) + (v13 >> 1);
              v8[v12] = v14;
              v8[v9 + v11 * (unsigned int)v0] = v14;
            }
            ++v11;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( v11 < (unsigned int)v0 );
        }
        ++v9;
      }
      while ( v10 < (int)v0 - 1 );
    }
    v15 = 2 * v1 * (v1 + 2) + 4;
    v76 = v15;
    v16 = (_DWORD *)ExAllocatePool2(256LL, v15, 0x2020654Bu);
    P = v16;
    v17 = v16;
    if ( !v16 )
    {
LABEL_100:
      ExFreePoolWithTag(v8, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_102;
    }
    *v16 = v1;
    v18 = v1 + 1;
    v19 = &v16[v18];
    v20 = 1;
    v81 = v19;
    if ( (_DWORD)v0 )
    {
      v21 = KeNodeBlock;
      v22 = v0;
      do
      {
        if ( *(_WORD *)*v21 == *(_WORD *)(*v21 + 2) )
        {
          v23 = v20++;
          v16[v23] = *(_DWORD *)(*v21 + 4);
        }
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    if ( v1 * v1 )
    {
      v24 = v1 * v1;
      v25 = &v16[v18];
      while ( v24 )
      {
        *v25++ = -1;
        --v24;
      }
    }
    v26 = 1LL;
    v27 = 0;
    if ( !v6 )
      goto LABEL_38;
    v28 = v8;
    do
    {
      if ( v26 < *v28 && *v28 != -1LL )
        v26 = *v28;
      ++v27;
      ++v28;
    }
    while ( v27 < v6 );
    if ( v26 > 0x1000000000000LL )
    {
      v29 = v26 >> 16;
      v30 = v8;
      for ( i = 0; i < v6; ++i )
      {
        if ( *v30 != -1LL )
          *v30 >>= 16;
        ++v30;
      }
      v32 = 0;
      v33 = 0x8000000000000000uLL / v29;
    }
    else
    {
LABEL_38:
      v33 = 0x8000000000000000uLL / v26;
      v32 = 0;
      if ( !v6 )
      {
LABEL_44:
        if ( (_DWORD)v0 )
        {
          v36 = KeNodeBlock;
          v80 = v0;
          v79 = KeNodeBlock;
          v37 = v0;
          v38 = v0;
          do
          {
            v39 = (unsigned __int16 *)*v36;
            if ( *(_WORD *)*v36 == *(_WORD *)(*v36 + 2) )
            {
              v40 = 0;
              v41 = 0;
              if ( v1 )
              {
                while ( 1 )
                {
                  v42 = (unsigned int)(v41 + 1);
                  if ( v17[v42] == *((_DWORD *)v39 + 1) )
                    break;
                  ++v41;
                  if ( (unsigned int)v42 >= v1 )
                    goto LABEL_52;
                }
                v40 = v1 * v41;
              }
LABEL_52:
              v43 = v81;
              v44 = KeNodeBlock;
              v45 = v37;
              do
              {
                v46 = *(unsigned __int16 *)*v44;
                if ( (_WORD)v46 == *(_WORD *)(*v44 + 2) )
                {
                  v47 = v46 + (unsigned int)v0 * *v39;
                  if ( v8[v47] != 0xFFFFLL )
                  {
                    v48 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v49 = (unsigned int)(v48 + 1);
                        if ( *((_DWORD *)P + v49) == *(_DWORD *)(*v44 + 4) )
                          break;
                        ++v48;
                      }
                      while ( (unsigned int)v49 < v1 );
                      LODWORD(v0) = v75;
                      v8 = v83;
                    }
                    v50 = v8[v47];
                    v51 = (unsigned int)(v40 + v48);
                    *((_WORD *)v43 + v51) = v50;
                    if ( !v50 )
                      *((_WORD *)v43 + v51) = 2;
                  }
                }
                ++v44;
                --v45;
              }
              while ( v45 );
              v36 = v79;
              v38 = v80;
              v17 = P;
              v37 = (unsigned int)v0;
            }
            ++v36;
            --v38;
            v79 = v36;
            v80 = v38;
          }
          while ( v38 );
          v19 = v81;
          LODWORD(v18) = v1 + 1;
          v15 = v76;
        }
        for ( j = 0; j < v1; *((_WORD *)v19 + v53) = 0 )
        {
          v53 = j * (unsigned int)v18;
          ++j;
        }
        v54 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
        {
          v55 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        else
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0
            && v87 == 4
            && v88 == 4 )
          {
            v54 = v89;
            if ( v89 - 1 > 0x31 )
              v54 = 10;
          }
          v55 = (__int64)KeyHandle;
        }
        v56 = 0;
        if ( (_DWORD)v0 )
        {
          v57 = KeNodeBlock;
          while ( *(_WORD *)*v57 != *(_WORD *)(*v57 + 2) )
          {
LABEL_85:
            ++v56;
            ++v57;
            if ( v56 >= (unsigned int)v0 )
              goto LABEL_100;
          }
          v58 = 0;
          while ( 1 )
          {
            if ( *(_WORD *)KeNodeBlock[v58] == *(_WORD *)(KeNodeBlock[v58] + 2) && v56 != v58 )
            {
              v59 = v8[v56 * (unsigned int)v0 + v58];
              v60 = *((_DWORD *)KeNodeDistance + v58 + v56 * (unsigned __int16)KeNumberNodes);
              v61 = v60 - v59;
              if ( (int)(v59 - v60) >= 0 )
                v61 = v59 - v60;
              if ( 100 * v61 / v54 > v60 )
                break;
            }
            if ( ++v58 >= (unsigned int)v0 )
              goto LABEL_85;
          }
          if ( v55 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v55, &ValueName, 0, 3u, v17, v15);
          }
          v62 = (unsigned __int16)KeNumberNodes;
          v63 = KeNodeBlock;
          v64 = (unsigned int)v0;
          v65 = 0;
          do
          {
            v66 = (unsigned __int16 *)*v63;
            v67 = *(unsigned __int16 *)(*v63 + 2);
            if ( *(_WORD *)*v63 != (_WORD)v67 )
              v66 = (unsigned __int16 *)KeNodeBlock[v67];
            v68 = v64;
            v69 = v65 * v62;
            v70 = KeNodeBlock;
            do
            {
              v71 = *(_WORD *)*v70;
              v72 = *(unsigned __int16 *)(*v70 + 2);
              if ( v71 != (_WORD)v72 )
                v71 = *(_WORD *)KeNodeBlock[v72];
              v73 = *v66;
              if ( (_WORD)v73 == v71 )
                *((_DWORD *)KeNodeDistance + v69) = 0;
              else
                *((_DWORD *)KeNodeDistance + v69) = v8[(unsigned int)v71 + (_DWORD)v0 * v73];
              v69 = (unsigned int)(v69 + 1);
              ++v70;
              --v68;
            }
            while ( v68 );
            ++v65;
            v64 = (unsigned int)v0;
            ++v63;
          }
          while ( v65 < (unsigned int)v0 );
        }
        goto LABEL_100;
      }
    }
    v34 = v8;
    do
    {
      if ( *v34 == -1 )
        v35 = 0xFFFFLL;
      else
        v35 = (v33 * *v34) >> 48;
      *v34 = v35;
      ++v32;
      ++v34;
    }
    while ( v32 < v6 );
    goto LABEL_44;
  }
}
