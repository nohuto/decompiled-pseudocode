/*
 * XREFs of DpIsFeatureEnabled @ 0x1C0394650
 * Callers:
 *     <none>
 * Callees:
 *     DpQueryFeatureSupport @ 0x1C021A040 (DpQueryFeatureSupport.c)
 */

__int64 __fastcall DpIsFeatureEnabled(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // eax
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 12) = 0;
  v11 = 0LL;
  v8 = v1;
  v9 = v3;
  v5 = *(_DWORD **)(v1 + 64);
  if ( v5 && v5[4] == 1953656900 && v5[5] == 2 )
  {
    LOBYTE(v2) = v5[281] == 4318;
    v10 = v2 + 1;
    v6 = DpQueryFeatureSupport(&v8);
    *(_BYTE *)(a1 + 12) = v11;
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v6;
}
