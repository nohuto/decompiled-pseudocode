/*
 * XREFs of GreUnrealizeObject @ 0x1C02D42E8
 * Callers:
 *     NtGdiUnrealizeObject @ 0x1C02C7720 (NtGdiUnrealizeObject.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreUnrealizeObject(HPALETTE a1)
{
  unsigned int v1; // edi
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v3 = v7;
  if ( v7 )
  {
    v7 = *((_QWORD *)Gre::Base::Globals(v2) + 5);
    GreAcquireSemaphore(v7);
    v4 = *(_DWORD **)(v3 + 72);
    if ( v4 )
      *v4 = 0;
    v5 = *(_DWORD **)(v3 + 80);
    if ( v5 )
      *v5 = 0;
    v1 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
  }
  return v1;
}
