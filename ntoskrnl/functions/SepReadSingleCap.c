__int64 __fastcall SepReadSingleCap(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  ULONG Length; // ebp
  unsigned int *Pool2; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int *v14; // r13
  unsigned __int64 v15; // r14
  __int16 v16; // ax
  void *v17; // r14
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  _QWORD *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  ResultLength = 0;
  Length = a2 + 18;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(a2 + 18), 1884513619LL);
  if ( Pool2 )
  {
    v8 = ZwQueryValueKey(KeyHandle, &ContainedCapes, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v9 = Pool2[2] != 0 ? Pool2[2] >> 2 : 0;
    v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v10 = Pool2[2] + ((8 * v9 + 73) & 0xFFFFFFFE);
    v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v11 = v10 + Pool2[2];
    v12 = ExAllocatePool2(256LL, v11, 1884513619LL);
    v13 = v12;
    if ( v12 )
    {
      v24 = v11 + v12;
      v8 = ZwQueryValueKey(KeyHandle, &CapeFlags, KeyValuePartialInformation, Pool2, Length, &ResultLength);
      if ( v8 >= 0 )
      {
        if ( Pool2[2] == 4 )
        {
          v14 = Pool2 + 3;
          *(_DWORD *)(v13 + 56) = Pool2[3];
          v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
          if ( v8 >= 0 )
          {
            v15 = (v13 + 8LL * (unsigned int)v9 + 73) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v15 + Pool2[2] <= v24 )
            {
              v16 = *((_WORD *)Pool2 + 4);
              *(_WORD *)(v13 + 42) = v16;
              *(_WORD *)(v13 + 40) = v16;
              *(_QWORD *)(v13 + 48) = v15;
              memmove((void *)((v13 + 8 * v9 + 73) & 0xFFFFFFFFFFFFFFFEuLL), Pool2 + 3, Pool2[2]);
              v17 = (void *)(Pool2[2] + v15);
              v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, Pool2, Length, &ResultLength);
              if ( v8 < 0 )
                goto LABEL_24;
              if ( (unsigned __int64)v17 + Pool2[2] <= v24 )
              {
                *(_QWORD *)(v13 + 24) = v17;
                memmove(v17, Pool2 + 3, Pool2[2]);
                v8 = ZwQueryValueKey(
                       KeyHandle,
                       &ContainedCapes,
                       KeyValuePartialInformation,
                       Pool2,
                       Length,
                       &ResultLength);
                if ( v8 < 0 )
                  goto LABEL_24;
                v18 = 0;
                *(_DWORD *)(v13 + 60) = v9;
                if ( !(_DWORD)v9 )
                {
LABEL_21:
                  if ( RtlValidSid(*(PSID *)(v13 + 24)) )
                    *a5 = v13;
                  else
                    v8 = -1073741704;
                  goto LABEL_24;
                }
                v19 = v26;
                v20 = (_QWORD *)(v13 + 64);
                v21 = v27;
                while ( 1 )
                {
                  v22 = *v14;
                  if ( (unsigned int)v22 >= v19 )
                    break;
                  ++v18;
                  ++v14;
                  *v20++ = v21 + 56 * v22;
                  if ( v18 >= (unsigned int)v9 )
                    goto LABEL_21;
                }
              }
            }
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
LABEL_24:
    ExFreePoolWithTag(Pool2, 0x70536553u);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
