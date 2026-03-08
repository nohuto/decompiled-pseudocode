/*
 * XREFs of RtlQueryModuleInformation @ 0x14076D540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Pool2; // rbx
  int SystemInformation; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  _BYTE P[304]; // [rsp+30h] [rbp-168h] BYREF

  memset(P, 0, 0x12CuLL);
  v6 = 0;
  if ( a2 == 272 )
  {
    result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
    if ( (a3 & 7) != 0 )
      return result;
  }
  else
  {
    if ( a2 != 8 )
      return 3221225712LL;
    if ( (a3 & 7) != 0 )
      return 3221225713LL;
  }
  Pool2 = (unsigned int *)P;
  while ( 1 )
  {
    SystemInformation = ZwQuerySystemInformation(11LL, (__int64)Pool2);
    v10 = SystemInformation;
    if ( ((SystemInformation + 0x80000000) & 0x80000000) == 0 && SystemInformation != -1073741820 )
      break;
    if ( !a3 )
    {
      v10 = 0;
      v11 = 14510024 * a2;
LABEL_13:
      *a1 = v11;
      break;
    }
    if ( SystemInformation >= 0 )
    {
      v11 = a2 * *Pool2;
      if ( *a1 < v11 )
      {
        v10 = -1073741789;
      }
      else if ( *Pool2 )
      {
        do
        {
          if ( a2 == 8 )
          {
            *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&Pool2[74 * v6 + 6];
          }
          else
          {
            v12 = 74LL * v6;
            v13 = a3 + 272LL * v6;
            *(_QWORD *)v13 = *(_QWORD *)&Pool2[v12 + 6];
            *(_DWORD *)(v13 + 8) = Pool2[v12 + 8];
            *(_WORD *)(v13 + 12) = HIWORD(Pool2[v12 + 11]);
            v14 = v12 * 4 + 48;
            v15 = (_OWORD *)(v13 + 14);
            v16 = 2LL;
            v17 = (_OWORD *)((char *)Pool2 + v14);
            do
            {
              *v15 = *v17;
              v15[1] = v17[1];
              v15[2] = v17[2];
              v15[3] = v17[3];
              v15[4] = v17[4];
              v15[5] = v17[5];
              v15[6] = v17[6];
              v15 += 8;
              v18 = v17[7];
              v17 += 8;
              *(v15 - 1) = v18;
              --v16;
            }
            while ( v16 );
          }
          ++v6;
        }
        while ( v6 < *Pool2 );
      }
      goto LABEL_13;
    }
    if ( Pool2 != (unsigned int *)P )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (unsigned int *)ExAllocatePool2(257LL, 0LL, 1416393810LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  if ( Pool2 != (unsigned int *)P )
    ExFreePoolWithTag(Pool2, 0);
  return v10;
}
