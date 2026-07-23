/*
 * XREFs of SepLoadNgenLocations @ 0x1407C9654
 * Callers:
 *     SepSetSystemPaths @ 0x1407C9558 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  ULONG v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _DWORD *PoolWithTag; // rsi
  _DWORD *v9; // rax
  signed __int64 v10; // rdi
  __int16 v11; // cx
  ULONG v12; // r12d
  unsigned int v13; // r14d
  __int16 v14; // ax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  void *v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v27; // [rsp+50h] [rbp-51h]
  __int64 v28; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp-11h] BYREF
  _OWORD KeyInformation[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v32; // [rsp+C0h] [rbp+1Fh]

  v28 = a1;
  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v32 = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
LABEL_39:
      v3 = 0;
  }
  else
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 && (_DWORD)v32 && (unsigned int)(DWORD1(v32) - 1) <= 0xFFFE )
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
            goto LABEL_44;
          ++v6;
        }
        if ( ++v4 >= (unsigned int)v32 )
        {
          if ( !v6 )
            goto LABEL_39;
          v7 = v5 + 8;
          if ( v5 + 8 < v5 )
          {
LABEL_44:
            v3 = -1073741675;
            break;
          }
          v3 = 0;
          Length = DWORD1(v32) + 16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(DWORD1(v32) + 16), 0x63734943u);
          if ( PoolWithTag )
          {
            v9 = ExAllocatePoolWithTag(PagedPool, v7, 0x63734943u);
            v10 = (signed __int64)v9;
            if ( v9 )
            {
              v11 = -1;
              v9[1] = 0xFFFF;
              v12 = 0;
              v27 = &v9[4 * v6 + 2];
              v13 = v7 - (16 * v6 + 8);
              v14 = 0;
              if ( (_DWORD)v32 )
              {
                while ( 1 )
                {
                  v3 = ZwEnumerateValueKey(KeyHandle, v12, KeyValueBasicInformation, PoolWithTag, Length, &ResultLength);
                  if ( v3 < 0 )
                    break;
                  if ( PoolWithTag[1] == 4 )
                  {
                    v15 = PoolWithTag[2];
                    if ( v15 >= 2 )
                    {
                      v16 = PoolWithTag[2];
                      do
                      {
                        if ( *((_WORD *)PoolWithTag + ((unsigned __int64)v15 >> 1) + 5) )
                          break;
                        PoolWithTag[2] = v15 - 2;
                        v15 -= 2;
                        v16 = v15;
                      }
                      while ( v15 >= 2 );
                      if ( v16 )
                      {
                        if ( v16 > v13 || v1 >= v6 )
                        {
                          v3 = -2147483643;
                          break;
                        }
                        v17 = *(unsigned __int16 *)(v10 + 4);
                        v18 = v27;
                        if ( v17 >= v16 )
                          LOWORD(v17) = v16;
                        v19 = *(unsigned __int16 *)(v10 + 6);
                        *(_WORD *)(v10 + 4) = v17;
                        if ( v19 <= PoolWithTag[2] )
                          LOWORD(v19) = PoolWithTag[2];
                        *(_WORD *)(v10 + 6) = v19;
                        v20 = 2LL * v1;
                        *(_QWORD *)(v10 + 8 * v20 + 16) = v18;
                        *(_WORD *)(v10 + 8 * v20 + 8) = *((_WORD *)PoolWithTag + 4);
                        *(_WORD *)(v10 + 8 * v20 + 10) = *((_WORD *)PoolWithTag + 4);
                        memmove(v18, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
                        v21 = (unsigned int)PoolWithTag[2];
                        v27 = (char *)v27 + v21;
                        v13 -= v21;
                        ++v1;
                      }
                    }
                  }
                  if ( ++v12 >= (unsigned int)v32 )
                  {
                    v11 = *(_WORD *)(v10 + 4);
                    v14 = *(_WORD *)(v10 + 6);
                    goto LABEL_32;
                  }
                }
              }
              else
              {
LABEL_32:
                *(_DWORD *)v10 = v1;
                *(_WORD *)(v10 + 4) = v11 + 8;
                v22 = v28;
                *(_WORD *)(v10 + 6) = v14 + 8;
                v10 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 40), v10, 0LL) != 0);
              }
              if ( v10 )
                ExFreePoolWithTag((PVOID)v10, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
            ExFreePoolWithTag(PoolWithTag, 0x63734943u);
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
