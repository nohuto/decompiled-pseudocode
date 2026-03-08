/*
 * XREFs of _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x1C02FA1AC
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4ad224167d91228276911ab76f1e9490_::operator()(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax

  if ( a2 + 44 > MmUserProbeAddress || a2 + 44 <= a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  result = 4294967294LL;
  if ( *(_DWORD *)(a3 + 16) == -2 && *(_DWORD *)(a3 + 20) == -2 )
  {
    result = 64LL;
    *(_DWORD *)(a2 + 16) = 64;
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 12) = 64;
  }
  if ( a4 != 21 )
    *(_DWORD *)(a2 + 8) = a4;
  return result;
}
