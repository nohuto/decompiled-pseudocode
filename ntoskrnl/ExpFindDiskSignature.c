/*
 * XREFs of ExpFindDiskSignature @ 0x1409F983C
 * Callers:
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     ExpConvertSignatureName @ 0x1409F8E7C (ExpConvertSignatureName.c)
 *     ExpCreateOutputEFI @ 0x1409F91B8 (ExpCreateOutputEFI.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     ExpGetPartitionTableInfo @ 0x1409F9DB4 (ExpGetPartitionTableInfo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpFindDiskSignature(_QWORD *a1, _DWORD *a2, unsigned int *a3, _QWORD *a4, _QWORD *a5, char a6)
{
  __int64 result; // rax
  wchar_t *Pool2; // rsi
  unsigned int v9; // edi
  int PartitionTableInfo; // ebx
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // r9
  _QWORD *v16; // [rsp+20h] [rbp-88h]
  __int128 v19; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]

  v16 = a1;
  v20 = 0LL;
  v19 = 0LL;
  result = ZwQuerySystemInformation(7LL, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 76LL, 1920364101LL);
    if ( Pool2 )
    {
      v9 = 0;
      if ( (_DWORD)v19 )
      {
        do
        {
          swprintf_s(Pool2, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", v9, v16);
          PartitionTableInfo = ExpGetPartitionTableInfo(Pool2);
          if ( PartitionTableInfo >= 0 )
          {
            if ( MEMORY[0] == (a6 == 1) && (a6 == 1 || MEMORY[8] == *(_DWORD *)v16) )
            {
              v11 = 0;
              if ( MEMORY[4] )
              {
                v12 = 96LL;
                while ( 1 )
                {
                  v13 = v12 - 48;
                  if ( a6 == 1 )
                  {
                    v15 = *(_QWORD *)v12 - *v16;
                    if ( *(_QWORD *)v12 == *v16 )
                      v15 = *(_QWORD *)(v12 + 8) - v16[1];
                    v14 = v15 == 0;
                  }
                  else
                  {
                    v14 = *(_DWORD *)(v12 - 24) == *a2;
                  }
                  if ( v14 )
                    break;
                  ++v11;
                  v12 += 144LL;
                  if ( v11 >= MEMORY[4] )
                    goto LABEL_18;
                }
                *a2 = *(_DWORD *)(v13 + 24);
                *a3 = v9;
                if ( a4 )
                  *a4 = *(_QWORD *)(v13 + 8);
                if ( a5 )
                  *a5 = *(_QWORD *)(v13 + 16);
                ExFreePoolWithTag(0LL, 0);
                goto LABEL_22;
              }
            }
LABEL_18:
            ExFreePoolWithTag(0LL, 0);
          }
          ++v9;
        }
        while ( v9 < (unsigned int)v19 );
        if ( PartitionTableInfo < 0 )
          goto LABEL_22;
      }
      PartitionTableInfo = -1073741766;
LABEL_22:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)PartitionTableInfo;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
