/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C02CBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF hsurf, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx
  void *v6; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v3 = HmgShareLockCheck(hsurf, a2);
  v4 = 0;
  v8 = v3;
  v5 = v3;
  if ( v3 && (*(_DWORD *)(v3 + 112) & 0x40000) != 0 )
  {
    v6 = *(void **)(v3 + 144);
    if ( v6 )
    {
      MmUnsecureVirtualMemory(v6);
      *(_QWORD *)(v5 + 144) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
    if ( EngDeleteSurface(hsurf) )
      return 1;
  }
  else if ( v3 )
  {
    DEC_SHARE_REF_CNT(v3);
  }
  return v4;
}
