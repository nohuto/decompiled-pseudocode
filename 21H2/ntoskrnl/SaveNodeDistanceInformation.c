/*
 * XREFs of SaveNodeDistanceInformation @ 0x140A4C6F0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void SaveNodeDistanceInformation()
{
  __int64 v0; // rsi
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int16 v5; // dx
  __int16 v6; // cx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v10; // r12
  UNICODE_STRING *Class; // rdi
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // r13
  __int64 v20; // r10
  unsigned int v21; // r8d
  _DWORD *v22; // r15
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 *v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // r10
  __int64 v37; // rcx
  __int64 v38; // r11
  __int64 v39; // r9
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // rdx
  __int64 *v43; // rdi
  __int64 v44; // r14
  int v45; // eax
  int v46; // ecx
  __int64 v47; // rdx
  __int16 v48; // ax
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rax
  unsigned int v52; // r14d
  __int64 v53; // rbx
  char v54; // r10
  unsigned int v55; // r9d
  __int64 *v56; // r11
  int v57; // r8d
  int v58; // edx
  unsigned int v59; // edi
  int v60; // eax
  int v61; // r14d
  __int64 *v62; // r10
  __int64 v63; // r15
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 *v68; // r11
  __int64 v69; // rax
  __int64 v70; // rcx
  int v71; // ecx
  int v72; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  ULONG DataSize; // [rsp+54h] [rbp-5Dh]
  _DWORD *v76; // [rsp+58h] [rbp-59h]
  __int64 *v77; // [rsp+60h] [rbp-51h]
  __int64 v78; // [rsp+68h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-21h] BYREF
  char KeyValueInformation[4]; // [rsp+C0h] [rbp+Fh] BYREF
  int v83; // [rsp+C4h] [rbp+13h]
  int v84; // [rsp+C8h] [rbp+17h]
  unsigned int v85; // [rsp+CCh] [rbp+1Bh]

  KeyHandle = (HANDLE)-1LL;
  v0 = (unsigned __int16)KeNumberNodes;
  ResultLength = 0;
  v1 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ValueName = 0LL;
  if ( !KeNumberNodes )
    goto LABEL_8;
  v2 = KeNodeBlock;
  v3 = (unsigned __int16)KeNumberNodes;
  do
  {
    v4 = *v2++;
    v5 = *(_WORD *)(v4 + 146);
    v6 = *(_WORD *)(v4 + 148);
    v7 = v1 + 1;
    if ( v5 != v6 )
      v7 = v1;
    v1 = v7;
    --v3;
  }
  while ( v3 );
  if ( v7 != 1 )
  {
LABEL_8:
    v8 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * (int)v8, 0x616D754Eu);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, KiActualNodeCost, 8LL * (int)v8);
      Class = 0LL;
      v12 = 0;
      if ( (_DWORD)v0 != 1 )
      {
        do
        {
          v13 = v12 + 1;
          v14 = v12 + 1;
          if ( v12 + 1 < (unsigned int)v0 )
          {
            v15 = v13 + v12 * (_DWORD)v0;
            do
            {
              v16 = v10[v15];
              if ( v16 != -1LL )
              {
                v17 = (v10[v12 + v14 * (unsigned int)v0] >> 1) + (v16 >> 1);
                v10[v15] = v17;
                v10[v12 + v14 * (unsigned int)v0] = v17;
              }
              ++v14;
              v15 = (unsigned int)(v15 + 1);
            }
            while ( v14 < (unsigned int)v0 );
          }
          ++v12;
        }
        while ( v13 < (int)v0 - 1 );
        Class = 0LL;
      }
      DataSize = 2 * v1 * (v1 + 2) + 4;
      v18 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
      v19 = v18;
      if ( v18 )
      {
        v20 = v1 + 1;
        *v18 = v1;
        v21 = 1;
        v22 = &v18[v20];
        v76 = v22;
        if ( (_DWORD)v0 )
        {
          v23 = KeNodeBlock;
          v24 = v0;
          do
          {
            if ( *(_WORD *)(*v23 + 146) == *(_WORD *)(*v23 + 148) )
            {
              v25 = v21++;
              v18[v25] = *(_DWORD *)(*v23 + 168);
            }
            ++v23;
            --v24;
          }
          while ( v24 );
          Class = 0LL;
        }
        if ( v1 * v1 )
        {
          v26 = v1 * v1;
          v27 = &v18[v20];
          while ( v26 )
          {
            *v27++ = -1;
            --v26;
          }
          Class = 0LL;
        }
        v28 = 1LL;
        if ( v8 )
        {
          v29 = v10;
          v30 = v8;
          v31 = v8;
          do
          {
            if ( v28 < *v29 && *v29 != -1LL )
              v28 = *v29;
            ++v29;
            --v31;
          }
          while ( v31 );
          if ( v28 > 0x1000000000000LL )
          {
            v28 >>= 16;
            v32 = v10;
            do
            {
              if ( *v32 != -1LL )
                *v32 >>= 16;
              ++v32;
              --v30;
            }
            while ( v30 );
          }
          Class = 0LL;
        }
        v33 = 0x8000000000000000uLL / v28;
        if ( v8 )
        {
          v34 = (__int64 *)v10;
          Class = (UNICODE_STRING *)v8;
          do
          {
            if ( *v34 == -1 )
              v35 = 0xFFFFLL;
            else
              v35 = (v33 * *v34) >> 48;
            *v34++ = v35;
            Class = (UNICODE_STRING *)((char *)Class - 1);
          }
          while ( Class );
        }
        if ( (_DWORD)v0 )
        {
          v36 = KeNodeBlock;
          v37 = v0;
          v77 = KeNodeBlock;
          v38 = v0;
          v78 = v0;
          do
          {
            v39 = *v36;
            if ( *(_WORD *)(*v36 + 146) == *(_WORD *)(*v36 + 148) )
            {
              v40 = (int)Class;
              v41 = (int)Class;
              if ( v1 )
              {
                while ( 1 )
                {
                  v42 = (unsigned int)(v41 + 1);
                  if ( v19[v42] == *(_DWORD *)(v39 + 168) )
                    break;
                  ++v41;
                  if ( (unsigned int)v42 >= v1 )
                    goto LABEL_55;
                }
                v40 = v1 * v41;
              }
LABEL_55:
              v43 = KeNodeBlock;
              v44 = v38;
              do
              {
                v45 = *(unsigned __int16 *)(*v43 + 146);
                if ( (_WORD)v45 == *(_WORD *)(*v43 + 148) )
                {
                  if ( v10[v45 + (unsigned int)v0 * *(unsigned __int16 *)(v39 + 146)] == 0xFFFF )
                  {
                    v22 = v76;
                  }
                  else
                  {
                    v46 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v47 = (unsigned int)(v46 + 1);
                        if ( v19[v47] == *(_DWORD *)(*v43 + 168) )
                          break;
                        ++v46;
                      }
                      while ( (unsigned int)v47 < v1 );
                    }
                    v48 = v10[v45 + (unsigned int)v0 * *(unsigned __int16 *)(v39 + 146)];
                    v49 = (unsigned int)(v40 + v46);
                    v22 = v76;
                    *((_WORD *)v76 + v49) = v48;
                    if ( !v48 )
                      *((_WORD *)v22 + v49) = 2;
                  }
                }
                ++v43;
                --v44;
              }
              while ( v44 );
              v36 = v77;
              v38 = v0;
              v37 = v78;
              Class = 0LL;
            }
            ++v36;
            --v37;
            v77 = v36;
            v78 = v37;
          }
          while ( v37 );
          LODWORD(v20) = v1 + 1;
        }
        v50 = (unsigned int)Class;
        if ( v1 )
        {
          do
          {
            v51 = v50 * (unsigned int)v20;
            ++v50;
            *((_WORD *)v22 + v51) = (_WORD)Class;
          }
          while ( v50 < v1 );
        }
        v52 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Class;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, Class, (ULONG)Class, (PULONG)&Class->Length) < 0 )
        {
          v53 = -1LL;
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
            && v83 == 4
            && v84 == 4 )
          {
            v52 = v85;
            if ( v85 - 1 > 0x31 )
              v52 = 10;
          }
          v53 = (__int64)KeyHandle;
        }
        v54 = (char)Class;
        v55 = (unsigned int)Class;
        if ( (_DWORD)v0 )
        {
          v56 = KeNodeBlock;
          while ( 1 )
          {
            if ( *(_WORD *)(*v56 + 146) == *(_WORD *)(*v56 + 148) )
            {
              v57 = (int)Class;
              while ( 1 )
              {
                if ( *(_WORD *)(KeNodeBlock[v57] + 146) == *(_WORD *)(KeNodeBlock[v57] + 148) && v55 != v57 )
                {
                  v58 = v10[v55 * (unsigned int)v0 + v57];
                  v59 = *((_DWORD *)KeNodeDistance + v57 + v55 * (unsigned __int16)KeNumberNodes);
                  v60 = v59 - v58;
                  if ( (int)(v58 - v59) >= 0 )
                    v60 = v58 - v59;
                  if ( 100 * v60 / v52 > v59 )
                    break;
                }
                if ( ++v57 >= (unsigned int)v0 )
                  goto LABEL_90;
              }
              v54 = 1;
LABEL_90:
              LODWORD(Class) = 0;
              if ( v54 )
                break;
            }
            ++v55;
            ++v56;
            if ( v55 >= (unsigned int)v0 )
              goto LABEL_106;
          }
          if ( v53 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v53, &ValueName, 0, 3u, v19, DataSize);
          }
          v61 = (unsigned __int16)KeNumberNodes;
          v62 = KeNodeBlock;
          v63 = v0;
          do
          {
            v64 = *v62;
            v65 = *(unsigned __int16 *)(*v62 + 148);
            if ( *(_WORD *)(*v62 + 146) != (_WORD)v65 )
              v64 = KeNodeBlock[v65];
            v66 = v63;
            v67 = (unsigned int)(v61 * (_DWORD)Class);
            v68 = KeNodeBlock;
            do
            {
              v69 = *v68;
              v70 = *(unsigned __int16 *)(*v68 + 148);
              if ( *(_WORD *)(*v68 + 146) != (_WORD)v70 )
                v69 = KeNodeBlock[v70];
              v71 = *(unsigned __int16 *)(v64 + 146);
              v72 = *(unsigned __int16 *)(v69 + 146);
              if ( (_WORD)v71 == (_WORD)v72 )
                *((_DWORD *)KeNodeDistance + v67) = 0;
              else
                *((_DWORD *)KeNodeDistance + v67) = v10[(unsigned int)(v72 + v0 * v71)];
              v67 = (unsigned int)(v67 + 1);
              ++v68;
              --v66;
            }
            while ( v66 );
            LODWORD(Class) = (_DWORD)Class + 1;
            ++v62;
            v63 = v0;
          }
          while ( (unsigned int)Class < (unsigned int)v0 );
        }
      }
LABEL_106:
      ExFreePoolWithTag(v10, 0);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    if ( KeyHandle != (HANDLE)-1LL )
      ZwClose(KeyHandle);
  }
}
