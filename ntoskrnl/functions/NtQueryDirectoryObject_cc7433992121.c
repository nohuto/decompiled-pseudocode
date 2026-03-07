__int64 __fastcall NtQueryDirectoryObject(
        HANDLE Handle,
        char *Address,
        SIZE_T Length,
        char a4,
        char a5,
        int *a6,
        unsigned int *a7)
{
  __int64 v7; // rsi
  KPROCESSOR_MODE PreviousMode; // bl
  int v10; // r12d
  const void **Pool2; // rsi
  NTSTATUS v12; // ebx
  unsigned int v13; // r15d
  int v14; // ebx
  int v15; // esi
  unsigned int v16; // ecx
  _QWORD *v17; // r13
  _QWORD *v18; // rdi
  unsigned int v19; // esi
  int v20; // r14d
  int v21; // eax
  int v22; // eax
  const void **v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned __int16 v27; // r9
  char *v28; // rdi
  const void **v29; // rsi
  char *v30; // rdi
  char *v31; // rdi
  unsigned int v32; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // [rsp+30h] [rbp-98h]
  int v38; // [rsp+30h] [rbp-98h]
  int v39; // [rsp+38h] [rbp-90h]
  __int64 v40; // [rsp+38h] [rbp-90h]
  unsigned int v41; // [rsp+40h] [rbp-88h]
  const void **v42; // [rsp+48h] [rbp-80h]
  const void **Src; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  __int128 v46; // [rsp+78h] [rbp-50h] BYREF
  __int64 v47; // [rsp+88h] [rbp-40h]
  unsigned int Size; // [rsp+E0h] [rbp+18h]

  Size = Length;
  v7 = (unsigned int)Length;
  DestinationString = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, (unsigned int)Length, 2u);
    v34 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v34 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v34 = *(_DWORD *)v34;
    if ( a7 )
    {
      v35 = (__int64)a7;
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v35 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v35 = *(_DWORD *)v35;
    }
    if ( a5 )
      v10 = 0;
    else
      v10 = *a6;
  }
  else if ( a5 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *a6;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return 3221225485LL;
  Pool2 = (const void **)ExAllocatePool2(257LL, v7 + 32, 1833853519LL);
  Src = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v12;
  }
  else
  {
    v42 = Pool2;
    v13 = 32;
    v14 = 0;
    v37 = 0;
    v15 = -2147483622;
    v39 = -2147483622;
    ObpLockDirectoryShared(&v46, Object);
    v16 = 0;
    v41 = 0;
    v17 = Object;
    do
    {
      v18 = (_QWORD *)*v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          v19 = v13;
          v20 = v14;
          v21 = v14++;
          if ( v10 == v21 )
          {
            v24 = v18[1] - 48LL;
            v40 = v24;
            if ( (*(_BYTE *)(v24 + 26) & 2) != 0 )
              v25 = v24 - ObpInfoMaskToOffset[*(_BYTE *)(v24 + 26) & 3];
            else
              v25 = 0LL;
            if ( v25 )
            {
              DestinationString = *(UNICODE_STRING *)(v25 + 8);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
              v24 = v40;
            }
            v26 = (unsigned __int8)ObHeaderCookie;
            v27 = DestinationString.Length;
            v13 += DestinationString.Length
                 + 36
                 + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 + 24) ^ BYTE1(v24) ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                                       + 16);
            if ( v13 > Size )
            {
              v14 = v20;
              v36 = -1073741789;
              if ( !a4 )
                v36 = 261;
              v39 = v36;
              if ( !a4 )
                v13 = v19;
              v15 = v36;
              goto LABEL_13;
            }
            *(_WORD *)v42 = DestinationString.Length;
            *((_WORD *)v42 + 1) = v27 + 2;
            v42[1] = DestinationString.Buffer;
            *((_WORD *)v42 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 + 24) ^ BYTE1(v24) ^ (unsigned __int64)v26]
                                           + 16);
            *((_WORD *)v42 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 + 24) ^ BYTE1(v24) ^ (unsigned __int64)v26]
                                           + 16)
                                + 2;
            v42[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v24 + 24) ^ BYTE1(v24) ^ (unsigned __int64)v26]
                                    + 24);
            v15 = 0;
            v39 = 0;
            v23 = v42 + 4;
            v42 += 4;
            v22 = ++v37;
            if ( a4 )
              goto LABEL_20;
            ++v10;
          }
          v18 = (_QWORD *)*v18;
          if ( !v18 )
          {
            v16 = v41;
            v15 = v39;
            break;
          }
        }
      }
      v41 = ++v16;
      ++v17;
    }
    while ( v16 < 0x25 );
LABEL_13:
    v22 = v37;
    v23 = v42;
LABEL_20:
    if ( v15 >= 0 )
    {
      *(_OWORD *)v23 = 0LL;
      *((_OWORD *)v23 + 1) = 0LL;
      v28 = (char *)(v23 + 4);
      if ( v22 )
      {
        v29 = Src + 3;
        do
        {
          v38 = v22 - 1;
          memmove(v28, *(v29 - 2), *((unsigned __int16 *)v29 - 12));
          *(v29 - 2) = &Address[v28 - (char *)Src];
          v30 = &v28[*((unsigned __int16 *)v29 - 12)];
          *(_WORD *)v30 = 0;
          v30 += 2;
          memmove(v30, *v29, *((unsigned __int16 *)v29 - 4));
          *v29 = &Address[v30 - (char *)Src];
          v31 = &v30[*((unsigned __int16 *)v29 - 4)];
          *(_WORD *)v31 = 0;
          v28 = v31 + 2;
          v29 += 4;
          v22 = v38;
        }
        while ( v38 );
        v15 = v39;
      }
    }
    ObpUnlockDirectory(&v46);
    v32 = Size;
    if ( v13 <= Size )
      v32 = v13;
    memmove(Address, Src, v32);
    if ( a7 )
      *a7 = v13;
    if ( v15 >= 0 )
      *a6 = v14;
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(Src, 0);
    return (unsigned int)v15;
  }
}
