/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018E088
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00D4310 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(const struct _RETRY_MODE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // ebx
  struct D3DKMT_GETPATHSMODALITY *v3; // rdi
  int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD, struct D3DKMT_GETPATHSMODALITY *); // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int CcdRawmodeFlag; // eax

  v2 = 0;
  v3 = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = *((_DWORD *)a1 + 1);
  v6 = 0xFFFFFFFFLL;
  if ( v5 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      v6 = *((unsigned __int16 *)v3 + 10);
      if ( *((_WORD *)v3 + 10) )
      {
        v7 = *((_QWORD *)v3 + 7);
        do
        {
          a2 = (struct D3DKMT_GETPATHSMODALITY *)0xFFFFFBFFFE7CFE78LL;
          ++v2;
          v7 &= 0xFFFFFBFFFE7CFE78uLL;
        }
        while ( v2 < (unsigned int)v6 );
        *((_QWORD *)v3 + 7) = v7;
      }
      goto LABEL_14;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)v3 + 10) != 1 )
      WdLogSingleEntry0(1LL);
    v6 = 0xFFFFFBFFFE7EFF7CuLL;
    v8 = *((_QWORD *)v3 + 7) & 0xFFFFFBFFFE7EFF7CuLL;
    *((_BYTE *)v3 + 184) = 0;
    *((_DWORD *)v3 + 47) = 1;
    *((_QWORD *)v3 + 7) = v8 | 0x20304;
    *((_DWORD *)v3 + 34) = 9;
    *((_DWORD *)v3 + 52) = *((_DWORD *)a1 + 1);
    *((_DWORD *)v3 + 53) = *((_DWORD *)a1 + 2);
    *((_DWORD *)v3 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)v3 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)v3 + 40) = *((_DWORD *)a1 + 1);
    *((_DWORD *)v3 + 41) = *((_DWORD *)a1 + 2);
    *((_DWORD *)v3 + 43) = 21;
    *((_DWORD *)v3 + 42) = 0;
    *((_QWORD *)v3 + 22) = 0LL;
  }
LABEL_14:
  v9 = *(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(DxDdGetDxgkWin32kInterface(v6, a2) + 152);
  CcdRawmodeFlag = GetCcdRawmodeFlag(v11, v10);
  return v9(CcdRawmodeFlag | 0x8000u, v3);
}
