/*
 * XREFs of PfSnOperationProcess @ 0x14097C840
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1407E2E70 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfSnEndProcessTrace @ 0x140796460 (PfSnEndProcessTrace.c)
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 *     PfSnFindImageFileName @ 0x1407E4EF4 (PfSnFindImageFileName.c)
 *     PfSnCheckScenario @ 0x1407E6F8C (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x1407E7450 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rdi
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  bool v6; // cf
  unsigned int v7; // ebx
  _KPROCESS *Process; // r14
  int v9; // eax
  unsigned __int64 ImageFileName; // r9
  int v11; // ecx
  unsigned int v12; // edx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-19h] BYREF
  wchar_t pszDest[32]; // [rsp+58h] [rbp-9h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  v14 = 0;
  P = 0LL;
  if ( !v2 || (v4 = *(_BYTE *)(a1 + 1), v4 >= 2u) || *(_WORD *)(a1 + 2) )
  {
    v7 = -1073741811;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = v5 < 2;
    }
    else
    {
      if ( (v5 & 4) != 0 && (v5 & 3) != 0 )
        return (unsigned int)-1073741811;
      v6 = v5 < 8;
    }
    if ( !v6 )
      return (unsigned int)-1073741811;
    if ( (int)PfSnCheckScenario(1, &v14) < 0 )
      return 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    v9 = PfCalculateProcessHash((__int64)Process, (unsigned __int64)&P);
    v3 = P;
    v7 = v9;
    if ( v9 >= 0 )
    {
      ImageFileName = PfSnFindImageFileName((unsigned __int16 *)P, v16);
      if ( ImageFileName )
      {
        RtlStringCbPrintfW(
          pszDest,
          0x3CuLL,
          L"Op-%.17s-%08X",
          ImageFileName,
          HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]));
        v11 = *(_DWORD *)(a1 + 4);
        v12 = v11 & 1;
        v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
        *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
        if ( v2 )
        {
          if ( (v11 & 2) != 0 || v14 == 2 )
          {
            v12 |= 2u;
          }
          else if ( (v11 & 4) != 0 )
          {
            v12 |= 4u;
          }
          PfSnBeginScenario(Process, (unsigned __int8 *)pszDest, 1, v12, 0LL);
        }
        else
        {
          PfSnEndProcessTrace((__int64)Process, v12 + 8, pszDest);
        }
        v7 = 0;
      }
      else
      {
        v7 = -1073741595;
      }
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v7;
}
