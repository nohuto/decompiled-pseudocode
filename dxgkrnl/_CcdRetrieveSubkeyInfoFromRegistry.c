/*
 * XREFs of _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C01BEB4C
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C01BE998 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CcdRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rdi
  void *v7; // rax
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    operator delete(v3);
    v7 = (void *)operator new[](Length, 0x63644356u, 256LL);
    v3 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(2LL, Length);
      v9 = -1073741801;
      goto LABEL_8;
    }
    v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v7, Length, &Length);
    v9 = v8;
  }
  while ( v8 == -2147483643 || v8 == -1073741789 );
  if ( v8 >= 0 )
  {
    *a3 = v3;
    return v9;
  }
LABEL_8:
  operator delete(v3);
  return v9;
}
