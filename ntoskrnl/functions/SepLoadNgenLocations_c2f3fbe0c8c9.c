__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _DWORD *Pool2; // rsi
  __int64 v9; // rax
  signed __int64 v10; // rdi
  ULONG v11; // r12d
  unsigned int v12; // r14d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  void *v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v25; // [rsp+50h] [rbp-51h]
  __int64 v26; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-11h] BYREF
  _OWORD KeyInformation[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v30; // [rsp+C0h] [rbp+1Fh]

  v26 = a1;
  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v30 = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
LABEL_40:
      v3 = 0;
  }
  else
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 && (_DWORD)v30 && (unsigned int)(DWORD1(v30) - 1) <= 0xFFFE )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v3 = ZwEnumerateValueKey(KeyHandle, v4, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
        if ( ((v3 + 0x80000000) & 0x80000000) == 0 && v3 != -2147483643 )
          break;
        if ( DWORD1(KeyValueInformation) == 4 && DWORD2(KeyValueInformation) >= 2 )
        {
          v5 += DWORD2(KeyValueInformation) + 16;
          if ( v5 < DWORD2(KeyValueInformation) + 16 )
            goto LABEL_48;
          ++v6;
        }
        if ( ++v4 >= (unsigned int)v30 )
        {
          if ( !v6 )
            goto LABEL_40;
          v7 = v5 + 8;
          if ( v5 + 8 < v5 )
          {
LABEL_48:
            v3 = -1073741675;
            break;
          }
          Length = DWORD1(v30) + 16;
          v3 = 0;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(DWORD1(v30) + 16), 1668499779LL);
          if ( Pool2 )
          {
            v9 = ExAllocatePool2(256LL, v7, 1668499779LL);
            v10 = v9;
            if ( v9 )
            {
              *(_DWORD *)(v9 + 4) = 0xFFFF;
              v11 = 0;
              v25 = (void *)(v9 + 16LL * v6 + 8);
              v12 = v7 - (16 * v6 + 8);
              if ( (_DWORD)v30 )
              {
                while ( 1 )
                {
                  v3 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueBasicInformation, Pool2, Length, &ResultLength);
                  if ( v3 < 0 )
                    break;
                  if ( Pool2[1] == 4 )
                  {
                    v13 = Pool2[2];
                    if ( v13 >= 2 )
                    {
                      v14 = Pool2[2];
                      do
                      {
                        if ( *((_WORD *)Pool2 + ((unsigned __int64)v13 >> 1) + 5) )
                          break;
                        Pool2[2] = v13 - 2;
                        v13 -= 2;
                        v14 = v13;
                      }
                      while ( v13 >= 2 );
                      if ( v14 )
                      {
                        if ( v14 > v12 || v1 >= v6 )
                        {
                          v3 = -2147483643;
                          break;
                        }
                        v15 = *(unsigned __int16 *)(v10 + 4);
                        v16 = v25;
                        if ( v15 >= v14 )
                          LOWORD(v15) = v14;
                        v17 = *(unsigned __int16 *)(v10 + 6);
                        *(_WORD *)(v10 + 4) = v15;
                        if ( v17 <= Pool2[2] )
                          LOWORD(v17) = Pool2[2];
                        *(_WORD *)(v10 + 6) = v17;
                        v18 = 2LL * v1;
                        *(_QWORD *)(v10 + 8 * v18 + 16) = v16;
                        *(_WORD *)(v10 + 8 * v18 + 8) = *((_WORD *)Pool2 + 4);
                        *(_WORD *)(v10 + 8 * v18 + 10) = *((_WORD *)Pool2 + 4);
                        memmove(v16, Pool2 + 3, (unsigned int)Pool2[2]);
                        v19 = (unsigned int)Pool2[2];
                        v25 = (char *)v25 + v19;
                        v12 -= v19;
                        ++v1;
                      }
                    }
                  }
                  if ( ++v11 >= (unsigned int)v30 )
                    goto LABEL_31;
                }
              }
              else
              {
LABEL_31:
                *(_WORD *)(v10 + 4) += 8;
                *(_WORD *)(v10 + 6) += 8;
                v20 = v26;
                *(_DWORD *)v10 = v1;
                v10 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 40), v10, 0LL) != 0);
              }
              if ( v10 )
                ExFreePoolWithTag((PVOID)v10, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
            ExFreePoolWithTag(Pool2, 0x63734943u);
          }
          else
          {
            v3 = -1073741801;
          }
          break;
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
